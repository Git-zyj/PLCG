/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] |= ((var_13 ? 55 : 8716135986007573329));
                var_16 = (max(var_16, (((((((((161 ? (arr_5 [i_1] [i_1] [i_0 + 2]) : (arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 1])))) ? (2 >= -1) : (var_11 / -58)))) ? (((var_14 ? (((!(-127 - 1)))) : var_14))) : (arr_1 [i_0 - 1]))))));
                arr_8 [i_1] |= (max(((var_8 ? (((-1282121801 ? (arr_3 [i_0]) : -1))) : (min(18843, 0)))), (arr_6 [i_0])));
                arr_9 [i_0] [i_1] [i_1] = (arr_3 [i_0 - 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_15 [i_0 + 2] [i_1] [i_0 + 2] [i_3 - 1] [i_0 + 2] [i_0 + 2] |= (((((arr_6 [i_0 - 2]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_6 [i_0 + 1]))) + (((((arr_6 [i_3 - 1]) < (arr_11 [i_0 - 2] [i_1] [i_2] [i_3 - 2])))))));
                            arr_16 [i_0] [i_0] [i_3 + 1] = ((((max((((arr_10 [i_1]) * (arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2]))), (arr_5 [i_0 - 1] [i_1] [i_2])))) ? -2 : ((115 ? ((min(8, (arr_13 [i_0] [i_0] [i_0] [i_0])))) : (((arr_10 [i_1]) ? var_10 : var_10))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((6367005699115085855 ? 182061724116978551 : 62))) ? ((var_6 ? 1048512 : ((var_10 ? var_7 : 14336)))) : ((~(var_0 < -152027934)))));
    var_18 |= (max(1, 1));
    #pragma endscop
}
