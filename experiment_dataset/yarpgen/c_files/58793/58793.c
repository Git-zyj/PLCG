/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_2;
    var_12 = 483506531060695918;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_13 = (((arr_1 [i_0] [i_0]) + (((arr_0 [i_0] [3]) + (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (var_7 + -21179);
        var_14 = 5384851102017092831;
        var_15 = (((((~(arr_0 [i_0] [i_0])))) ? ((4054530571 ? 2449130232647998233 : 9223372036854775807)) : (~21178)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (!1449853261);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_16 [i_1] [i_2] [i_3] [1] [i_5] = ((17963237542648855698 + (~513332263)));
                            arr_17 [i_1] [i_2 + 2] [i_3] [i_4 + 1] [i_5] = (min((((max(1198638958, var_6)) + (arr_5 [7] [9] [i_3]))), (((var_0 + var_6) + (!var_9)))));
                            var_17 = ((((max((((var_0 + 2147483647) >> (var_3 - 49296))), var_9))) + (min(432441395, var_8))));
                            var_18 -= (arr_0 [i_1] [i_2 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (min(var_19, var_2));
                            arr_21 [i_1] [i_1] [i_2] [21] [i_4] [4] = (~-1448837843409912748);
                        }

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_20 = (arr_13 [i_1] [i_1] [i_3]);
                            var_21 = (arr_0 [i_1] [0]);
                            var_22 = 5290322086200777448;
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, ((((-21179 + var_4) + (arr_9 [i_1]))))));
    }
    var_24 = ((~(((((var_3 ? var_7 : 7957405284200024516))) ? var_5 : (!var_5)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_25 = ((!(arr_20 [i_9] [i_9] [8] [i_8] [i_8])));
                arr_29 [i_9] [i_9] [17] |= (min(((((var_4 ? (arr_19 [i_9] [12] [i_9] [i_8] [i_8] [i_8]) : 73)) + (46560 + 0))), var_4));
                arr_30 [i_8] [i_9] = (((~-21178) + (8 + 21183)));
            }
        }
    }
    #pragma endscop
}
