/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = max(194, (arr_4 [i_1]));
            var_10 = (min(var_10, ((min(var_2, ((-1575452090 ? (arr_2 [i_0 - 1]) : (max(1575452114, (arr_2 [i_1 - 2]))))))))));
            arr_6 [i_1] = (max(((min((arr_4 [i_1]), (arr_4 [i_1])))), (max(1575452067, 8387584))));
            var_11 = (min(-626502969, 1575452077));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_2] = 1575452063;
            var_12 |= ((((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])))) ? (((max(2147483637, (arr_4 [i_2]))) + -1575452093)) : (~238)));
            arr_10 [i_0] [i_2] = (arr_3 [i_0] [i_0] [i_0]);
            arr_11 [i_0] [i_2] = ((var_4 ? var_6 : (((((5 >= (arr_8 [i_0]))) ? (((arr_2 [i_2]) & 251)) : (arr_0 [i_0 - 1]))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_13 = 1575452091;
                var_14 = (min(43591, 157));
                arr_16 [i_3] [i_3] [i_4 + 1] [i_3] = var_6;
                var_15 = ((((((var_3 * 4294967291) ? (arr_14 [i_0] [i_3] [i_0 + 1] [i_4 + 2]) : ((~(arr_3 [i_4] [i_3] [i_0])))))) ? (((((arr_0 [i_0]) < (arr_8 [i_4]))) ? 193 : (max(16776192, var_1)))) : ((((!(!5)))))));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_16 += (arr_22 [i_0 - 1] [i_0 + 3] [i_3] [i_6 + 2] [i_6 + 2]);
                    arr_23 [i_0 + 2] [i_3] = (4 <= -1575452079);
                }
                for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_17 = ((!((max(var_3, 5)))));
                    var_18 -= max((var_9 / 25535), var_9);
                    var_19 += 159;
                    arr_26 [i_3] [i_3] [i_3] [i_7 + 2] = ((((((arr_15 [8] [i_3] [i_0 - 1]) ? ((min(51, var_8))) : 96))) ? ((43490 ? 195 : 62)) : (min((arr_13 [i_7 + 2] [i_7 + 2] [i_0 - 1]), (145 & var_4)))));
                }
                var_20 = (max(((~((max((arr_8 [i_0]), (arr_7 [i_0] [i_3])))))), (min((arr_3 [i_0 - 1] [i_3] [i_3]), -1592060095))));
            }
            arr_27 [8] [i_3] [i_0] |= 252;
            var_21 = (((((arr_7 [i_0 + 1] [i_0 + 4]) >= (arr_19 [11] [i_0 + 2] [i_0] [i_0 + 2]))) ? ((~((1023 ? 28 : (arr_21 [i_0 - 2] [i_3] [i_3] [i_3]))))) : 153));
        }
        var_22 = (((((((((arr_24 [8] [8] [8] [8] [i_0]) % (arr_17 [i_0 - 1] [i_0 - 1] [12])))) ? ((65535 ? var_5 : (arr_22 [1] [i_0] [i_0] [i_0 + 1] [4]))) : (arr_3 [i_0] [i_0] [i_0])))) ? ((min((!43499), (arr_19 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 4])))) : ((min((arr_19 [i_0 + 2] [i_0] [i_0 + 4] [i_0 - 2]), (arr_3 [i_0 + 4] [i_0 + 4] [i_0 - 2]))))));
        var_23 += (((((149 ^ 24) ? 168 : 185)) / 4));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_24 += (((((arr_28 [i_8]) ? (arr_28 [i_8]) : 143)) >> (((arr_29 [i_8]) - 2193889899))));
        var_25 = ((var_2 ^ (((164 > (arr_29 [i_8]))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_26 = ((((7 ? 0 : 142)) != ((((arr_35 [i_8] [10] [i_10] [i_8]) <= 210)))));
                        var_27 = (min(var_27, -524284));
                        arr_37 [i_10] = ((arr_31 [i_9 + 2]) ? (arr_36 [i_10] [4] [i_10] [i_10] [i_11]) : 236);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {

                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        var_28 = (((arr_41 [3] [i_12 - 1] [i_13] [i_14 - 3]) + (arr_41 [i_8] [i_12 - 1] [13] [i_14 - 3])));
                        var_29 = 12325;
                        var_30 = (161 / var_9);
                    }
                    var_31 = (max(var_31, (((65522 || (arr_30 [i_12 + 1] [i_12 + 1]))))));
                }
            }
        }
        arr_46 [i_8] = (0 | 158);
    }
    var_32 = var_5;
    #pragma endscop
}
