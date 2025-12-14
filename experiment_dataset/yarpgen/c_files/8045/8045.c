/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_4));
    var_14 = 26380;
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = ((~(((arr_0 [i_0]) % (~var_8)))));
        arr_3 [22] = arr_0 [1];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_1] = (((((39155 ? (arr_4 [i_1]) : (arr_8 [10])))) ? var_5 : ((var_0 ? 9053 : (arr_2 [14] [14])))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_12 [1] [13] [i_1] = (((arr_7 [i_1] [i_2]) <= (arr_1 [i_1])));
                var_17 = ((var_5 ? var_7 : (((var_1 ? var_8 : (arr_0 [i_3]))))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_18 = (17355644024763231747 || var_6);
                            arr_21 [20] [i_2] [i_2] [i_2] [i_2] [15] = 26392;
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_19 = (((((11 ? var_0 : 39142))) ? -var_4 : var_5));
                    var_20 = ((var_6 || var_11) == var_6);
                    var_21 = -8390392682714130109;
                }
                var_22 = ((+((var_10 ? (arr_8 [i_1]) : (arr_20 [i_1] [14] [0] [i_4] [i_4] [1])))));
                var_23 = 8390392682714130103;
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
            {
                var_24 = (arr_23 [i_1] [i_1]);
                arr_26 [i_1] [i_1] [i_1] [6] = (var_3 ? (arr_24 [i_1] [i_2] [i_8] [i_8]) : (arr_24 [i_1] [i_1] [i_1] [i_8]));
                arr_27 [i_1] |= ((!((((arr_16 [i_1] [15] [i_8] [15]) ? var_1 : 43)))));
                var_25 *= (((26401 ? 1 : (arr_10 [i_1] [i_1] [i_8]))));
            }
            arr_28 [i_1] [i_1] [i_1] = ((var_1 | (arr_22 [i_1] [i_2])));

            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_26 = ((~((-2251707886217892732 ? (arr_1 [i_2]) : var_12))));
                var_27 = (min(var_27, 2251707886217892747));
                var_28 = (min(var_28, (((+(((arr_29 [14]) ? var_10 : var_0)))))));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_29 = var_12;
                var_30 = (max(var_30, (((!(arr_5 [i_10]))))));
                arr_33 [i_10] [i_10] [i_1] = var_7;
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_31 = ((~(arr_34 [i_1])));
                        var_32 = (min(var_32, (var_5 + 28)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_42 [i_1] = (arr_11 [3] [i_13] [20] [i_1]);
            var_33 = ((((-18219 ? 1 : -2097152)) + ((var_11 ? (arr_40 [i_1]) : (arr_29 [i_1])))));
        }
        for (int i_14 = 4; i_14 < 22;i_14 += 1)
        {
            arr_46 [i_14] [i_14] &= ((var_3 ? (((((-(arr_13 [i_1] [i_1] [i_1] [5])))) ? var_3 : (((arr_2 [i_1] [12]) & (arr_6 [i_14]))))) : ((((((((4205670273 >= (arr_24 [17] [17] [i_14] [i_14]))))) == ((1338166295 ? 39142 : var_5))))))));
            var_34 = (min(var_34, (max(9223372036854775800, var_7))));
            arr_47 [1] [i_14] [i_14] = (max((arr_43 [0] [i_1]), var_0));
            var_35 = (arr_40 [i_14]);
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_36 -= ((-(arr_48 [i_1] [i_15])));
            var_37 *= (12 / 1);
        }
        var_38 -= var_9;
        arr_51 [i_1] = ((~(((~89297018) ^ (min((arr_41 [i_1]), var_1))))));
        arr_52 [22] [i_1] = (((arr_40 [14]) ? (((max(122, 26380)))) : (((-(arr_13 [i_1] [i_1] [i_1] [i_1]))))));
        arr_53 [i_1] [i_1] = (arr_0 [21]);
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
    {
        var_39 = (min(var_39, ((min(7960942595727534788, ((!((max(127, -26192))))))))));
        var_40 = ((~(~var_0)));
        var_41 = var_11;
    }
    #pragma endscop
}
