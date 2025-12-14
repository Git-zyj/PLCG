/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_4 ? -8811059288756265136 : var_14)) * (933701517 != var_19))) * (((((!3361265765) != (max(1, var_3))))))));
    var_21 = 1;
    var_22 *= ((!(((var_14 ? (max(var_17, var_0)) : (!933701509))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (((!(((-(arr_5 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_24 = (~(min(-5815742442303831329, 3361265765)));
                            var_25 = ((!((-5563449191295143189 || (((-(arr_2 [i_3] [i_1 - 1]))))))));
                            var_26 = 5985695670775687783;
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = 120;

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_27 ^= (max((!933701509), (!3361265765)));
                                arr_16 [i_0] [i_1] [i_1] [1] [1] &= ((min((arr_2 [i_2 + 1] [i_2 + 1]), (arr_6 [i_2] [11] [i_4]))));
                            }
                            for (int i_5 = 2; i_5 < 13;i_5 += 1)
                            {
                                var_28 = ((!(((933701530 ? (((max(1, var_19)))) : ((29446 ? 467621399 : 3633948662641000245)))))));
                                arr_20 [i_5] [10] [i_2 + 1] [i_5] = ((((7658281335337508334 <= ((var_8 ? var_16 : 1150658481)))) ? var_11 : (((1 ? 3361265770 : 5558)))));
                            }
                        }
                    }
                }
                var_29 = (var_9 == var_13);
                var_30 ^= 73;
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_7] [i_6] = var_13;
                                arr_32 [i_0] [i_1] [i_6] [i_6] [i_6] [i_1] [i_1] = (((((-3633948662641000246 == 1) * 933701530)) != -1150658481));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
