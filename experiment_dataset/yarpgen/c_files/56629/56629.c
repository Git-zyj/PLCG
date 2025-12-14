/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = 120;
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_0] = (((((var_8 + 2147483647) >> (((max(32767, -102)) - 32756)))) + (min((var_4 < var_15), var_6))));
                    }
                }
            }
        }

        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            arr_14 [i_0] [i_0] = (max((-336213928 < -336213928), (min(-98, 1))));
            arr_15 [i_0] = var_14;
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_6] = (max((min(1, var_15)), (((~((max(var_3, var_2))))))));
                var_17 = (min((max((min(-574155931543225413, var_4)), 642093333)), var_6));
                arr_21 [0] &= -642093333;
            }
        }
    }
    var_18 = var_11;
    var_19 |= ((max((max(-1874543678532829800, 132927743)), var_12)));
    #pragma endscop
}
