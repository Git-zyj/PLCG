/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min((!var_18), var_0)))));
    var_21 = var_4;
    var_22 = (-(var_2 + 22319));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_23 ^= var_4;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_24 = (min(var_24, (37947572 ^ 53)));
                            var_25 ^= 5278730503851995123;
                            var_26 = (max(var_26, (arr_8 [i_0] [i_2] [8])));
                            arr_12 [i_0 - 1] [i_3] [i_2] [i_1] [i_0 - 1] = ((!((((arr_9 [i_3] [i_2 + 1] [i_2 - 1] [i_0 + 2]) - var_18)))));
                        }
                    }
                }
                var_27 = (arr_8 [3] [i_0] [i_1]);
                var_28 ^= (((arr_7 [i_0 + 1]) ? (((-(arr_11 [i_0 + 1] [i_0 + 1] [i_1])))) : (max((arr_11 [i_1] [i_0 + 2] [i_1]), ((~(arr_3 [i_1] [i_0 + 2])))))));
                var_29 ^= ((!(((~(arr_4 [i_0 + 1] [i_0 + 2]))))));
            }
        }
    }
    #pragma endscop
}
