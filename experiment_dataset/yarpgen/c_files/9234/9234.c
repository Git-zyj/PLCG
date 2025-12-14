/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((var_3 ? 2147221504 : 34))));
    var_11 = (((2182284554550107739 <= 1836647810) ? ((((max(var_9, var_3)) != 9))) : ((-(!0)))));
    var_12 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [4] [i_2] [i_0] [i_0] [i_0] = ((-var_1 & ((((arr_6 [i_0] [2] [2] [i_3]) ? var_7 : (arr_1 [i_3]))))));
                            var_13 = (max(var_13, (((((((arr_7 [i_2] [i_2] [i_2] [i_2] [i_3]) ? var_2 : (arr_2 [0] [i_2] [1])))) ? ((((arr_6 [i_2] [i_2] [i_1] [i_2]) ? var_2 : var_1))) : (var_7 & var_5))))));
                            arr_10 [8] [i_2] [i_2] |= ((((((arr_5 [6] [3] [3]) <= (arr_4 [i_3] [i_1] [8])))) ? (var_1 | var_6) : (~var_4)));
                        }
                    }
                }
                var_14 = ((~(((var_3 & (arr_2 [i_0] [i_0] [i_1]))))));
            }
        }
    }
    var_15 = (min(var_15, 206));
    #pragma endscop
}
