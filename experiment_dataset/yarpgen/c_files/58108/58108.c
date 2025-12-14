/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(18446744073709551601, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_10 [i_1] [i_0] [i_0] [i_2] = (((arr_2 [i_3 - 1]) <= (min(((var_14 ? (arr_8 [1] [10] [6] [i_3 - 2] [i_3] [i_3] [6]) : (arr_7 [5] [i_1] [5] [7]))), 1))));
                                var_16 = ((~((~(2418962473 || 1)))));
                                var_17 ^= ((-(((arr_2 [i_1]) ? var_8 : ((((arr_2 [i_3]) | (arr_9 [i_0] [i_2 - 3] [3] [7] [i_4]))))))));
                                var_18 = (min(0, (min(-4294967290, (11793586204003231715 ^ 1)))));
                                var_19 -= var_3;
                            }
                        }
                    }
                }
                var_20 = ((-(((arr_2 [i_1 - 2]) ? ((25 ? var_14 : var_4)) : (((max((arr_4 [13] [15] [12] [i_0]), (arr_8 [i_0] [0] [i_0] [1] [i_0] [i_0] [i_1])))))))));
                var_21 = var_10;
                var_22 = (((arr_3 [17] [i_1] [14]) ? ((max((1 || 218), (!var_4)))) : (arr_4 [i_1] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_23 |= var_8;
    var_24 = ((((max(var_2, var_0))) ? (~var_7) : var_2));
    #pragma endscop
}
