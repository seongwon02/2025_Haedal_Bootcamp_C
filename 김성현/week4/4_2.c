#include <stdio.h>

typedef struct {
    int xpos, ypos;
} Point;

int main(void)
{
    Point points[3];

    for (int i = 0; i < 3; i++)
        scanf("%d %d", &points[i].xpos, &points[i].ypos);

    Point sol = {points[0].xpos, points[0].ypos};

    if (sol.xpos == points[1].xpos)
        sol.xpos = points[2].xpos;
    else if (sol.xpos == points[2].xpos)
        sol.xpos = points[1].xpos;
        
    if (sol.ypos == points[1].ypos)
        sol.ypos = points[2].ypos;
    else if (sol.ypos == points[2].ypos)
        sol.ypos = points[1].ypos;

    printf("%d %d", sol.xpos, sol.ypos);

    return 0;
}