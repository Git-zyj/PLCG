/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max(var_8, var_7));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((4080 ? (((((((arr_0 [i_0]) <= (arr_1 [i_0] [i_0])))) <= 4080))) : (((61455 && ((!(arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_2] [i_1] |= ((-61438 <= (arr_4 [i_1])));
                arr_9 [i_0] [i_1] [i_1] [9] = ((~(max((arr_6 [i_0] [i_0] [i_0]), (var_11 | var_10)))));
                var_20 = (((((8191 & var_8) + (arr_0 [i_0])))) || (((~(max(var_15, (arr_5 [i_2] [i_2])))))));
            }
            var_21 = (arr_5 [i_0] [i_1]);

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                arr_13 [i_0] [i_3] = (arr_5 [i_1] [7]);
                arr_14 [i_0] [i_1] [i_1] [i_1] = (arr_1 [i_1] [i_1]);
            }
            var_22 = (min(var_22, var_4));
            var_23 = (var_0 ^ (arr_6 [i_0] [i_1] [i_1]));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] = (max(((!(!var_5))), ((!(arr_11 [i_0] [i_5])))));
                var_24 += (max(((8208 ? 61464 : 8194)), var_3));
            }

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_25 [i_0] = var_15;
                arr_26 [i_0] [i_4] [i_4] = ((58 && (arr_6 [i_6] [i_4] [i_0])));
                arr_27 [i_0] [i_0] = ((((!((min((arr_4 [i_0]), 5328566043825297368))))) ? (((1981716238405204418 ^ 8172) * var_10)) : ((((1 - 8191) * (arr_12 [i_0] [i_6]))))));
            }
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                var_25 = (((min(var_18, (((arr_12 [i_0] [i_4]) ? (arr_19 [i_0] [i_4] [i_7]) : (arr_4 [i_7])))))) ? ((((47 >= (arr_3 [i_0] [i_4]))))) : (max((((var_13 <= (arr_4 [i_4])))), (arr_0 [i_0]))));
                arr_30 [i_0] [i_4] [i_0] [i_0] = (max((arr_21 [9]), (((!(57350 & 15))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_26 = ((~(arr_17 [i_10 - 1] [i_10 - 1])));
                        var_27 = (((((arr_36 [i_0] [i_4] [i_8] [4]) * (arr_0 [i_0]))) << (arr_11 [i_10 + 1] [i_8])));
                    }

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_40 [i_0] [i_4] [i_0] [i_11] [i_11] = 0;
                        arr_41 [i_0] [i_11] [i_8] [i_9] = (var_16 ? var_8 : (arr_22 [i_11] [i_4] [i_8] [i_4]));
                        arr_42 [i_0] [i_11] [i_4] [6] |= ((~(1014012645 == 61457)));
                    }
                    for (int i_12 = 2; i_12 < 7;i_12 += 1)
                    {
                        arr_46 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0] = (((arr_28 [i_0] [i_8] [i_9] [i_0]) ? 13118178029884254248 : (arr_18 [i_12 + 3] [i_12] [i_12] [i_12])));
                        arr_47 [2] [i_9] [i_0] [i_4] [i_0] = ((100053184583703408 ? -124 : -100053184583703408));
                        arr_48 [i_0] [i_4] [i_4] [i_4] [1] = -100053184583703411;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_51 [i_0] [i_4] [i_13] [i_4] [i_13] = ((49152 ? (~8165) : (arr_6 [i_9] [i_4] [i_8])));
                        arr_52 [i_0] [i_4] = var_12;
                        var_28 = ((~(!var_5)));
                        var_29 &= (arr_39 [i_8] [i_9]);
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_55 [i_0] [i_4] [i_0] = var_16;
                        var_30 = (13118178029884254254 || 1038365172);
                    }
                    var_31 = (arr_16 [i_0] [i_9]);
                }

                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_32 = (((arr_45 [i_0] [i_4] [i_8] [i_15]) * var_7));
                    arr_58 [i_0] [i_4] &= (arr_35 [i_0]);
                }
                var_33 = (max(var_33, (arr_43 [i_0] [i_0] [i_4] [i_8] [i_0] [i_8])));
            }
            arr_59 [i_0] = (~1981716238405204418);
            arr_60 [i_0] [i_0] = var_7;
        }
        var_34 = ((4294967279 > (arr_32 [i_0])));
    }
    var_35 = max(var_6, ((~((910166989 ? 48 : var_17)))));
    #pragma endscop
}
