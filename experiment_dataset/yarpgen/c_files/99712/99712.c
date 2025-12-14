/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((var_6 ? (max((min(8796093014016, var_10)), var_11)) : (max(var_10, -8796093014016))));
                arr_6 [i_0 + 1] [i_0] [i_1] = (min((min(-8796093014016, var_5)), (((max(31926, 8796093014016))))));
            }
        }
    }
    var_14 ^= (max((((1140405278 <= ((var_10 ? 124 : var_11))))), ((((min(var_6, 17795))) ? (min(8796093014002, var_1)) : (((min(1, 1536))))))));
    var_15 = ((((((((var_12 ? -8796093014016 : var_4)) > (-55 >= 23))))) / (max(0, (max(33614, 15568593644409339771))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 &= 725968073;
                            arr_16 [i_2] [i_2] [i_4] [i_4] = ((var_8 % ((((576694611 + 0) / ((var_1 ? 237 : var_6)))))));
                        }
                    }
                }

                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((-10224 - 38880) ? (min(104, -8796093014002)) : var_12)))));
                                arr_25 [i_6 + 2] [i_6] = min(14, (max((-10242 * 1), 1443)));
                            }
                        }
                    }
                    var_18 = (max(var_18, ((max((min(217, (-1140405261 * 2339619164))), (((max(1443, 40)))))))));
                    var_19 = (min((max(var_0, -8796093014017)), (max(-7, -20))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_20 |= (((((((min(160, 217))) * (var_9 < var_2)))) ? ((var_7 ? ((max(var_2, -8796093013987))) : 15283503234011073058)) : ((((var_0 / 152) * var_7)))));
                                arr_30 [4] [4] [i_6] [i_9] [i_6] = max(6640375262660421855, ((min(-10241, 0))));
                                arr_31 [i_6] = max(((max(1964037245, 158))), ((102 * (max(3163240839698478558, var_2)))));
                            }
                        }
                    }
                }
                arr_32 [i_2] [3] |= (max((max((min((-32767 - 1), -120)), (var_7 == 1600421919))), (var_5 == var_8)));
                var_21 = ((max(var_6, (3163240839698478582 <= 1125899906842623))));
            }
        }
    }
    var_22 = max(((min(((var_0 ? 8796093013982 : 31921)), ((max(var_4, 246)))))), (min((var_9 <= 36830), var_10)));
    #pragma endscop
}
