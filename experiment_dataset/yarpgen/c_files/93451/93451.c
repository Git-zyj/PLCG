/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [15] = (255 > var_2);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_1] = ((59100 ? 119 : 240));
            arr_9 [i_0] [i_1] [0] = (5995668219864987745 == var_9);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] = var_2;
                            arr_17 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = (~-3371419799504384178);
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [10] [15] [i_2] [i_3] = -1;
                            arr_23 [i_1] |= ((15125 ? var_13 : var_2));
                        }

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_28 [i_0] [i_3] = 204;
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_3] [3] [i_6] = -18;
                            arr_30 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] = ((60706 ? var_13 : -11));
                        }
                    }
                }
            }
            arr_31 [i_1] [i_0] = var_5;
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_34 [i_7] [i_0] [i_7] = (var_0 | 4836);
            arr_35 [i_0] [i_7] [i_7 + 1] = (~var_5);
        }
        arr_36 [i_0] = 50900;
        arr_37 [i_0] [i_0] = (((~var_0) % (4964509968742393368 && var_0)));
    }
    var_16 = var_14;
    #pragma endscop
}
