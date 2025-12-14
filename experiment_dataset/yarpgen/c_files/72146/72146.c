/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [16] = (min((arr_1 [i_0]), (max(6174, 6169))));
        var_13 = arr_0 [i_0] [i_0];
        arr_3 [i_0] = ((max(((arr_1 [i_0]), ((-(arr_0 [i_0] [i_0])))))));
        arr_4 [22] = (arr_1 [21]);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 = (min(var_14, ((max((!17968), (min((max((arr_8 [i_1] [i_2] [i_1]), (arr_6 [11] [i_2]))), ((max((arr_1 [i_1]), (arr_0 [i_1 + 3] [1])))))))))));
                    var_15 -= (max(((!((min((arr_11 [i_3] [i_2] [i_2] [i_1]), (arr_6 [i_2] [i_2])))))), ((!(arr_11 [i_3] [1] [i_2] [i_1 - 1])))));
                    var_16 = (min(var_16, ((max(((((arr_0 [i_1] [i_2]) > ((min(-31, 6170)))))), (min((max((arr_6 [i_1] [i_2]), (arr_8 [i_1] [i_2] [i_3 + 2]))), (arr_5 [i_1]))))))));

                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_17 = (min(((!((((arr_8 [i_1] [i_3] [i_4 - 2]) & (arr_8 [i_2] [i_3 + 1] [i_3 + 1])))))), ((!((max((arr_18 [1] [i_2] [i_2]), (arr_17 [i_1] [i_3] [i_3] [i_4] [i_5]))))))));
                            var_18 = (max((((!(((arr_0 [i_3] [i_2]) && (arr_7 [i_2])))))), (arr_7 [i_1])));
                            arr_20 [i_2] [i_2] [i_3] [i_2] = arr_18 [i_1] [i_1] [i_5];
                            arr_21 [i_1] [i_3] [i_3] [i_4 - 1] [i_5] = (max((arr_1 [23]), (arr_5 [i_3])));
                        }
                        arr_22 [i_3] = (min(((((min((arr_0 [i_3] [i_4]), (arr_15 [i_1 + 2] [i_2])))) ^ ((min((arr_15 [i_2] [i_3]), (arr_17 [i_1] [i_1] [i_2] [i_3 + 3] [i_4])))))), (arr_8 [i_1] [i_3] [i_4])));
                        var_19 = min((((!((((arr_15 [i_1] [i_2]) + (arr_18 [i_4] [i_3] [i_1]))))))), (arr_14 [i_4] [i_3] [4]));
                    }
                    var_20 = arr_11 [i_1] [i_2] [i_2] [i_2];
                }
            }
        }

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_21 = (min(var_21, ((max((max((min((arr_8 [i_1] [i_6] [i_1]), (arr_5 [14]))), ((((arr_11 [3] [i_1] [3] [i_1]) >> (((arr_17 [i_1] [i_1] [i_6] [i_1] [i_6]) - 70))))))), ((((((!(arr_5 [i_1])))) << ((~(arr_10 [1] [i_1] [1])))))))))));
            var_22 = arr_17 [i_1] [i_1] [14] [i_6] [i_6];
            var_23 = (min(var_23, (((((1 && ((min(-6170, 3))))) && ((min(-1630240181811839722, 2147483647))))))));
            arr_25 [i_1] [i_6] = (!((min((arr_12 [i_1]), (min((arr_11 [i_1] [17] [17] [i_6]), (arr_7 [i_1])))))));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_24 = (((arr_18 [i_7] [15] [i_7]) && (((min(16744599322422957501, 9887104105421494023)) <= (arr_14 [i_7] [i_7] [i_7])))));
        arr_29 [i_7] = (min(((min(((-(arr_28 [i_7] [i_7]))), (((!(arr_26 [i_7] [i_7]))))))), (arr_6 [i_7] [i_7])));

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_34 [1] [i_7] = (max(((min(((((arr_15 [i_7] [i_8]) == (arr_31 [i_7])))), (max((arr_1 [i_7]), (arr_31 [i_7])))))), ((-(max((arr_10 [i_7] [i_8] [i_8]), (arr_19 [i_7] [i_7] [i_7] [5] [i_7] [i_8])))))));
            var_25 = ((+(((((max((arr_26 [i_7] [i_7]), (arr_30 [i_7])))) && (((-(arr_24 [i_7] [1] [i_8])))))))));
        }
    }
    var_26 = -var_1;
    var_27 = (max(var_27, var_3));
    var_28 *= var_3;
    var_29 = (-6170 && -17466);
    #pragma endscop
}
