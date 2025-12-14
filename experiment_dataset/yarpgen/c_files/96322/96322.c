/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_16 = var_2;
                            var_17 = var_11;
                        }
                    }
                }
            }
            var_18 = ((var_1 ? (arr_6 [i_1 - 2]) : ((((arr_7 [i_1] [i_1 + 1] [i_0] [i_0] [i_0] [i_1]) - (arr_7 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1]))))));

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_13 [i_0] [i_1 - 1] [i_0] |= (var_7 ? var_0 : ((((-2147483647 - 1) > var_8))));
                arr_14 [i_1] = ((-var_5 | ((var_14 ? 3685581720613038983 : -3685581720613038984))));
                var_19 = (min(var_19, (((((max((-9223372036854775807 - 1), (arr_3 [i_1 - 2] [i_0] [i_1 + 2])))) ? ((((max((-2147483647 - 1), var_15))) ? (arr_3 [i_0] [i_0] [i_5]) : (!var_1))) : ((2797321958 ? (-20 - 2097088) : (-2147483647 - 1))))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_20 = (min((var_9 / 570853223), ((2097088 ? (var_12 ^ var_11) : (min(-9014338805502675551, -3685581720613038997))))));
                        var_21 = (min(-256, (min(var_6, (min(var_15, var_8))))));
                        var_22 = (((max(9014338805502675524, ((max((arr_15 [i_0] [i_0] [i_0]), var_5))))) - (arr_12 [i_0] [i_1 - 3] [i_6])));
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_23 = (min((((~var_9) ? 3347029996 : (((-6793075988858130290 ? 2786 : (arr_10 [i_0] [i_0] [i_0] [i_8])))))), var_9));
            var_24 = ((+(((arr_9 [i_0] [i_0] [i_8 - 1] [i_8 - 3]) ? (((~(arr_19 [i_0] [i_8])))) : -7505370509577072542))));
            var_25 = ((((((arr_19 [i_0] [i_8]) ? (arr_21 [i_8] [i_0] [i_0]) : (((-1331294561 ? var_0 : (arr_9 [i_0] [i_0] [i_8] [i_0]))))))) / var_15));
        }
        arr_22 [i_0] = (arr_9 [i_0] [i_0] [5] [i_0]);
        arr_23 [i_0] = (min((max((max(var_4, -2097114)), 12)), (((2097088 * (var_9 / 352275981))))));
    }
    var_26 = (min(var_26, (max(((min(((-3685581720613038983 ? var_6 : var_5)), var_0))), (1 - 3593436651066074735)))));
    var_27 += -var_10;
    #pragma endscop
}
