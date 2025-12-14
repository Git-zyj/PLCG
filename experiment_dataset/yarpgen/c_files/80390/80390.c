/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 &= ((8 ? -4917640173578198755 : var_7));
        var_14 = ((1556770507957514514 & (~114)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = ((max(0, -146720842)));
        var_16 = (max(var_16, (arr_5 [i_1] [i_1])));
        var_17 = var_1;
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] = ((((arr_14 [i_3 + 2] [i_3 - 1]) != var_12)));
                    arr_17 [i_3] = -23255;
                    arr_18 [i_3] = 149322676;
                    var_18 = (((((((var_3 ? var_10 : 233))) | var_0)) * (((((max(var_10, var_10))) << (65532 - 65521))))));
                }
            }
        }
        var_19 += (((28 ^ 114) < (arr_12 [i_2])));
    }
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_20 = var_9;
            var_21 = (min(var_21, ((((!4148246437) % (max(17, 9223372036854775807)))))));
            arr_23 [i_5] [i_6] = ((14073 % ((((arr_21 [i_5 - 3] [i_5]) >= 65527)))));

            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                var_22 = (max(var_22, (((!((max((~13673322354866407170), var_9))))))));
                var_23 &= ((((((((var_2 ? (arr_4 [i_5]) : (arr_5 [i_6] [i_6])))) - (15368 * 11507648272177275234)))) ? (((var_7 * -2297) * (min((arr_20 [i_5] [i_6]), 32511)))) : var_1));
                var_24 = (((var_3 >= (var_8 > 0))) ? 2974755511 : (max(-86, (max(5, 18446744073709551615)))));
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_25 = ((((!(arr_12 [15]))) ? ((max((min(var_12, var_2)), ((max(var_5, var_5)))))) : ((((max(4294967279, var_2))) ? (61 << 2) : var_7))));
                var_26 = (~(min(var_12, var_4)));
                var_27 = var_2;
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_28 = (((((37 ? 1050055117 : (arr_30 [i_8 + 2] [i_8 - 1] [i_8 + 2])))) ^ (max((~852085896), 0))));
                            var_29 = ((var_0 ? 0 : (var_9 / var_12)));
                            var_30 = (!-var_5);
                        }
                    }
                }
                var_31 = (min((((arr_33 [i_5 + 1] [i_8 - 2] [i_5 - 1]) ? (arr_33 [i_5] [i_8 - 1] [i_5 - 1]) : var_12)), var_8));
            }
        }
        var_32 = (max((~0), ((65 ? 32756 : 1352128751))));
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            {
                var_33 = ((-(((((arr_38 [i_11] [i_12 - 3]) ? 29369 : (arr_4 [i_11])))))));
                arr_41 [i_12] = (!5);
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_34 = ((((min(75, 18097))) ? (~65533) : (min(-24117, 0))));
                            arr_47 [i_11] [i_11 + 1] [15] [i_13] = ((~(arr_37 [i_11] [i_12 + 1])));
                            var_35 &= ((-(((((21 ? var_12 : var_4)) < (arr_37 [i_13 - 2] [i_13 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_36 = ((!(((4294967294 << ((((-3 ? -122 : 4)) + 142)))))));
    var_37 += ((-(~24390)));
    #pragma endscop
}
