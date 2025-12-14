/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 ? (~var_10) : ((((max(var_11, var_12)) == 1258334730)))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = var_8;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_17 = (-2147483647 - 1);
                var_18 = (max(0, 23));
            }
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                var_19 = (arr_3 [i_1] [8]);
                arr_12 [i_1] = -48;
            }
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_20 ^= (((0 >> (((arr_2 [i_0 - 1] [i_4 - 2]) - 9277396)))));
                var_21 ^= (max((arr_16 [i_0 - 3] [i_0 - 2] [i_0 - 2]), ((~(arr_16 [i_0 + 1] [i_0 - 4] [i_0 + 1])))));
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_22 = -23;
                arr_21 [i_1] [3] = max((arr_7 [i_0] [i_0 - 3] [i_1]), ((-(arr_15 [i_5] [16] [i_5 + 1] [i_5 - 1]))));
                arr_22 [i_0] [i_1] = 9223372036854775807;
                var_23 = -3792210488;
            }
            var_24 = ((((-(arr_3 [i_1] [i_0 - 3])))) ? (-127 - 1) : ((-(var_9 - var_9))));
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_25 = ((min((arr_18 [i_0] [i_0 - 2] [i_0 - 3]), 2720817150)) - var_10);
            var_26 ^= ((((max(233, 0))) ? ((max((arr_2 [i_0 - 1] [i_0 - 4]), (arr_2 [i_0 - 3] [i_0 - 1])))) : (~11447178879468820022)));

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_27 = (((max((var_12 / var_5), var_1)) + 44));
                var_28 &= ((!(((min(var_4, var_10))))));
                arr_28 [i_7] [i_0] [i_0] [i_0] = ((~((-(max(var_6, var_4))))));
            }
            arr_29 [8] [8] [i_0 - 2] = 247;
            arr_30 [12] [i_0] = (((262143 ^ (((arr_5 [16] [i_0]) ? (arr_5 [i_0 - 3] [i_0]) : (arr_13 [i_0] [i_6] [i_0]))))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_29 = (((((5 ? var_2 : (arr_6 [i_8])))) ? ((-1239 ? var_14 : var_2)) : (arr_16 [i_0 - 4] [i_8 - 1] [i_8 - 2])));
            arr_34 [i_0] [i_8] = var_9;
            var_30 = (max(var_30, (((var_3 ? (arr_20 [i_0] [i_0] [i_0 - 4]) : 145)))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_39 [i_9] = (arr_19 [i_0]);
            var_31 = (max(var_31, (var_6 >= var_14)));
        }
        arr_40 [16] = ((min((max(var_13, -7821567845634103280)), var_2)));
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] = ((((arr_7 [i_10] [4] [i_10]) <= var_1)));
        arr_45 [i_10] = ((!(arr_1 [i_10 - 4] [i_10 - 4])));
    }
    #pragma endscop
}
