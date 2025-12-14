/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3 + 2] [i_1] [i_3 + 2] [i_4] = (((((arr_11 [i_4] [i_4 + 2] [i_4 + 4] [i_4 + 4] [i_4] [i_4 - 2]) ? 18446744073709551615 : (arr_11 [i_4] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 2]))) / ((22 ? (arr_9 [i_4] [i_4 + 1] [i_4 - 2] [i_1] [i_4 + 1]) : (arr_11 [i_4] [i_4 + 3] [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 - 1])))));
                                arr_14 [i_4] [i_1] [i_1] [i_3 + 2] [i_1] [i_1] [i_2 + 1] = (min((!-1), ((((((arr_12 [i_1] [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : -2172112614823229964))) ? (max(-23, 5626943547510867781)) : (arr_5 [i_3] [i_3] [6])))));
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] = ((+((var_12 ? (arr_11 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_3]) : (arr_12 [i_1] [i_3 - 1] [i_2 - 1])))));
                                arr_16 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = (((max((((var_0 <= (arr_1 [i_0 - 1])))), ((10031 ? 9020059979145036372 : (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))) < (arr_6 [i_1] [i_3] [i_1])));
                            }
                        }
                    }
                }
                arr_17 [i_1] = 205;
                var_14 = (min(var_1, (~2529248968)));

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_20 [i_0] [11] [i_1] [i_1] = (((arr_3 [i_1]) ? var_11 : (-127 - 1)));
                    arr_21 [i_5] [i_5] [i_1] = (!7);
                    arr_22 [i_1] [6] [i_5] [i_1] = var_10;
                }
            }
        }
    }
    var_15 = (max((~4095), (min(((var_6 ? 0 : var_6)), (~var_9)))));
    #pragma endscop
}
