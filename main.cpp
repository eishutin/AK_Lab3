#include stdio.h
#include unistd.h
#include map
#include string
#include getopt.h

using namespace std;

int main(int argc, char argv[]) {
	int line = 0;
	map string, bool used;

	int option_index = -1;
	const char short_options = lhvV;
	//list, help, version, Value

	const struct option long_options[] = {
		{list,0,NULL,'l'},
		{help,0,NULL,'h'},
		{version,0,NULL,'v'},
		{value,0,NULL,'V'},
		{NULL,0,NULL,0},
	};

	while ((line = getopt_long(argc, argv, short_options, long_options, &option_index)) != -1) {
		switch (line) {
		case 'l' {
			if (used[l] == false) {
				printf(Arg Listn);
				used[l] = true;
				break;
			}
			break;
		}
		case 'h' {
			if (used[h] == false) {
				printf(Arg Helpn);
				used[h] = true;
				break;
			}
			break;
		}

		case 'v' {
			if (used[v] == false) {
				printf(Arg Versionn);
				used[v] = true;
				break;
			}
			break;
		}
		case 'V' {
			if (used[V] == false) {
				if (optarg == NULL) {
					printf(Arg Valuen);
					used[V] = true;
				} else {
                    printf(Arg %s Valuen, optarg);
					used[V] = true;
				}
				break;
			}
			break;
		}
		};
		option_index = -1;
	};
};