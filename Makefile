CC = cc
CFLAGS = -Wall -Werror -Wextra -g

## Ajoutez ici tous les fichiers .c nécessaires à l'exécutable
SRCS = \
	$(SRC_DIR)main.c \
	$(SRC_DIR)note.c 

SRC_DIR = src/
BUILD_DIR = build/
OBJS = $(subst $(SRC_DIR),$(BUILD_DIR),$(SRCS:.c=.o))
INCLUDE = -Iinclude
NAME = Prog ## nom de l'exécutable

## Couleurs de police
FWHITE = \033[1;37m
FBROWN = \033[0;33m
FGREEN = \033[0;32m
FCYAN = \033[0;36m
RESET = \033[0m

all: $(NAME)

$(BUILD_DIR):
	@mkdir -p $@

$(BUILD_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(BUILD_DIR) $(OBJS)
	@echo "$(FBROWN)>>>    Compilation de $(NAME)...    <<< $(RESET)"
	@for i in 1 2 3 4; do \
		case $$i in \
			1)sp="|";; \
			2)sp="/";; \
			3)sp="--";; \
			4)sp="\\";; \
		esac; \
		echo -n "$(FBROWN)           $$sp \r$(RESET)"; \
		sleep 0.3; \
	done
	@printf "$(FWHITE)                                        $(RESET)\n"
	@printf "$(FWHITE)                                        $(RESET)\n"
	@printf "$(FWHITE)    ███╗   ██╗ ██████╗ ████████╗███████╗$(RESET)\n"
	@printf "$(FWHITE)    ████╗  ██║██╔═══██╗╚══██╔══╝██╔════╝$(RESET)\n"
	@printf "$(FWHITE)    ██╔██╗ ██║██║   ██║   ██║   █████╗  $(RESET)\n"
	@printf "$(FWHITE)    ██║╚██╗██║██║   ██║   ██║   ██╔══╝  $(RESET)\n"
	@printf "$(FWHITE)    ██║ ╚████║╚██████╔╝   ██║   ███████╗$(RESET)\n"
	@printf "$(FWHITE)    ╚═╝  ╚═══╝ ╚═════╝    ╚═╝   ╚══════╝$(RESET)\n"
	@printf "$(FWHITE)          📝 Gestionnaire de Notes 📝     $(RESET)\n"
	@printf "\n\n✅$(FGREEN)Programme compilé avec succès$(RESET)\n"
	@$(CC) $(OBJS) -o $(NAME)

clean:
	@for obj in $(OBJS); do \
		if [ -f $$obj ]; then \
			rm -f $$obj; \
			echo "🚮  Suppression de $$obj"; \
		fi; \
	done
	@if [ -d $(BUILD_DIR) ]; then \
		rm -rf $(BUILD_DIR); \
		echo "🚮  Suppression du répertoire $(BUILD_DIR)"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -f $(NAME); \
		echo "🚮$(FCYAN)  Suppression de l'exécutable $(NAME)$(RESET)"; \
	fi
	@echo "$(FGREEN)✅  Nettoyage complet terminé$(RESET)"

re: fclean all
	@printf "👷🔨$(FBROWN)Exécutable reconstruit$(RESET)\n"

.SILENT:
.PHONY: all clean fclean re

