/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((max((-9223372036854775807 - 1), 7)), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = (max(-var_6, (((arr_2 [i_3 - 2] [i_0] [i_0 + 1]) ? (arr_2 [i_3 + 1] [i_0] [i_0 + 2]) : var_2))));
                                var_12 = ((-(arr_7 [i_0])));
                            }
                        }
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((min(-78, -32))) < var_7));
                }
                var_13 = (((((arr_3 [i_0] [i_0 - 1]) != var_0)) || ((((arr_3 [i_0] [i_0 + 1]) * (arr_3 [i_0] [i_0 + 1]))))));
                var_14 = (max((max(var_1, var_5)), (arr_7 [i_0])));
            }
        }
    }
    var_15 ^= var_7;
    var_16 = ((((var_3 ? (min(var_9, var_4)) : (((min(61704, 77)))))) >= var_2));
    #pragma endscop
}
