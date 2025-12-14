/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((((((2932631488 ? (arr_1 [i_0] [i_1 - 3]) : (arr_0 [i_0])))) ? (!var_16) : var_12))) ? (((max(var_2, 0)))) : (2097151 * 0)));
                var_18 = (max((((-(((arr_1 [i_0] [i_1 - 1]) ? 4294967273 : (arr_4 [i_0] [i_0] [i_1 - 3])))))), ((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : 4294967288))) ? (arr_0 [i_1]) : -7643217581544208563))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 = ((-((((((arr_4 [i_0] [i_0] [i_0]) % (arr_3 [i_2] [i_1] [i_0])))) ? (arr_2 [i_0] [i_2]) : (max((arr_3 [i_2] [i_1 - 4] [i_0]), 4294967290))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [i_4] [i_4] [i_1] [i_0] = ((-(((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_17 [1] [i_4] [0] = ((!((((((var_2 ? 21 : var_17))) ? -127 : 2048)))));
                            }
                        }
                    }
                    var_20 *= (((arr_15 [i_0] [i_1] [5] [i_1 - 3] [i_2]) ^ ((var_9 & (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 3] [1])))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((((var_8 + 2147483647) << ((((max(var_2, var_7))) - 24803)))))));
    var_22 = (min((((4294967290 && 22770) ? 4294967287 : (var_3 ^ 1438942694))), (min((min(var_7, 4294967287)), 489740449))));
    var_23 = 9223372036854775807;
    var_24 = var_11;
    #pragma endscop
}
