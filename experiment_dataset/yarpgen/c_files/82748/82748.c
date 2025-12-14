/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (arr_3 [i_0]);
        var_21 = ((19648 ? (((arr_2 [i_0]) ? 33 : (arr_1 [i_0]))) : 65535));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            {
                arr_8 [13] [4] [13] = (((((((((arr_7 [i_1 + 2] [i_2 + 2]) ? (arr_1 [i_2]) : (arr_6 [13])))) ? ((((arr_4 [4] [4]) ? (arr_6 [i_2]) : -34))) : (max((arr_6 [i_1 + 1]), (arr_0 [i_2])))))) ? (max((((~(arr_5 [8])))), ((5 ? (arr_0 [i_1]) : (arr_5 [i_2]))))) : (arr_2 [19])));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_5 - 1] = ((((((max(16, (arr_2 [20])))) ? (arr_6 [i_2]) : (arr_9 [i_3] [0] [i_3] [i_3])))) ? ((((arr_10 [7] [i_3] [i_5 + 1]) ? (arr_12 [5]) : (arr_6 [i_4])))) : (((-((201326592 ? 0 : 33))))));
                                arr_16 [i_3] [i_3] = (~-5599787530470228453);
                                var_22 = ((((((arr_1 [i_1 - 3]) ? ((min((arr_4 [i_1] [i_1]), (arr_11 [i_1] [1] [1])))) : (((arr_1 [7]) | (arr_2 [i_1])))))) % -1));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((((((4850245202930647025 ? ((4093640698 ? (arr_2 [i_1]) : (arr_12 [10]))) : ((127 ? (arr_10 [i_1 + 2] [0] [0]) : 1001875860))))) ? (((~(((arr_13 [i_2 - 1] [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [0] [4] [6]) : (arr_11 [i_1] [i_1 - 1] [12])))))) : (max((((arr_7 [i_1 + 2] [i_1 + 2]) ? (arr_3 [i_1]) : (arr_1 [i_1]))), 252)))))));
                arr_17 [1] [1] [1] = 109;
                arr_18 [i_1] [i_1] = -11800;
            }
        }
    }
    var_24 = (((((-(max(var_13, var_5))))) ? (((714631910 ? 7850 : ((var_2 ? 45949 : var_11))))) : var_14));

    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_7] = (~(((!((((arr_0 [i_6 - 1]) ? 403280946379666986 : (arr_3 [i_6 - 1]))))))));
                    var_25 = ((max((arr_23 [i_6 - 1] [i_6 - 1] [i_8]), (((~(arr_19 [i_6])))))));
                    var_26 = (((((-((min(65533, 1)))))) ? (-32767 - 1) : ((-(min((arr_1 [12]), -854991917))))));
                }
            }
        }
        arr_27 [8] [i_6 + 1] = (((((~(arr_24 [i_6] [i_6] [i_6 - 1] [i_6])))) ? (!0) : (max(((-(arr_20 [i_6 + 1]))), (!49)))));
    }
    #pragma endscop
}
