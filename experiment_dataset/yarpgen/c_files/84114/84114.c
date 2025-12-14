/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_14 = (max(var_14, ((((arr_0 [i_1]) ? (!5912043369028468043) : (((!(arr_0 [i_1 + 2])))))))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_15 = ((-(64707038917747373 ^ 4294967293)));

                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    var_16 = var_1;
                    var_17 = (max(var_17, (((~(arr_5 [i_0] [i_1 - 1] [i_2]))))));
                    var_18 *= var_2;
                    var_19 = (max(var_19, 4294967293));
                }
                arr_13 [i_2] [15] [i_2] [i_2] = var_3;
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_16 [i_4] = var_4;
                arr_17 [i_0] [i_1 + 1] [i_0] [i_4] = (arr_1 [i_1 + 2] [i_1 + 1]);
                arr_18 [i_0] [i_0] |= (arr_8 [i_0] [i_0]);
                arr_19 [i_0] [i_4] [i_0] [17] = (((arr_15 [i_1] [i_4] [i_1 - 1]) ? ((((var_7 || (((arr_6 [i_0]) || (arr_10 [i_4] [i_4] [i_4]))))))) : var_3));
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                var_20 = (max(var_20, ((((((arr_0 [i_5 - 1]) ? (arr_20 [i_5 - 1]) : (arr_0 [i_5 - 1]))) - (((arr_0 [i_5 - 1]) * (arr_20 [i_5 - 1]))))))));
                var_21 = (var_3 ^ var_1);
                arr_23 [i_0] [i_0] [i_5] [i_5] |= (((~var_7) ? var_4 : ((((arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1]) ? (((~(arr_9 [i_0])))) : (min((arr_3 [i_5] [i_5 + 1] [i_5]), var_10)))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_22 = var_4;
                            var_23 = (((arr_21 [i_1 - 1] [i_5 - 1] [i_5]) ? (((arr_21 [i_1 - 1] [i_5 - 1] [i_5]) ? var_10 : (arr_28 [i_1 - 1] [i_5 - 1] [i_1 - 1] [i_5]))) : var_2));
                        }
                    }
                }
                var_24 = var_2;
            }
            arr_29 [i_0] [i_0] = ((64707038917747373 ? 18382037034791804242 : 1700308587));
            var_25 = (max(var_25, ((((~var_10) < ((var_11 & (arr_25 [i_0] [i_0] [10] [i_0] [i_0]))))))));
        }
        arr_30 [i_0] [i_0] = (+((max((arr_2 [i_0]), (arr_2 [i_0])))));
    }
    #pragma endscop
}
