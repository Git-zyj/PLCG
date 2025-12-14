/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2147483628;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0])));
        var_14 = ((var_1 ? ((((18159909008424684565 >> (var_2 - 53096))) % (2147483636 && -2147483628))) : var_0));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((15190 << (((min((((arr_5 [i_1]) ? (arr_6 [10] [10]) : (arr_2 [19] [i_1]))), 111)) - 97)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_16 *= ((1229050939999491357 | (~2147483631)));
                            arr_18 [i_1] [i_1] [i_3 - 2] [i_1] [i_1] = (((((arr_9 [i_1] [i_1]) & var_6)) > ((255 ? -2147483628 : -4606688071013786423))));
                        }
                        var_17 += 2147483641;
                        var_18 = (((((min(-1, 1)) ? (((-(arr_17 [i_1])))) : (max(4294967290, -1450268081))))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_19 *= (((((4294967295 ? (~6356604992918308444) : 65535))) || 4294967290));
                            arr_22 [10] [8] [i_3 - 3] [i_1] [i_6] = ((-1 ? ((~(arr_1 [i_3 - 2]))) : (arr_21 [i_1])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_20 = (~1);
                            var_21 = (((arr_17 [i_4 - 1]) ? (arr_17 [i_4 - 1]) : -2147483621));
                            arr_25 [i_1] = (arr_13 [i_3 + 1] [i_1] [i_3 + 2]);
                            var_22 = (((arr_12 [i_2] [i_3 + 1] [i_4 - 1] [i_7]) ? (arr_12 [i_1] [i_2] [i_4 - 1] [i_7]) : (arr_12 [i_1] [i_1] [i_3 - 1] [i_4 - 1])));
                            var_23 = var_9;
                        }
                        var_24 = (min(var_24, (169 != -284724133)));
                    }
                }
            }
        }
        arr_26 [i_1] = max((-9223372036854775807 - 1), ((((((0 ? 2147483612 : 2095832751))) ? (-7370788258073331816 || var_11) : (~var_2)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_25 = (arr_15 [16] [16] [16]);
        var_26 = (arr_9 [10] [10]);
    }
    #pragma endscop
}
