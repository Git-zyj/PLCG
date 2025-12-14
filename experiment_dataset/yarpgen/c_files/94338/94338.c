/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((65408 ? 110 : 104))) ? (~-735766131) : (~56177))), var_5));
    var_16 = (min(var_16, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = arr_3 [i_0];

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_18 -= ((~(!7548)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = 1001315893;
                        var_20 = (((arr_5 [i_0] [i_1 - 1] [i_3 + 2]) << (((arr_5 [i_1 - 1] [i_1 + 2] [i_3 - 1]) - 2464039474942750613))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            var_21 = ((~(var_1 | 52)));
                            var_22 = (arr_11 [i_3 - 2] [i_3 + 2] [i_1 - 1]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_23 = (~(1 > var_7));
                            var_24 = (arr_12 [i_5] [i_3 + 1] [i_2] [i_1 + 1] [i_1 + 2] [i_0]);
                            var_25 = (min(var_25, ((-(arr_6 [i_1 + 1] [i_3 - 2] [i_3 - 2])))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_26 = (arr_13 [i_6] [i_6] [i_3 - 1] [i_2] [i_1 + 3] [i_1 + 3] [i_0]);
                            var_27 -= (((arr_8 [i_0] [i_1 + 3] [i_1 - 1] [i_3 + 1]) ? (arr_8 [i_0] [i_1] [i_1 - 1] [i_3 - 1]) : var_9));
                            var_28 = 15703077224356707244;
                            var_29 = (((((~3357) + 2147483647)) << (((((arr_14 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_2] [i_1 + 2] [i_1 + 1]) + 9090460970724235055)) - 30))));
                            var_30 = -21845;
                        }
                        var_31 = ((~(arr_0 [i_3 - 1] [i_1 + 3])));
                        var_32 *= ((!(((121 ? 8599363275700607732 : var_5)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_33 = -323060960;
        var_34 = ((17101655015231259831 <= (39 * 16636406304444748016)));
        var_35 += (arr_20 [i_7]);
        var_36 = (arr_19 [i_7]);
    }
    var_37 = (!8599363275700607748);
    #pragma endscop
}
