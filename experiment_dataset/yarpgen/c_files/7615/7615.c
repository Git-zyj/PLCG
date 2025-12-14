/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((var_6 ? (arr_0 [i_0 + 2]) : var_4)) + (arr_0 [i_0]))) - (arr_0 [i_0 + 1])));
        var_18 = (((arr_1 [i_0]) >= 536805376));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_19 = (max(var_19, (arr_4 [i_1])));
                    arr_11 [i_2] [i_2] [3] = ((arr_8 [i_2 + 2] [i_2 - 1] [i_3 - 1] [i_2 - 1]) | (arr_3 [i_1] [i_1]));
                }
                var_20 = (max(var_20, -13774));
                arr_12 [13] [i_2] [i_2] [i_3 + 1] = ((arr_4 [i_1]) ? (arr_3 [i_3 + 1] [i_3 - 1]) : (arr_4 [i_1]));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_18 [i_1] [i_2] [i_1] [i_6] [i_2] = ((-536805377 ? 0 : 117));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_21 = -536805380;
                        var_22 = 13774;
                        arr_21 [i_2] [i_2] [i_2] [i_6] [11] = var_14;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_2] [i_8] = (((arr_9 [i_1] [i_8] [i_2 + 1] [i_8]) > (40151 ^ 0)));
                        var_23 = (min(var_23, 0));
                        var_24 = (max(var_24, 63753));
                        var_25 = (2147483647 <= 32757);
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_2] [i_2 - 1] [i_2] = (arr_8 [i_9] [i_2] [i_1] [i_6]);
                        var_26 = var_5;
                    }
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    arr_33 [i_2] [i_2 - 1] [i_5] [i_2 - 1] = (!536805376);
                    arr_34 [i_2] [i_2] = (arr_25 [i_10] [i_2] [i_10 + 3] [i_10 + 1] [i_2 + 2]);
                    arr_35 [i_1] [i_2] [i_2] [0] [6] [i_1] = (var_13 + -7569);
                    var_27 = (((arr_25 [4] [i_2] [i_10 + 2] [i_10 + 2] [i_2]) ? (arr_25 [i_1] [i_2] [i_1] [i_1] [i_5]) : 32757));
                }
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    arr_40 [i_1] [i_2] [i_5] [i_11 - 1] [i_2] [i_11 + 1] = (arr_28 [i_2] [i_11 + 2] [i_1] [i_2 + 1] [i_11 + 1]);
                    arr_41 [i_1] [i_2] [i_2] [4] = ((~(arr_10 [i_2] [i_2] [i_11 + 1] [i_11] [i_2] [i_2 + 1])));
                    arr_42 [i_2] [i_2] = 2363432150254240048;
                    var_28 = (min(var_28, (~63745)));
                }
                arr_43 [i_1] [i_2 + 1] [i_5] [i_2] = ((!(arr_31 [i_2 + 2] [i_2])));
            }
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {
                arr_48 [i_1] [i_2] [4] [4] = 634141728;
                arr_49 [i_2] [i_2] [i_12] = ((!(arr_9 [i_1] [i_1] [i_12 - 3] [i_2 + 1])));
                arr_50 [i_1] [i_2 + 2] [i_2] [i_12] = var_7;
                arr_51 [i_1] [i_2] [i_2] [i_2 + 2] = -14;
                var_29 = 16539246404870831662;
            }
            var_30 = (((arr_36 [i_2] [i_2 - 1]) ? (arr_36 [i_2] [i_2 - 1]) : (arr_36 [i_2] [i_2 + 2])));
        }
        var_31 = arr_32 [i_1] [i_1] [i_1];
    }
    for (int i_13 = 1; i_13 < 6;i_13 += 1)
    {
        var_32 = 4096;
        var_33 = (max(var_33, ((min((arr_25 [i_13 + 2] [10] [i_13] [i_13] [i_13 + 4]), (((arr_15 [i_13] [i_13 + 3] [0] [i_13]) ? (arr_15 [i_13] [i_13 + 4] [10] [i_13 + 4]) : 975462850)))))));
    }
    var_34 = var_0;
    #pragma endscop
}
