/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 &= (min(var_0, ((min(2590833685316589754, var_7)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 -= (arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((~((~((((arr_0 [i_0]) < (arr_1 [i_0]))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((min((min(-3196361376231179300, 32762), (((var_11 ? -32762 : -109)))))));
                            var_16 *= (min((min(-3196361376231179300, (((var_2 ? var_11 : (arr_13 [i_3])))))), (arr_8 [i_3] [i_1] [i_2] [i_1])));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_10;
                            var_17 = (-(((-32763 * -13989) ? (arr_13 [i_4 - 1]) : 3196361376231179290)));
                            var_18 -= 922609752;
                        }
                    }
                }
            }
            arr_18 [i_1] = 2735451578;
            arr_19 [i_0] [i_1] [i_0] = (min((((min((arr_12 [i_0] [i_0] [i_0] [i_1]), 113)) | var_8)), (min(1191602751848446911, (min((arr_10 [i_0]), var_6))))));
            arr_20 [16] [16] &= ((((var_10 >= (arr_8 [6] [i_1] [i_1] [i_0 + 1]))) ? ((min((arr_8 [14] [i_0] [i_0] [14]), (arr_8 [16] [i_0] [i_0] [16])))) : (((!(arr_8 [0] [0] [i_0] [0]))))));
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            arr_23 [i_5] = (((arr_2 [i_5 - 1] [i_0 - 1]) ^ 13989));
            var_19 -= (arr_22 [2] [2]);

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                var_20 -= (((arr_26 [i_6 - 1] [i_0 + 1]) >> (((arr_26 [i_6 - 1] [i_0 + 2]) - 234889404))));
                arr_27 [i_0] [i_5] [i_0] = (var_10 <= ((-(arr_9 [i_0] [i_5] [i_6] [i_5]))));
                arr_28 [i_5] [i_5] [i_6] = (arr_14 [i_0] [i_0] [i_5] [i_5] [i_6]);
            }
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                var_21 = (min(var_21, ((((arr_26 [i_5 + 1] [i_0 + 2]) <= (arr_13 [i_5 + 1]))))));
                var_22 -= var_4;
                var_23 ^= var_2;
                var_24 = (max(var_24, var_6));
                var_25 = (arr_14 [i_5] [i_7] [i_7 + 3] [i_5] [i_5]);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_34 [i_5] [i_5] [i_8] = (arr_13 [i_0]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_40 [i_5] [i_0] [i_0] [i_0] = (((var_11 ^ (arr_31 [i_5] [i_5] [i_10]))));
                            var_26 = var_8;
                            var_27 = (arr_0 [i_8]);
                        }
                    }
                }
                arr_41 [i_5] = (arr_22 [i_5] [i_5]);
                arr_42 [i_5] = (arr_10 [i_5 - 1]);
                var_28 ^= ((((arr_37 [i_8] [i_8] [i_5] [i_5] [i_5] [i_0]) + 1)));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_45 [i_5] = (arr_35 [i_11] [i_5] [i_0]);
                arr_46 [i_5] [i_5] = ((((((arr_36 [i_0] [i_11]) / -174250290))) ? -55 : (((arr_1 [i_0]) ? -174250290 : (arr_36 [i_0] [i_0])))));
            }
        }

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_29 = (min(var_29, 174250313));
            arr_49 [i_0] = (((min(((((arr_9 [i_0] [i_12] [i_12] [i_12]) != 24279))), var_3)) - (((((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_12]) != (arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_12])))))));
            arr_50 [i_0] [i_0] [i_12] = (174250260 ? ((((((var_5 >> (3196361376231179298 - 3196361376231179296)))) ^ (min(8374944918599142360, 155))))) : ((((arr_35 [i_0] [i_0] [i_12]) ? 1 : 2184680074))));
        }
    }
    #pragma endscop
}
