/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = (((((var_0 ? -1 : -5))) ? -1207853381 : (((max(3261310663, var_5))))));
        arr_3 [i_0] = (max(var_0, ((~(arr_1 [i_0 + 1] [i_0 + 2])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((max((arr_4 [4]), (var_7 | var_12))))));

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1] = 3261310663;
                            var_17 ^= var_9;
                            arr_16 [i_1] [i_3] [i_1] = (var_9 + -8333279312368559010);
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_1] = var_3;
                            arr_22 [i_1] = max(((841828902 ? ((var_5 ? 3376591009 : 39)) : (var_1 <= 240))), (((((max(var_4, (arr_13 [i_0 + 1] [10] [i_0] [6] [i_0])))) ? ((var_3 ? var_9 : var_5)) : 1093650244))));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [6] [i_1] = (max(918376286, ((max(0, (arr_6 [i_1 - 2] [i_1 - 1]))))));
                            arr_24 [i_1] [i_1] [i_1] = (max((((arr_4 [i_1]) ? 4 : (max(4088, 8928779873602719683)))), (1 * 841828897)));
                            var_18 |= (((((max((arr_12 [i_5] [i_3] [i_2] [i_1] [i_0]), var_13)))) != (arr_5 [i_1] [i_1 + 2])));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_19 ^= ((((arr_26 [11] [i_2] [i_1 + 2] [6] [i_0 + 2] [i_0 + 2]) ? 1888 : -4)));
                            var_20 = (max((((((-(arr_6 [i_0] [i_0])))) ? (max((arr_11 [i_1] [i_1] [i_1] [i_6]), var_13)) : var_4)), var_0));
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (((~-50) ? 6848655941964818443 : (arr_19 [i_7 + 1] [0] [0] [0] [i_7] [1])));
                            var_22 = var_7;
                        }
                        var_23 *= var_12;
                    }
                }
            }
        }
        var_24 = -4493765391161438677;
        var_25 = max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8]), (((var_12 + (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2])))));
    }
    var_26 = var_14;
    var_27 = (max((max(((max(24, -1281939922))), var_6)), 1));
    var_28 = (max((~var_0), var_12));
    var_29 = var_1;
    #pragma endscop
}
