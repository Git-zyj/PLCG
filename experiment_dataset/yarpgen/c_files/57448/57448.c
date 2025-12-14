/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [12] = var_4;
        var_17 -= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_1] = 24270;
                        var_18 = (min(var_18, (((-(max((arr_13 [i_1] [i_1 + 1] [i_1] [i_4]), var_0)))))));
                        arr_16 [i_1] = 1340742064;
                    }
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        var_19 = (min(var_19, ((((arr_8 [4] [i_2] [i_2]) ? (((min(65, (!var_9))))) : (((((arr_2 [14]) ? 1796339381 : 92)) | (arr_17 [i_2] [1] [i_3 - 1]))))))));
                        arr_19 [i_1] [i_1] = (!86);
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_20 = (max(var_20, ((-(max((arr_3 [i_1 - 1] [i_1]), (arr_18 [i_2] [6] [i_3 + 1] [i_1 - 1])))))));
                        var_21 = (min((max(1, (arr_21 [i_1] [i_2] [i_2] [i_1]))), (max(92, (arr_2 [i_1 + 1])))));

                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_1] [i_6] [i_3] [i_3] [i_6] [i_1] |= 3804504462;
                            var_22 = (max(var_22, (arr_13 [i_1 + 1] [i_1 + 1] [i_7] [i_6])));
                            arr_26 [i_2] [i_2] [i_2] [i_6] [i_2] [i_2] &= (((arr_2 [i_6]) & ((((var_11 >= (arr_2 [i_3])))))));
                            arr_27 [i_1] [1] [i_6] [i_6] [1] = ((((((arr_17 [i_1] [i_3 - 1] [i_1]) ? (arr_17 [i_6] [i_3 + 1] [i_3]) : 37904))) ? (((arr_17 [i_3] [i_3 - 1] [i_2]) ? var_5 : (arr_17 [i_3] [i_3 - 1] [i_3]))) : ((var_0 ? (arr_17 [i_3] [i_3 + 1] [i_1]) : 41278))));
                        }
                        var_23 |= (arr_5 [i_6]);
                    }
                    var_24 = -var_11;
                }
            }
        }
        arr_28 [i_1] = (((((max(26446, -12877))) ? 32767 : (arr_9 [i_1]))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    {
                        var_25 *= (max(var_14, ((-(arr_20 [8] [i_9] [12] [i_10] [8] [i_10])))));
                        arr_36 [i_10] [i_10] [i_1] = (arr_13 [i_1 + 2] [3] [i_9] [i_1]);
                    }
                }
            }
        }

        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            arr_40 [i_1] [i_1] = (min((arr_32 [i_1 + 1]), (((arr_8 [i_1] [i_1] [i_1]) ? (arr_18 [i_1] [i_11 + 2] [i_1] [i_1]) : (arr_24 [i_1])))));
            arr_41 [i_1] [i_11] = (max(((var_5 ? (12876 % var_7) : ((157 << (4331 - 4316))))), ((((arr_30 [i_1] [i_1] [i_1]) == ((var_6 ? (arr_32 [i_1]) : (arr_10 [i_1] [i_1] [i_1]))))))));

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                arr_45 [i_1] [i_11] [i_11] [i_12] = ((var_13 << ((((-1 ? (max(var_12, (arr_43 [i_12] [i_11 - 1] [i_1]))) : (~var_2))) - 3661190093))));
                arr_46 [i_1] [i_1] [i_12] = (arr_38 [i_1]);
                arr_47 [i_1] [4] [4] [i_1] = (max((((!(arr_1 [i_1] [3])))), ((-((var_7 ? 100 : (arr_12 [12] [i_11 + 2] [i_11 + 2])))))));
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                arr_51 [6] [i_1] [i_13] [i_13] = (((max(-1575845211, (max(-18521, 24258))))));

                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_26 += (arr_1 [i_1 + 1] [i_11 - 1]);
                    var_27 = (min(var_27, ((((((arr_24 [i_13]) >= ((14 ? (arr_6 [8]) : (arr_10 [i_13] [i_13] [i_13]))))) && (arr_37 [i_1] [i_13]))))));
                }
                var_28 = (min(var_28, ((min(((~((3013920749 | (arr_10 [i_13] [i_11] [i_13]))))), var_9)))));
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 10;i_16 += 1)
            {
                {
                    var_29 = (max(var_29, (((~(max(var_4, (arr_31 [i_16 - 2] [i_16] [5] [i_16 - 1]))))))));
                    var_30 = (max(var_30, ((max(((~(arr_31 [i_1] [i_15] [i_1 + 2] [i_1]))), ((((arr_1 [i_15] [i_15]) ? var_10 : ((var_15 ? (arr_20 [i_15] [i_16] [i_15] [0] [i_16] [1]) : (arr_30 [1] [1] [1])))))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 11;i_17 += 1) /* same iter space */
    {
        var_31 += arr_42 [i_17 + 2] [2];
        var_32 += var_3;
    }
    for (int i_18 = 2; i_18 < 10;i_18 += 1)
    {
        arr_62 [9] [9] = (((~(~-16340))));
        arr_63 [i_18] = ((~(min((arr_43 [i_18 - 2] [i_18] [i_18 - 2]), (((arr_13 [i_18] [i_18 - 1] [i_18] [i_18]) ? var_12 : 31134))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 4; i_20 < 9;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    {
                        arr_72 [i_18] [i_18] [i_18] [i_18] [i_21] = (arr_12 [i_18 - 2] [i_19] [i_20]);
                        arr_73 [i_18 - 1] [i_18 - 1] [i_18] [i_18] = ((((((((arr_71 [i_18] [i_19] [1] [i_19] [1]) * 20)) / ((min(var_5, (arr_55 [i_18] [i_18]))))))) ? (arr_7 [i_18]) : (max((65535 / -933659820), (arr_70 [i_20] [i_18 - 1] [0])))));
                    }
                }
            }
        }
    }
    var_33 = (max(((-((3197434902 << (172 - 158))))), (~-188)));
    var_34 = var_12;
    #pragma endscop
}
