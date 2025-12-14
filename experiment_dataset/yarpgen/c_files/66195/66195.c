/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((-(var_0 ^ var_2)));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_21 *= (~var_3);
                            var_22 += ((((((0 | 0) ? var_16 : (arr_10 [6] [i_0] [i_2] [i_3])))) & ((((arr_5 [i_0] [i_1 + 3] [1] [i_3]) ? var_3 : (arr_2 [i_0]))))));
                            arr_12 [i_0] [i_3] [8] [i_3] [i_4] &= ((((~(max((arr_1 [i_0]), 1717438902)))) & ((~((~(arr_8 [i_0] [8] [i_0] [i_0])))))));
                            var_23 = ((-1717438903 ? 1 : 1717438903));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [17] [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] = (((arr_13 [i_2] [i_1] [i_1] [i_3 + 1] [i_5]) ? (((arr_14 [i_1] [i_0] [i_1 + 3] [i_1] [i_3 + 3]) ? -1717438907 : ((4294967295 ? var_15 : var_12)))) : var_5));
                            var_24 = (max(((((var_7 << (6144 - 6135))))), (min(((8213633529899146895 ? 217 : 3301655174539618894)), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_0] = (arr_16 [1]);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [i_0] [i_3] [i_2] [i_0] [i_0] = (max(((2747550300 & (max(56409, var_9)))), ((((var_13 / -124) ? 65535 : (arr_19 [i_6] [i_3] [i_2] [i_2] [12] [i_0]))))));
                            var_25 = var_14;
                        }
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_26 = ((max((~4294967295), var_19)));
                        arr_25 [i_0] [i_0] [i_0] [13] = (max(1, (-1992606256 || var_19)));
                        var_27 = (max(var_27, (((-((-115 ? 1717438903 : -3717)))))));
                        var_28 = var_9;
                    }
                    var_29 = (max(var_29, ((max(-3301655174539618916, ((((arr_1 [i_1 + 1]) && (arr_1 [i_1 - 1])))))))));
                    var_30 = 4294967285;
                    var_31 = (max(var_31, var_6));
                }
            }
        }
    }
    var_32 = 1;
    var_33 = (max(var_33, (((!((((max(-108, 243))) || (((4294967295 ? 1717438903 : var_0))))))))));
    #pragma endscop
}
