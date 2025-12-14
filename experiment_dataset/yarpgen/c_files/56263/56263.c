/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max((arr_3 [i_1 + 2] [i_1 + 1]), 0))) ? (((arr_3 [i_1 + 1] [14]) ? (arr_3 [i_1 + 1] [i_1]) : (arr_1 [i_1 + 1] [i_0]))) : (arr_3 [i_1 - 1] [i_1 - 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [6] [i_0] [0] [i_0] &= ((526464655 ? 873139369 : -24606));
                                arr_15 [18] [i_1] [8] [i_2 + 1] [i_0] [i_3] [13] = var_1;
                                var_13 ^= (min((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4]), (((!(arr_6 [i_1 + 1] [i_2 + 1] [i_3] [i_3]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] [15] [i_1] = ((~(arr_5 [i_0] [i_1] [i_0])));
                    arr_20 [i_0] [i_0] = arr_1 [i_0] [i_0];
                    arr_21 [i_0] [i_0] [i_1 + 1] [12] &= (arr_6 [i_0] [i_0] [i_1] [i_5]);
                }
                var_14 -= ((3421827926 ? ((((max(3421827945, (arr_7 [i_0] [i_1 + 2] [i_1])))) ? (min(53238, var_3)) : (((var_4 ? 1 : 873139355))))) : ((((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [21])))))));
                var_15 = ((((((max(1075981701, (arr_0 [i_0]))) || ((max(var_3, (arr_10 [i_0] [i_0] [21] [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    var_16 = var_3;
    var_17 = var_6;
    #pragma endscop
}
