/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [22] [i_2] [11] [11] [i_4] = ((((((!((max(var_3, var_9))))))) & var_7));
                                arr_12 [i_0] [i_1] [i_2] [i_2] = (min(var_0, ((((var_2 && 3746126671261838947) >> var_10)))));
                                arr_13 [22] [i_2] = 38;
                                arr_14 [i_0] [19] [19] [i_2] [i_0] = (((arr_6 [i_2]) & ((~((9409725434963808695 ? (arr_6 [i_2]) : 1586412441))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] = 1;
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
