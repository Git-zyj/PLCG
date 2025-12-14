/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((((((-1798310774914587028 ? -32763 : -32751))) > (54696 / 13629761785635225557))));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = -102;
                    var_16 ^= -960062171;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = 960062185;
                                arr_12 [14] [i_4] [i_1] = (max(0, 2));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 = 5961;
                        var_19 += ((((((((arr_10 [i_0] [i_0] [3] [3] [3] [i_0] [i_0]) & 254931624100429492)) >= (((43429 ? var_0 : (arr_5 [i_1]))))))) != (((arr_4 [i_0] [i_1]) ? 43613 : 1))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = ((((-5961 < var_15) >= ((min(-112, 57344))))));
                            arr_19 [i_5] [i_0] [i_2] = (((((0 >> (5956 != 48621)))) ? ((5941 ? 4272339739376253584 : ((-117 ? 0 : (arr_17 [i_0] [i_0] [i_0] [3] [i_0]))))) : (arr_3 [3] [i_5] [i_6])));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = var_1;
    var_23 = (((((-4190798080718495967 % 14261) ? (225 * 0) : var_3)) << (var_12 - 10600)));
    var_24 = (((((var_2 ? (~-1115900208) : (!1595115654)))) ? 7104061623073100165 : 32768));
    #pragma endscop
}
