/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((!var_4) | (var_2 & var_14))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (var_12 ? ((~(arr_0 [i_0 - 1]))) : var_14);
        var_18 = ((-((((max(var_8, 23448))) + var_10))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 = 255;

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_20 -= ((((arr_7 [i_0 + 1]) << var_14)));
                var_21 = 32736;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_22 = var_10;
                        var_23 &= ((255 | (arr_9 [i_1] [i_3])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_24 = (35184363700224 < -1313);
                        var_25 = ((1048575 ? 17324615681754281709 : 1321));
                        var_26 = (((((var_2 ? (arr_6 [i_6] [i_6]) : var_0))) || (arr_4 [i_4 + 2] [i_4 - 4] [i_0 + 1])));
                        var_27 = ((var_11 ? (arr_15 [i_0 - 1]) : 2217858882));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_28 = 35184363700224;
                        var_29 = -1287;
                        var_30 = (((arr_16 [i_0] [i_0]) == var_7));
                    }
                    var_31 = (arr_12 [i_0 - 1] [i_3] [i_3] [7] [i_0 - 1] [i_0 - 1]);
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_32 = -65535;
                    var_33 = (((((arr_10 [i_0 + 1] [13] [i_0 - 1]) >= var_14)) ? 35184363700224 : -var_6));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_34 = (max(var_34, (var_7 % var_10)));

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_35 = (max(var_35, (var_8 & var_5)));
                        var_36 = (((arr_24 [i_0 - 1] [i_0 + 1] [i_3] [i_0] [i_0 - 1]) == 590528158));
                    }
                    var_37 = (((-32 * 0) + ((var_0 ? (arr_18 [i_0 + 1]) : 1))));
                    var_38 = (min(var_38, (((((var_6 ? -10281 : var_12)) << (-var_1 - 6102270839379986489))))));
                }
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_39 = 590528158;
                        var_40 ^= (((var_9 || -13) || var_2));
                    }
                    var_41 = (18446708889345851392 ? 255 : 158);
                }
                var_42 = ((!(arr_7 [i_0 - 1])));
            }
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_43 = (((((((max(var_13, var_12))) ? ((((arr_9 [i_0 + 1] [i_13]) ? 63 : var_13))) : ((-1 ? (arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_13] [i_13] [1] [i_13]) : (arr_7 [i_0 - 1])))))) || (((var_6 + (arr_35 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));

            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                var_44 = (max(var_44, (((((min(var_9, -1321))) && ((((((1 ? 4563 : -1259))) ? 27388 : 19632))))))));
                var_45 = ((((10 ? (arr_20 [i_0] [7] [i_13] [i_13] [i_14 - 2]) : (arr_18 [i_0]))) % ((max((arr_7 [i_0]), (arr_15 [i_0]))))));
                var_46 = (2095443107 ? (((var_10 == ((min(-110, (arr_5 [i_0 - 1] [i_0 - 1]))))))) : ((-((min(56, -27389))))));
                var_47 &= 0;
            }
        }
        var_48 ^= ((-1 != (!157)));
    }
    for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
    {
        var_49 = (min(var_49, (((((((var_5 || (arr_31 [i_15 + 1] [10] [3] [i_15 - 1] [i_15 + 1]))))) != ((((255 ? -17694 : var_0)))))))));
        var_50 = ((var_2 ? (((var_6 || ((min(var_15, 35184363700210)))))) : (arr_30 [i_15] [i_15 - 1] [i_15 + 1] [i_15] [i_15])));
        var_51 |= (min(((-(arr_9 [i_15 + 1] [i_15 - 1]))), ((((arr_9 [i_15 - 1] [i_15 + 1]) ? 27386 : -1313)))));
    }
    var_52 = (30101 < -11);
    #pragma endscop
}
