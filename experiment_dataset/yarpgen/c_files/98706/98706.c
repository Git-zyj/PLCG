/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = max(-11623, (-32767 - 1));
        var_15 = var_13;
        var_16 = ((var_12 * ((min(14155, (arr_0 [i_0 + 3]))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, 12025));
        arr_5 [i_1] = (-32767 - 1);
        arr_6 [i_1] &= ((var_13 * ((((max(var_4, -32755))) / (-8066 * -32755)))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_18 = var_5;
                            var_19 = (max(var_19, 25792));
                            var_20 = max(4032, 32755);
                        }
                    }
                }
                var_21 = (min(var_21, 26043));
            }
            var_22 = (min(var_22, ((((-32767 - 1) >= -25792)))));
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_23 = (((-9 % var_12) ? ((max(24536, (min(var_8, var_7))))) : (-21805 < -32748)));
            arr_21 [i_1] [i_1] [i_1] = (min(-2036, (~var_11)));
        }
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_24 = (min(-7715, ((21805 ? -1 : -13633))));
        var_25 = 1;
        var_26 = (max(var_26, (((var_5 && ((((-21807 ? 32767 : 31136)))))))));
        var_27 = ((~(32767 | -26204)));
    }
    var_28 = ((+(min((12486 | -1), (var_12 ^ var_13)))));
    var_29 = ((1 <= (((((var_2 + 2147483647) >> (var_2 + 24884)))))));
    var_30 = ((16324 ? 17745 : 9723));
    var_31 = var_3;
    #pragma endscop
}
