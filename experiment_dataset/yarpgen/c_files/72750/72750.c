/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = (+((((max((arr_0 [i_0]), 65533))) ? (arr_3 [i_0]) : (((min(65519, var_13)))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (min(var_17, ((((!(arr_6 [i_0 + 2])))))));
            arr_7 [i_0] [i_1] [i_1] = 65533;
            arr_8 [i_1] [i_0] [i_0] = (~666702130);
            arr_9 [i_0] [i_1] = (((~var_7) ? ((min(var_7, (!var_1)))) : (min((arr_4 [i_0] [i_0] [i_1]), var_1))));
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            var_18 = ((((var_7 + (arr_13 [i_3 + 2] [i_3 + 1])))) ? (((+((6 ? (arr_4 [i_2] [i_3] [i_3]) : var_3))))) : 0);
            var_19 = (arr_3 [i_3]);
            var_20 ^= (min((min(2147483647, 65533)), ((min(1, (arr_12 [i_3] [i_3 - 1] [i_3 + 1]))))));
            arr_15 [i_2] [i_3] [i_3] = (arr_13 [i_3 + 1] [i_3 - 2]);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_21 = (max(var_21, 1));
                        var_22 *= ((((var_11 | (arr_20 [i_3 - 1] [i_4 + 2]))) % 1));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_23 = (1 + (max((arr_20 [i_2] [i_6]), 14)));
            arr_25 [i_2] = (((((arr_19 [i_6]) ? 5547441628314673691 : (arr_6 [i_6]))) >= ((((arr_19 [i_2]) << (4294967295 - 4294967280))))));
            arr_26 [i_2] [i_2] [i_2] = 23;
        }
        arr_27 [i_2] [i_2] = (((!1) ? (((!(arr_21 [i_2])))) : (var_5 < -18446744073709551612)));
        var_24 += (~var_0);
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        arr_31 [i_7] = var_12;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_25 += (arr_35 [i_7] [i_8]);
                    var_26 += (min((((4294967286 ? (arr_36 [i_8] [i_8] [i_9]) : 2535890854))), ((((2535890854 ? 0 : 7)) << 1))));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_27 |= (arr_34 [i_10]);
                        var_28 = ((((((arr_32 [i_7 + 3]) ? (arr_32 [i_7 + 3]) : (arr_32 [i_7 + 3])))) ? (~1) : (((arr_32 [i_7 + 3]) ? (arr_32 [i_7 + 2]) : (arr_32 [i_7 + 1])))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_7] = (5547441628314673683 & var_10);
                        var_29 = (min(var_29, ((min(32640, ((((arr_37 [i_7 - 1]) <= (arr_41 [i_11] [i_9] [i_8] [i_7])))))))));
                    }
                }
            }
        }
        var_30 *= (arr_37 [i_7]);
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_31 = (~1759076441);
        var_32 *= ((-(arr_45 [i_12])));
        arr_47 [i_12] = ((((((arr_45 [i_12]) / (arr_45 [i_12])))) && ((18446744073709551615 <= (arr_45 [i_12])))));
    }
    #pragma endscop
}
