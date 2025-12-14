/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_13 = 18446744073709551592;
                var_14 = (max(var_14, (((((((69 ^ 2659542916) / -var_3))) ? var_7 : ((((((var_11 ? var_1 : var_1))) ? (-9223372036854775807 - 1) : (!var_12)))))))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_0] [i_1] = (((!41) ? (!0) : var_10));
                arr_12 [i_1] [17] = (~5);
            }
            arr_13 [i_0] [i_0] = (6274 >= 26);
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_15 = ((!((min(13213, 255)))));
            var_16 -= 39;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_21 [i_4] [i_4] [i_0] [i_6] = var_9;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_17 = ((((!(arr_5 [18] [i_4]))) ? (~63) : ((0 ? 9223372036854775802 : 28988))));
                            var_18 -= (!var_3);
                        }
                        arr_26 [22] |= ((+((18446744073709551615 ? (-2147483647 - 1) : (arr_25 [i_0] [i_0] [i_4 + 1] [17] [i_6] [i_6])))));
                        var_19 ^= (!1294146157);
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_20 = (max(var_20, (arr_27 [i_8] [i_4] [i_0] [i_0])));
                var_21 = (((1 ^ 2147483640) ? (var_3 | var_0) : (~128)));
            }
        }
        var_22 = (max(var_22, 18));
        var_23 = (4158654086 && 0);
        arr_29 [i_0] [i_0] = arr_24 [i_0] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_24 = var_7;
        arr_33 [6] = var_11;
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = (~17083);
        var_25 *= -1;
    }
    var_26 = min(7032684036142170727, 386);
    #pragma endscop
}
