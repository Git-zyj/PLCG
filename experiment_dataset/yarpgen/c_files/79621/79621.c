/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_0;
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, 84));
        arr_4 [9] = (!var_1);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 *= (((max(44, (max(18014398509481983, 3219434078)))) * 0));
                        var_14 += ((1075533218 ? 120 : 1075533206));
                        var_15 = (191 == -5916);
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_2] [i_1 - 2] [i_0] = (((((var_7 ? ((var_5 ? var_1 : 64)) : ((3219434092 ? 57 : 20))))) ? -5908 : (var_3 && var_2)));
                        var_16 -= var_6;
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] = (arr_14 [i_0] [i_0] [i_0] [i_1]);
                        var_17 = (min(var_17, ((max(7538353238537318198, (min((arr_9 [i_0] [3] [i_2 - 2]), (max(-6469177777522798581, 64)))))))));
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, ((+(((var_3 - 11) ? (var_1 / -4545171902365782927) : (5900 / -9965)))))));
                        var_19 |= 1;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 *= ((-32767 / ((var_0 ? var_1 : (arr_24 [i_0] [i_0] [i_2] [i_6 + 2] [i_7] [0])))));
                                var_21 &= 1360414821;
                                var_22 += (max((max((7067592077493140060 | var_9), (arr_7 [i_1 + 1] [i_1 + 1] [i_6 + 1]))), -1));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_23 &= -9223372036854775788;
        arr_29 [i_8] [i_8] = (min((((min(5922, (arr_11 [i_8]))) | (((-1281704908536479499 ? 157 : 5935))))), (((((-7 ? -24906 : 69))) - (((arr_21 [i_8] [i_8] [i_8] [i_8]) ? var_6 : 948068555))))));
        arr_30 [i_8] [i_8] = (((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_9 [17] [i_8] [i_8]) : ((var_1 & (arr_5 [6] [i_8] [i_8])))));
        arr_31 [4] = (((((((var_8 ? var_8 : 8)) + (arr_25 [i_8] [i_8] [i_8])))) ? ((((min(var_0, 246))) ? ((min(var_8, var_1))) : (var_5 != 55))) : ((-(11 && 51)))));
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        arr_34 [i_9] = ((min(var_3, var_4)));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                {
                    var_24 += var_9;
                    var_25 = (max(var_25, (((((max(var_6, 28439))) ? var_6 : (!-975254078890672030))))));
                    var_26 = 24;
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        arr_41 [i_12] [i_12] = (max(192, ((var_3 ? var_7 : (arr_39 [i_12])))));
        var_27 = (min(var_27, (95 == 47)));

        for (int i_13 = 3; i_13 < 15;i_13 += 1)
        {
            var_28 *= (arr_44 [i_13 + 3]);
            var_29 = (max((arr_44 [i_12]), ((-((var_7 ? var_2 : (arr_40 [i_12])))))));
        }
        arr_45 [i_12] = var_2;
    }
    var_30 &= (var_9 * 3631510445);
    #pragma endscop
}
