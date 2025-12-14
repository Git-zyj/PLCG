/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(var_4, var_4)));
    var_16 *= (min((!6895593360509926755), var_2));
    var_17 ^= 207;
    var_18 = (((((var_6 ? var_11 : (207 / var_0)))) ? (max((min(var_11, 1919236747)), ((6895593360509926759 ? var_3 : 2405)))) : ((var_1 ? ((2375730549 ? var_10 : var_6)) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 += (max(((-830617484 ? 1303729575 : 12916525494635328908)), (arr_6 [i_2 - 1] [i_1 - 1] [i_0 - 1])));
                            arr_10 [i_0 + 1] [i_0] = 1919236747;
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (((((((((-2147483647 - 1) ? 1484 : var_13))) ? (((arr_7 [i_0] [i_0 - 1] [i_0] [i_1]) ? (arr_4 [20] [i_1] [20] [i_0]) : 2141980470)) : ((var_7 ? var_1 : 2141980470))))) ? ((min((arr_4 [i_1 + 3] [i_0 - 2] [i_0 - 1] [i_0]), (arr_4 [i_1 + 1] [i_0 - 1] [17] [i_0 - 2])))) : (min((arr_2 [i_1 + 1] [i_0 - 1]), 11551150713199624869))));
            }
        }
    }
    #pragma endscop
}
