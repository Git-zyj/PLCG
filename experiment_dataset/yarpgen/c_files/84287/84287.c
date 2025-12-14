/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (((((!var_8) ? ((max(-18988, 104))) : 1))) ? (((((var_3 ? var_5 : var_5))) ? -73 : 73)) : var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_15 = (max(var_15, -49032));
                        var_16 = var_1;
                        var_17 = var_2;
                        var_18 = var_12;
                        var_19 = (arr_9 [i_3 + 3]);
                    }
                    var_20 = (6010361859858386023 / 5);
                    var_21 = (-74 + 0);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_22 = (min(var_22, 0));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((min(-6, (min(-74, ((7680 ? 237 : (arr_12 [3] [i_7 - 1] [6] [i_5] [i_4]))))))))));

                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_24 = (min((((31118 >= 0) ? (!1574421611) : (48 + var_6))), (arr_24 [19] [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 4])));
                                var_25 = (min(var_25, (((~(((arr_11 [i_7 - 4] [11] [i_7 + 1] [i_8] [i_8]) >> (arr_24 [17] [i_5] [i_6] [17] [i_7] [1] [i_8]))))))));
                                var_26 = (min(0, (122 || 73)));
                            }
                            for (int i_9 = 1; i_9 < 19;i_9 += 1)
                            {
                                var_27 = (min(((((!1332501667) ^ (arr_26 [i_6] [i_7 - 3] [i_7 - 3] [i_7] [i_7 - 4] [i_9 + 1])))), (arr_10 [i_5])));
                                var_28 = -13;
                            }
                            for (int i_10 = 0; i_10 < 21;i_10 += 1)
                            {
                                var_29 = ((~(~1)));
                                var_30 = 69;
                                var_31 = (((12 ? 73 : (-2147483647 - 1))));
                                var_32 = 1;
                            }
                            for (int i_11 = 2; i_11 < 19;i_11 += 1)
                            {
                                var_33 = ((((((arr_12 [i_4] [i_4] [i_4] [i_4] [i_4]) ? 3124062810 : (arr_5 [i_4] [i_6] [i_5])))) ? 0 : (((min(var_12, (arr_12 [7] [i_5] [i_6] [i_7 - 2] [i_11 + 2])))))));
                                var_34 = var_7;
                            }
                            var_35 = ((var_1 * (!1)));
                        }
                    }
                }
                var_36 = 3728421085187548101;
                var_37 = (min(var_37, ((min(-1332296667, 49032)))));
                var_38 = 67;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            {
                var_39 = -0;
                var_40 = ((((min((arr_6 [i_12] [8] [i_13 + 1]), (min(-1024, 0))))) || (((var_12 ? (((max(1, 18)))) : (min((arr_5 [i_12 + 3] [i_12] [i_12]), (arr_4 [i_12] [i_13 + 2]))))))));
                var_41 = 554941205;
                var_42 = (max(var_42, var_4));
            }
        }
    }
    #pragma endscop
}
