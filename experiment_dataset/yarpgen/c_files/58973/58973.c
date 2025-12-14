/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!((max(var_9, var_0))))) ? var_7 : var_10));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((arr_0 [i_0]), -11839));
        var_16 = (max(var_16, 1));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 += ((-2024160971 ? 1103614355 : 4988));
            var_18 = ((-1550146502 ? 65529 : ((-(~60548)))));
        }

        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((min((((((var_3 ? (arr_2 [12]) : (arr_8 [i_0] [1])))) || ((((arr_6 [i_2] [i_2]) & var_5))))), ((!(arr_1 [i_2 + 1] [i_2 - 1]))))))));
            var_20 = ((max((((arr_7 [i_2] [i_0]) || (arr_4 [i_0]))), (((arr_0 [i_0]) > (arr_1 [13] [13]))))));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_21 = (arr_0 [i_0]);
            var_22 = (((max((min((arr_7 [i_0] [13]), (arr_10 [i_0] [i_0] [i_0]))), (arr_11 [1] [i_3] [i_0]))) << (((((arr_8 [i_3 - 2] [i_3 + 1]) ? (arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 1]) : (arr_5 [i_3 + 1] [i_3 - 2] [9]))) - 64836))));
            var_23 *= (max((!162), (((arr_0 [i_3]) ? (arr_8 [i_3 + 1] [i_0]) : (arr_9 [1] [i_3 - 2])))));
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_19 [i_0] [i_5] [i_5] = ((((min((((arr_8 [i_0] [i_4]) ? (arr_13 [i_4 - 1]) : (arr_4 [i_0]))), (((var_3 < (arr_0 [i_0]))))))) ? (((min(((((arr_5 [i_5] [i_4 - 2] [i_0]) <= (arr_16 [i_0] [10] [i_5] [i_5])))), (arr_9 [i_4] [i_4 - 2]))))) : (max(44906, 4294967295))));
                arr_20 [i_5] [i_5] [i_5] = ((((arr_6 [i_0] [i_4 - 1]) + (arr_5 [i_0] [i_4 - 1] [i_5]))));
            }
            var_24 = (max(((min((arr_2 [i_4 - 1]), (arr_12 [i_0] [i_4 + 1])))), ((-(arr_12 [i_4 - 1] [i_4 + 1])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_25 = (((arr_12 [i_0] [i_6]) ? (arr_12 [i_0] [i_6]) : (arr_12 [i_0] [i_0])));
            arr_23 [i_0] [i_0] [7] = (416740897 != 65524);
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_26 = (((!(arr_26 [4]))));

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_30 [i_8] [i_7] = (!-var_6);
            var_27 = (min(var_27, (((arr_25 [i_7]) >= ((1008806316530991104 ? 9349238236689903301 : 1103614373))))));
            arr_31 [i_8] [i_7] = (arr_26 [1]);

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_28 = (arr_24 [i_7]);
                var_29 = ((((((arr_24 [i_7]) ? var_4 : (arr_32 [i_7] [1])))) ? (((arr_24 [i_7]) ? var_4 : var_3)) : (arr_26 [i_9])));
            }
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_30 = (max(var_30, ((((var_8 ? (arr_36 [i_8] [i_8]) : (arr_34 [i_7] [i_7] [i_10 + 1]))) < (arr_35 [i_10] [i_10 + 1] [i_10] [i_10 + 2])))));
                    arr_38 [i_7] [i_8] [i_10] [i_11] [i_11] = (arr_36 [i_10 - 1] [i_8]);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_31 = (((arr_34 [i_10 + 3] [i_10 + 3] [i_12]) ? (arr_34 [i_10 + 2] [i_12] [i_12]) : (arr_34 [i_10 + 1] [i_12] [i_12])));
                    var_32 = 1;
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_33 = (arr_42 [i_7] [i_10 + 2]);

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_34 = (((arr_46 [i_7] [i_8] [i_13]) ? (arr_46 [i_7] [i_8] [i_13]) : (arr_26 [i_7])));
                        var_35 = (min(var_35, ((((var_10 ? (arr_24 [i_8]) : (arr_28 [i_14] [18] [10])))))));
                        arr_47 [i_13] = (((((arr_29 [i_7] [i_14]) < (arr_29 [1] [i_7]))) || var_7));
                    }
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_36 += 99;
                        var_37 = arr_29 [i_7] [i_10 - 1];
                        var_38 = (var_12 > (arr_26 [i_10 - 2]));
                        arr_51 [i_13] [i_10 - 2] [i_10 - 2] = (arr_29 [i_10 - 2] [i_8]);
                    }
                }
                arr_52 [i_7] [i_8] [i_8] [i_10] = (arr_28 [i_7] [i_10 + 2] [i_7]);
                var_39 = (((10 < -12) | ((93 ? 8721911067367477109 : 1950807430900818258))));
                arr_53 [1] [10] [i_7] = (((arr_29 [i_10 - 2] [i_10 - 2]) & ((((arr_28 [i_7] [i_7] [i_7]) & (arr_41 [1] [3] [i_10] [i_10]))))));
            }
        }
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_57 [i_16] [i_16] = (min(-821832485, ((((min((arr_10 [i_16] [i_16] [i_16]), 5367410432966087740)) >= ((((arr_32 [13] [i_16]) ? (arr_25 [i_16]) : (arr_14 [3])))))))));
        var_40 = (arr_4 [i_16]);
        var_41 -= -1713378720;
    }
    #pragma endscop
}
