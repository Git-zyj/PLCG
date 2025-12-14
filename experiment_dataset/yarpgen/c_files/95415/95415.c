/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((508023171 ? (((var_12 ? var_10 : var_17))) : var_8))) ? 1365183443 : (((((max(166, var_1))) ? (var_16 <= 1365183459) : ((var_4 ? -1425086257 : 13)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] &= (((arr_2 [i_1 + 2]) ? (((arr_1 [i_1]) ? var_1 : 2929783864)) : (arr_0 [i_1 - 1] [0])));
            arr_7 [i_0] [i_0] &= ((var_17 == (arr_5 [i_1 - 1] [i_1 - 1] [i_0])));
            arr_8 [i_0] [i_0] &= ((((((arr_5 [i_0] [1] [i_0]) ? var_16 : var_11))) ? (~var_10) : (arr_3 [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_11 [7] &= var_10;
            arr_12 [i_0] [i_0] [i_2] = 2929783836;
            arr_13 [i_0] [i_2] = ((32767 ? var_17 : (((arr_5 [8] [i_2] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, (((2929783852 >> ((((var_11 ? (arr_18 [i_0] [i_2] [i_4]) : (arr_0 [i_4] [i_0]))) - 2332930670)))))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_2] [6] [6] [i_5] = (arr_15 [0] [i_4 - 3] [3] [7]);
                            var_20 = (max(var_20, (arr_19 [i_0] [i_4 - 1] [6] [7])));
                        }
                        arr_23 [i_0] [i_4] = (((arr_17 [i_4 - 2] [i_4] [i_4 + 2] [1]) ? (arr_5 [i_0] [i_0] [i_0]) : (!var_17)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] [i_0] [i_6] = (arr_2 [i_0]);
            var_21 ^= (arr_15 [9] [i_0] [i_6] [i_6]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_0] &= (min((arr_19 [i_7] [i_7] [i_7] [i_0]), ((max((min((arr_4 [i_7] [i_7]), (arr_9 [9] [i_7]))), ((max(0, (arr_0 [i_0] [i_7])))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_22 = (max(var_22, ((min((((arr_19 [i_0] [i_7] [i_8] [i_0]) ? var_6 : (min(-6, 4225883103)))), ((((~0) - ((0 & (arr_10 [6] [i_7])))))))))));
                        var_23 = (min(var_23, (((~(arr_35 [i_0] [i_7] [i_8] [i_9]))))));
                    }
                }
            }
        }
        arr_36 [i_0] |= ((!(((((arr_32 [i_0] [i_0]) == (arr_29 [i_0])))))));
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_24 = ((~(arr_40 [i_10])));
        arr_41 [1] [i_10 - 1] = (max(3922894548, (arr_38 [13])));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_25 -= (((min((arr_39 [i_11]), (((arr_43 [i_11]) ? var_6 : (arr_43 [i_11])))))) ? (!13807) : 1365183459);
        arr_44 [i_11] = (-var_15 ? (((arr_43 [i_11]) ? (arr_38 [11]) : ((max(2929783852, var_12))))) : var_10);
        arr_45 [i_11] [i_11] = (((((3922894548 ? ((var_12 ? 723552286 : var_1)) : (arr_37 [i_11])))) ? (max(var_8, 11)) : (min(1, 1365183444))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_26 = (min(var_26, ((2929783859 ? var_10 : 2929783854))));
        arr_49 [i_12] [3] |= ((arr_48 [1] [i_12]) ? ((((arr_48 [i_12] [i_12]) ? (arr_48 [i_12] [i_12]) : var_14))) : ((var_9 ? (arr_47 [1]) : (arr_47 [i_12]))));
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        arr_52 [i_13] = ((((max((((arr_48 [i_13] [i_13]) + var_4)), (arr_37 [i_13])))) ? (min(var_8, (arr_51 [i_13]))) : -var_8));
        var_27 = (((max((arr_50 [i_13]), (arr_50 [i_13]))) ? (arr_50 [i_13]) : (((arr_50 [i_13]) >> (arr_50 [i_13])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_28 = 1;
        arr_57 [i_14] = (((arr_38 [i_14]) <= ((((!(arr_47 [i_14])))))));
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
    {
        arr_60 [i_15] = (max(((max(var_1, (arr_59 [i_15])))), (((arr_59 [i_15]) * (arr_59 [i_15])))));
        arr_61 [i_15] [i_15] = (max((((arr_40 [i_15]) ? (arr_53 [i_15] [i_15]) : (arr_53 [i_15] [i_15]))), ((max((arr_51 [i_15]), (arr_51 [i_15]))))));
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_64 [i_16] [i_16] = (arr_48 [3] [i_16]);
        var_29 = (((arr_59 [i_16]) % ((~(max(-169655851, (arr_62 [13])))))));
        var_30 |= ((((min(((((arr_51 [1]) <= -6128314747530620885))), 1))) ? (arr_59 [i_16]) : (((-(arr_62 [i_16]))))));
        arr_65 [6] = (((min(1365183444, 2764090205575442746)) >> (arr_40 [i_16])));
    }
    #pragma endscop
}
