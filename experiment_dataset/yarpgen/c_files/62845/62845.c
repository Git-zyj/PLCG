/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((var_10 << (var_6 - 44014))) >> (((min(var_7, var_7)) + 635732884)))), var_13));
    var_15 &= max(var_12, (~var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [13])))) ? 2147483625 : (((!(!498734815509161084))))));
        arr_4 [i_0] &= (min(((((1846705286 ? var_11 : 2147483625)))), (((!var_5) ^ ((2147483625 ? (arr_1 [i_0] [i_0]) : var_1))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_16 = ((!(var_6 <= var_8)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((!(!1281567639)));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_17 = ((((max((arr_16 [i_2] [i_3] [i_2 - 1] [i_3] [i_5] [i_5 + 2] [i_5 + 3]), (arr_16 [i_2] [i_1] [i_2 - 1] [i_2] [i_5] [i_5 + 1] [14])))) == (min((arr_20 [i_1] [i_1] [i_2 + 1] [14] [i_2] [i_5 - 1] [i_2]), (arr_12 [i_0] [i_2] [i_2 + 1] [i_1] [i_5 + 1])))));
                            var_18 = (min(var_18, (((((-(arr_10 [i_5] [i_3] [i_2] [i_5]))) <= (((-2147483625 > ((var_12 ? -64 : 15))))))))));
                            var_19 = (min(var_19, (~-1281567633)));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_17 [i_2]);
                            arr_26 [i_2] = (min((((46591 ? 30935 : (((arr_1 [i_6] [i_6]) ? (arr_13 [i_2] [i_1] [i_3] [i_6]) : var_9))))), (max(14884947990642747927, 2147483625))));
                        }
                        var_20 = ((((min(((-(arr_14 [i_2]))), ((-2147483647 ? 53 : 1998433612))))) ? var_11 : var_13));
                        arr_27 [i_0] [i_1] [i_2] [i_2] [i_2 + 1] = 18945;
                        var_21 = ((6552 ? 17 : -156564217));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_32 [i_0] [i_0] [i_0] [i_0] = (arr_29 [i_1]);
                arr_33 [i_0] [i_0] [i_7] = (((max(var_8, var_11))) ? (((!(arr_12 [i_0] [i_7] [i_7] [i_7] [i_7])))) : (((((((arr_16 [i_7] [i_1] [2] [i_1] [i_7] [0] [i_7]) || (arr_12 [8] [i_7] [i_1] [i_7] [i_0])))) == (arr_6 [7] [i_7])))));
                var_22 = (min(((var_6 ? (arr_9 [i_7]) : (arr_9 [i_7]))), (max((arr_9 [i_7]), (arr_9 [i_7])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_23 = var_6;
                arr_36 [i_0] [i_1] [i_8] [0] = ((1623187485 <= (((arr_21 [14]) ? 780558598 : (arr_11 [i_0] [14] [i_8] [14] [8] [8])))));
                var_24 = 11931457448615369600;
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_25 = ((arr_39 [i_9 - 1]) - (arr_39 [i_9]));
        var_26 = (max(var_26, var_5));
    }
    var_27 = var_6;
    #pragma endscop
}
