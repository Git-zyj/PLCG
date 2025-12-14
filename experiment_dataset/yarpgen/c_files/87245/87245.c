/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [13] [i_0] [9] = ((((((arr_10 [i_0] [i_0] [i_0] [14]) ? (max(var_12, 18446744073709551615)) : (((arr_4 [17] [i_0] [i_0]) ? var_2 : (arr_9 [i_0] [7] [i_0] [2] [0] [i_0])))))) && ((max((18446744073709551615 & var_9), var_7)))));
                            var_14 = (((!var_1) ? 3842744623 : -0));
                        }
                    }
                }
                arr_13 [i_0] = (max(((((arr_3 [i_0] [7] [i_0]) ? ((min(0, 32))) : ((4294967288 ? var_11 : var_1))))), ((~((7502414335452734526 ? -2147483622 : 3302067021200481583))))));
            }
        }
    }
    var_15 = (min(var_15, var_2));
    #pragma endscop
}
