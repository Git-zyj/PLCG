/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 15;
    var_14 = (((((((134217664 ? 65534 : 0))) ? var_0 : 1)) > var_10));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4 - 1] = var_11;
                                var_16 = (((((~(arr_3 [i_1 - 1])))) ? ((((min(1233330384, (arr_9 [i_0 - 4] [i_0] [i_0 + 2] [i_0]))) | ((min((arr_5 [i_0] [i_1] [i_2]), var_9)))))) : (((arr_10 [i_0 - 4] [i_1] [i_2] [i_1] [i_0 - 4]) ? var_6 : 9223372036854775800))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_21 [i_0 - 1] [i_1 - 3] [i_6] [i_6] = ((((((((2271520388 + (arr_11 [i_0] [i_1] [i_0] [i_6])))) ? var_2 : var_12))) ? (((!3531794365109323406) ? (var_11 % 31240) : (arr_0 [i_0]))) : ((min(1, (min(var_5, var_2)))))));
                                arr_22 [i_6] [i_5] [i_6] = ((((((var_12 ? var_6 : -4921982211757838446)) >= -1225820012063440442))) >> ((var_12 ? (arr_1 [i_7]) : ((min((arr_9 [i_1] [i_5] [i_6] [i_5]), (arr_6 [i_5] [i_7])))))));
                            }
                        }
                    }
                }
                arr_23 [i_1] [i_1] [i_0] = ((((~(arr_17 [i_0] [i_0 + 2] [i_0] [i_1 - 3] [i_0])))) ? (arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) : (min(-4244995630928217122, 24206)));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
