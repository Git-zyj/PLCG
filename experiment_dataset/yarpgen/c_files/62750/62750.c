/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_0] [i_1 + 3] [i_2] [i_3] [i_4 + 1]);
                                var_21 = (((((((70368744177152 ? 24 : (arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_4] [i_4]))) % -13444))) ? var_0 : ((78 ? ((53022 ? var_16 : (arr_0 [i_0 - 1]))) : (arr_12 [i_4 + 2] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_22 = (min(var_22, (-13444 + 535822336)));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_23 ^= (-49 ? ((((min(var_19, (arr_12 [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 4] [i_0] [i_0])))) ? 5949625178706778769 : 1981643375)) : (((((var_18 ? (arr_9 [i_0 + 2]) : (arr_14 [i_2])))) ? var_8 : -8030579718204207161)));
                            var_24 = -13444;
                        }
                        var_25 = ((((max(115, 18446744073709551615))) ? ((var_9 - (arr_18 [i_1 - 2] [i_5 + 1] [i_2] [i_1]))) : (arr_5 [i_1 + 1] [i_5 + 1] [i_2] [i_1])));
                        var_26 = (((((((var_19 ? var_14 : (arr_0 [i_0])))))) > ((var_18 ? 654 : (((arr_4 [i_0 + 4] [i_1] [i_5]) ? var_0 : (arr_13 [i_0 - 1] [i_1] [i_2] [i_5] [i_5 + 1])))))));
                    }
                    var_27 = -116;
                }
            }
        }
    }
    var_28 = var_10;
    var_29 = ((max(1706, 0)));
    var_30 |= -5949625178706778770;
    var_31 = ((~((-7921365121145409156 ? 131071 : -15154))));
    #pragma endscop
}
