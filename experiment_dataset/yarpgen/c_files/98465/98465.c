/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(var_1, var_8)), var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? var_9 : var_5));
        var_11 *= ((18446744073709551615 ? 1 : 1));
        arr_3 [6] |= (1 || 938);

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_4 [10] [i_1])));
            var_13 = (max(var_13, var_4));
            var_14 ^= (arr_5 [10]);
            var_15 *= ((var_0 ? var_1 : 1073217536));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = (((arr_8 [i_3 - 1] [i_3 - 1] [i_0]) << (((var_6 | 18446744073709551614) - 18446744073709551609))));
                        arr_18 [i_0] [i_2] [i_2] [i_3] [i_3] [0] = ((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0])));
                        var_16 = (((((var_1 ? var_2 : (arr_12 [i_0] [i_0] [i_3] [i_3])))) ? ((var_1 ? 18446744073709551614 : (arr_10 [i_0] [i_0] [i_3] [i_4]))) : (arr_12 [i_0] [i_2] [i_0] [i_4])));
                        var_17 = var_8;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_18 = ((1 ? (arr_14 [22] [i_6 - 2] [i_5] [i_6]) : 7));
                            var_19 += var_4;
                            var_20 = (((arr_25 [i_0] [2] [i_5] [i_6 - 1] [i_7]) ? (18446744073709551614 - var_8) : ((var_0 ? 1 : (arr_0 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_21 = (((arr_19 [i_8] [1] [i_8]) ? (((max((((18446744073709551615 == (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))), var_6)))) : 18446744073709551613));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 20;i_12 += 1)
                        {
                            arr_42 [i_8] [i_9] [i_10] [i_11] [i_12] [i_9] [i_8] = var_9;
                            var_22 = ((((min(51439, 238))) ? ((-0 ? (((var_0 && (arr_34 [i_9])))) : ((((arr_23 [i_8] [i_12] [i_10] [i_11]) || 1))))) : (((arr_14 [i_9 + 1] [i_12 + 2] [i_12 + 1] [i_12]) ? var_9 : (((!(arr_9 [i_8] [i_9]))))))));
                            arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = (max(((max((((arr_40 [i_8] [7] [i_9] [i_10] [i_11] [i_12] [i_10]) ? var_5 : 0)), (arr_21 [i_8] [i_8] [i_9] [i_9 + 1] [i_8] [i_9 - 2])))), (max(((var_1 ? var_1 : var_4)), ((((arr_16 [i_8] [i_9] [i_10] [i_9] [i_12 + 2]) ? (arr_41 [i_8] [i_8] [i_9] [i_10] [i_9] [i_11] [i_12]) : var_6)))))));
                        }
                        var_23 = (min(((((min(0, (arr_8 [i_8] [i_8] [12])))) ? (min(1, 511)) : ((1 ? 51439 : 23)))), ((max(12, (((arr_36 [i_11] [i_9] [i_10]) >> (((arr_12 [i_11] [i_10] [i_9 - 3] [i_8]) + 1003840360)))))))));
                        arr_44 [i_8] [i_9] [i_10] [i_9] = ((((((var_5 ? var_3 : (arr_8 [i_9] [i_9] [i_10]))) ? (max((arr_29 [i_9]), (arr_26 [i_9] [i_9] [i_10]))) : (((arr_32 [9]) ? (-32767 - 1) : (arr_12 [i_8] [i_9 - 3] [i_10] [i_11])))))));
                        arr_45 [i_11] [i_9] [i_10] |= ((min(var_5, 31)));
                        var_24 = (((((((min((arr_5 [i_9]), (arr_20 [i_9])))) ? ((var_3 ? var_7 : var_4)) : var_2))) ? (~30915) : (((arr_33 [i_8] [i_9] [i_10] [i_9]) ? -3578 : (max(0, 2617630053))))));
                    }
                }
            }
        }
        var_25 *= ((((min((min(-71, 8103167958604805889)), 7217964061308140669))) || (arr_33 [i_8] [i_8] [i_8] [16])));
        var_26 = ((var_8 ? (((((min((arr_32 [i_8]), var_1))) < (arr_31 [i_8] [8] [i_8])))) : var_9));
        var_27 = (min((((+((min((arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]))))))), (((((var_7 ? var_8 : 12))) ? (((1 ? var_3 : (arr_37 [i_8] [i_8] [i_8] [i_8] [i_8])))) : ((0 ? 3065562046 : 1004121843))))));
    }
    #pragma endscop
}
