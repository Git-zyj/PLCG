/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 = (min(var_13, ((((((!(arr_6 [i_0] [i_0] [9])))) * (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [7]) : var_12)))))));
            var_14 -= ((var_8 ? ((((((-(arr_3 [i_1] [i_0])))) != -1307848519))) : ((((max((arr_3 [11] [i_1]), var_6))) ? (arr_4 [i_1]) : var_7))));
            var_15 -= ((((max(111, 111))) / (((arr_5 [i_0]) ? (arr_4 [1]) : (arr_3 [i_0] [i_1])))));
        }
        var_16 *= var_9;

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_17 -= ((((max((~2987118776), ((var_3 ? var_6 : var_5))))) || (2987118776 ^ 1307848519)));
            var_18 ^= ((((~(arr_8 [i_2] [i_2]))) <= (arr_5 [1])));
            var_19 &= (((((((((arr_6 [10] [i_2] [i_2]) * (arr_5 [i_2])))) * (((arr_9 [i_2] [i_2] [i_0]) * var_6))))) ? (((((min((arr_8 [i_0] [i_2]), var_7))) & (arr_3 [i_0] [i_0])))) : (arr_10 [i_0])));
            var_20 ^= ((((((((arr_4 [16]) - 5798324428576673144))) ? var_6 : (arr_2 [i_0]))) == (arr_2 [i_2])));
            arr_11 [i_0] [i_0] [i_2] &= ((-((((min((arr_4 [i_0]), var_7))) ? var_7 : (((arr_1 [i_2]) & (arr_6 [10] [i_2] [i_2])))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_21 -= (((arr_13 [i_0] [i_3]) ^ (arr_13 [i_3] [i_0])));
            var_22 = (max(var_22, (((((((arr_1 [i_0]) * 1))) ^ -1307848533)))));
            var_23 = (max(var_23, (((var_2 >> (((arr_5 [i_0]) - 2692341230)))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_24 *= 18426163922841654467;

            for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_25 = (min(var_25, ((((((4294967295 ? 1 : 2340496180))) ? ((~(((arr_1 [i_4]) / var_11)))) : (((((arr_7 [i_5 + 1] [i_6 - 1] [i_6 - 1]) || (arr_14 [i_5 + 1] [i_6 - 1] [i_6 - 1]))))))))));
                    var_26 = (min(var_26, (((!(4294967295 / var_6))))));
                }
                var_27 = (min(var_27, (((((((arr_18 [i_5 + 2]) * (arr_18 [i_5 - 2])))) * (((arr_18 [i_5 - 2]) / var_11)))))));
            }
            for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_28 ^= ((!((!(((arr_17 [i_0] [i_4] [i_7 - 1] [i_7]) == (arr_5 [i_0])))))));
                var_29 -= ((((!(((~(arr_21 [i_0] [i_4] [i_7])))))) ? 18446744073709551615 : ((max((arr_4 [i_7]), (((arr_4 [20]) << (75 - 75))))))));
                var_30 *= ((~(arr_14 [i_7 + 1] [i_7 + 1] [i_7 + 2])));
                var_31 *= (((arr_16 [i_7 + 1]) / var_7));
            }
            var_32 = (min(var_32, ((max(((((((var_8 ^ (arr_0 [i_0] [7])))) || ((max(18426163922841654445, 1307848520)))))), ((((var_0 ^ (arr_17 [i_0] [i_0] [i_0] [i_4]))) ^ ((((arr_16 [i_0]) ? var_7 : (arr_14 [i_0] [i_0] [i_4])))))))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_25 [i_8] &= (((((arr_7 [i_8] [i_8] [i_8]) / (arr_6 [i_8] [i_8] [i_8]))) + (1307848499 == var_12)));
        var_33 -= ((((arr_17 [i_8] [i_8] [i_8] [i_8]) ? var_3 : (arr_19 [i_8] [i_8] [i_8]))));
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_34 &= ((((~(arr_28 [i_9 + 1]))) * (4194272 && 1923091812460523838)));
        arr_29 [i_9] [i_9] &= ((((((arr_12 [i_9]) / (arr_5 [i_9])))) ? 1854 : (max((arr_27 [i_9 - 1] [i_9]), var_0))));
        arr_30 [i_9] &= (min(((650622134024836144 ? 4294967286 : 21810)), ((((max((arr_14 [i_9] [i_9] [i_9]), var_12))) ? var_2 : (((arr_12 [i_9 - 1]) << (var_0 - 26063)))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                {
                    var_35 = (max(var_35, (arr_17 [i_10] [i_11] [i_12] [i_12 + 1])));
                    var_36 ^= (715257508245347319 <= 1673012969);
                    var_37 = (max(var_37, ((((~var_11) > (arr_17 [i_12 + 1] [i_12] [i_12 - 1] [i_12 - 1]))))));
                }
            }
        }
        var_38 -= ((~(((arr_10 [i_10]) | 18426163922841654470))));
    }
    var_39 ^= (~var_6);
    var_40 *= (((((((var_2 ? var_11 : var_11))) ? var_9 : (var_1 ^ 2161457859))) & 1));
    #pragma endscop
}
