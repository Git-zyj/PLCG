/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_12));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (min((arr_0 [i_0]), (arr_1 [i_0] [i_0])));
        var_22 = (min(var_22, ((min(((-5374067655571390761 << (((arr_2 [i_0] [i_0]) - 8398980883200312008)))), ((var_8 & ((var_17 * (arr_1 [9] [9]))))))))));
        var_23 += (~171);

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_24 = var_15;
            var_25 = (min((max(((~(arr_1 [i_0] [i_0]))), var_15)), ((((~var_6) ? var_5 : (min(var_6, (arr_2 [i_0] [i_0]))))))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_26 = (min((min((min(171, -7599479682944833344)), var_11)), ((max((arr_7 [i_0]), ((-(arr_6 [i_2]))))))));
            arr_8 [i_2] [i_0] [i_0] = (min((max(1, -452988425)), (((!(!var_2))))));
            arr_9 [i_0] [i_0] = (-(((((arr_1 [i_0] [i_0]) > var_13)) ? var_9 : ((min((arr_5 [i_0]), (arr_5 [i_0])))))));
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_27 ^= ((!(18446744073709551615 | 9146)));
                arr_18 [i_3] [i_3] = var_19;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_28 = (min(var_28, (((-19 ? -var_15 : (arr_25 [3] [i_4] [i_5] [i_6] [8] [4] [i_3]))))));
                            var_29 = (min(var_29, (7599479682944833332 | 1)));
                            var_30 = (((arr_7 [16]) != (arr_22 [0] [i_4] [1] [i_6] [i_3] [i_5])));
                        }
                    }
                }
                arr_26 [i_3] = (arr_0 [i_3]);
                arr_27 [i_3] = ((var_15 ? var_19 : (((!(arr_13 [i_3]))))));
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_31 = ((var_2 ? -var_12 : ((var_9 ? var_4 : (arr_12 [i_4] [i_4])))));
                arr_30 [i_3] [i_3] [i_3] [15] = ((!(((var_11 ? var_16 : (arr_6 [i_8]))))));
            }
            var_32 ^= ((!(((var_0 ? (arr_1 [i_3] [i_4]) : var_5)))));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            var_33 = (min(var_33, ((min(1564073134, 1)))));
            var_34 = var_6;
            var_35 = ((((((22 ? -966960319 : -7599479682944833350)))) ? ((-(var_17 || var_12))) : (((((var_12 ? (arr_17 [i_3] [i_9] [i_9]) : var_1)) != (arr_2 [i_3] [1]))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_36 = (min(var_36, ((((((max(25940, (arr_7 [i_3]))))) > (max((arr_31 [i_9] [i_11] [i_12]), ((var_12 ? var_11 : (arr_33 [i_9] [i_9]))))))))));
                            var_37 ^= var_6;
                            arr_45 [i_9] [i_10] [i_3] = (((1538923286320135240 > 363883195414812202) <= (min((max(18446744073709551611, 48561)), 9285458628311210746))));
                        }
                    }
                }
            }
        }
        arr_46 [i_3] = var_3;
        var_38 = ((-(((arr_37 [i_3] [i_3] [i_3] [i_3]) * (((min((arr_31 [i_3] [1] [i_3]), var_16))))))));
    }
    #pragma endscop
}
