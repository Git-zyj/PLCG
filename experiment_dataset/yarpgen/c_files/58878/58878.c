/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = 255;
                    arr_8 [i_0] [i_1] [i_2] = (max((((((max(33952, (arr_6 [1] [i_1] [i_1])))) && (((215 * (arr_2 [i_0 + 2]))))))), ((((min((arr_7 [i_0]), 59782))) ? ((~(arr_2 [i_0]))) : ((~(arr_0 [i_0])))))));
                    var_15 = (max(((((((~(arr_3 [i_0])))) || (arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2])))), (max((arr_5 [i_0 + 2] [i_0 + 2] [3]), 1))));
                    var_16 = (((min(((~(arr_1 [i_0]))), (arr_7 [1]))) <= (((~((~(arr_0 [i_1]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] = (((((arr_13 [i_3 - 1] [i_4]) || (((~(arr_12 [i_3] [i_4])))))) ? (((max((arr_13 [i_3] [i_3]), (arr_11 [i_3] [i_4]))) * (arr_11 [i_3] [i_4]))) : -8718027800097244500));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_3] [i_3] = (max((arr_16 [i_3] [i_4]), ((~(min((arr_15 [i_3] [i_3] [i_3]), 1))))));
                    arr_18 [i_3] = (max((min((~63430), (min((arr_16 [i_4] [i_5]), 0)))), (((~(~1))))));
                    arr_19 [i_3 + 1] [i_3] [i_3] = (max((((-(((arr_13 [i_3] [3]) ? (arr_12 [i_3] [i_3]) : (arr_16 [i_3] [i_5])))))), ((~(max((arr_13 [i_3 - 2] [i_5]), 8))))));
                    var_17 += (arr_11 [20] [i_5]);
                    var_18 = (max(((~(max((arr_11 [i_3] [0]), (arr_12 [i_3 - 3] [i_5]))))), (max(((~(-2147483647 - 1))), (arr_11 [i_3] [i_3 - 3])))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_19 ^= ((~(((((arr_21 [i_3] [i_7]) | (arr_10 [i_7]))) + (-9223372036854775807 - 1)))));
                                var_20 = (max(var_20, (min((min((arr_15 [2] [i_4] [i_4]), (~65507))), ((min(((-1011640713 ? (arr_21 [i_7] [i_7]) : 4294967289)), (arr_12 [i_3 - 3] [7]))))))));
                            }
                        }
                    }
                }
                var_21 = 71;
            }
        }
    }
    var_22 ^= (max(var_12, (max((~1), (7017826463780116332 & 55)))));
    #pragma endscop
}
