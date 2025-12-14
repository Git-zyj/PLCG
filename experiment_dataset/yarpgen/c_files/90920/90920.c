/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1]);
            arr_8 [i_1] [i_0] = var_1;
            var_16 ^= (arr_4 [i_0] [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]);
                    arr_16 [i_0] [i_2] [i_3] [i_4] &= (~var_0);
                    arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((~(arr_11 [i_0] [i_2]))) ^ ((233 % (arr_3 [i_2] [9] [i_4])))));
                    var_17 = (max(var_17, (((var_12 == (arr_4 [i_0] [i_2] [i_3]))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_18 = ((-634509030649649809 & (~11440725)));
                    var_19 = (arr_19 [i_2] [i_2] [i_5]);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_20 *= ((~(arr_3 [i_2] [i_3] [i_6])));
                    arr_22 [i_0] [i_0] [22] [i_3] [i_6] [i_6] = ((var_13 | (arr_13 [i_0] [i_2] [i_2] [i_6])));
                    arr_23 [i_0] [i_2] [i_3] [i_6] |= (arr_19 [i_0] [i_2] [i_2]);
                    var_21 = (max(var_21, (15360 - 161)));
                    arr_24 [i_6] = (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_6]);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (arr_27 [i_0] [i_0] [i_0] [i_0])));
                    arr_28 [i_3] [i_7] = var_12;
                    var_23 = ((~(arr_6 [i_2] [i_3])));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_31 [i_0] [i_2] [i_3] [i_8] = -7580550293427073394;
                        arr_32 [i_0] [i_2] [i_7] [i_8] = (((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (arr_29 [i_0] [i_2] [i_2] [i_3] [i_7] [i_8])));
                    }
                }
                var_24 = (arr_21 [i_0]);
                arr_33 [i_0] [i_2] [i_2] = (arr_19 [i_0] [i_2] [i_0]);
                arr_34 [i_0] = ((-(arr_3 [i_0] [i_2] [i_3])));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_39 [i_9] [i_2] [i_2] = ((~(arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] [i_9])));
                arr_40 [i_0] [i_9] [i_9] [i_9] = ((var_2 < (arr_37 [i_9] [i_2] [i_0])));
            }
            var_25 = (((arr_5 [i_0] [i_2]) ? 41700 : (arr_30 [i_2] [i_2] [i_0] [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_49 [6] [i_10] [i_11] [6] = (((arr_45 [19] [i_10] [i_11]) >= 1128594953));
                        var_26 = (min(var_26, (((!(!var_4))))));
                        arr_50 [8] [i_11] [i_11] [i_11] [i_11] [i_11] = (~var_14);
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_27 = (max((arr_6 [i_13] [i_13]), var_14));
        var_28 = (min(var_28, (((((((max((arr_0 [i_13] [i_13]), var_7)) <= -2710124666830458353))) > (arr_26 [21] [i_13] [21] [i_13] [i_13]))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    arr_57 [i_14] [i_14] [i_15] [i_13] = (arr_10 [i_13] [i_15]);
                    var_29 -= ((((4294967295 <= (arr_9 [i_13]))) ? (((max(-113, (arr_43 [i_15] [i_13]))))) : (max((((-32767 - 1) ? (arr_41 [i_13] [i_14]) : (arr_56 [i_13] [i_13] [i_13] [i_15]))), (((417441100431357271 ? (arr_35 [i_13] [i_14] [i_15]) : 127)))))));
                }
            }
        }
        var_30 = ((var_0 == ((max((arr_37 [i_13] [i_13] [i_13]), 3076462468)))));
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_31 = (arr_47 [i_16] [i_16] [i_16] [i_16]);

        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            var_32 = (min(var_32, ((max(var_6, (arr_4 [i_16] [i_17] [i_16]))))));
            arr_64 [i_16] [i_16] [i_16] = 20045;
            var_33 = (max(var_33, (((max((arr_13 [i_16] [i_16] [i_17] [i_17]), (arr_13 [i_16] [i_17] [i_16] [i_16])))))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                {
                    var_34 = ((((~(arr_18 [i_16] [i_18] [i_18] [i_19] [i_19] [i_19]))) & (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
                    var_35 = (((4947 && 100) ? 1 : -14));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        var_36 = ((9223372036854775801 == (arr_62 [i_20] [i_20] [i_20])));
        var_37 = (min(var_37, (((((!(arr_62 [i_20] [i_20] [i_20]))))))));
        arr_72 [i_20] [i_20] = (((((((arr_68 [i_20] [i_20]) && -50)))) <= (((arr_68 [i_20] [i_20]) / (arr_68 [i_20] [i_20])))));
    }
    #pragma endscop
}
