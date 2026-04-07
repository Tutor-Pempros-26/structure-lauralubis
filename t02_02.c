// 12S25037 - Laura Lubis

#include <stdio.h>

int main(int _argv, char **_argc)
{
  MenuLevel menus[] = {
        {1, {"staple food"}, 1, "you need side dishes"},
        {2, {"side dishes", "staple food"}, 2, "you need vegetables"},
        {3, {"vegetables", "side dishes", "staple food"}, 3, "good"},
        {4, {"fruits", "vegetables", "side dishes", "staple food"}, 4, "very good"},
        {5, {"milk", "fruits", "vegetables", "side dishes", "staple food"}, 5, "perfect"}
    };

    int level;
    if (scanf("%d", &level) != 1) {
        return 0;
    }

    if (level < 1 || level > 5) {
        return 0;
    }

    MenuLevel selected = menus[level - 1];
    for (int i = 0; i < selected.itemCount; i++) {
        printf("%s\n", selected.items[i]);
    }
    printf("%s\n", selected.summary);
  
  return 0;
 
}
