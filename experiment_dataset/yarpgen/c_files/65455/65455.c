/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((max(var_16, 60))) ? var_5 : var_12));
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((min(6068592329278117044, ((min(195, 1))))) - (((((((var_16 ? var_14 : -5892))) || (~2863541869951107554)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_4 - 1] [i_3] [1] [i_2] [i_1] [11] |= 1;
                                var_22 = (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                                var_23 = (min(var_23, ((max(((6068592329278117044 ? 18446744073709551609 : -32739)), 118)))));
                            }
                        }
                    }
                }
                var_24 = ((((min(var_2, (arr_10 [i_1])))) || (((59084 / (arr_10 [i_0 - 1]))))));
                var_25 ^= (((((-(arr_10 [i_0 - 1])))) ? (((arr_9 [i_1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) & (arr_9 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_9 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                var_26 ^= ((var_17 ? -32761 : (((!(((-15108 ? var_8 : var_1))))))));
            }
        }
    }
    #pragma endscop
}
