/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max((((-5904132659803341770 ? var_3 : var_3)), (max(1071644672, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(64, ((max(65, 1160488409)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_6 [i_0]) ? (((arr_12 [i_0] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2]) ? (arr_7 [i_0]) : var_1)) : ((min((arr_11 [9] [20] [9] [i_0] [8] [i_4]), var_3)))))) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : -73));
                                arr_16 [i_0] [i_3] [i_0] = min(((((((arr_5 [i_0]) ? 65 : var_9))) ? ((127 ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_4 + 1]) : var_5)) : 65)), (((var_7 >= (arr_3 [i_0])))));
                                var_13 = (((((((min(var_8, var_6))) ? 2753845046897923897 : (((~(arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [6] [i_4]))))))) ? (((-(min(353101198, var_7))))) : (((var_7 ? var_8 : (arr_9 [i_0 - 2] [i_0 - 2] [i_0] [i_3]))))));
                                var_14 = ((2753845046897923897 ? (((((3941866106 ? 11492863766754556482 : 7575657819000460019))) ? ((2401817645025064150 ? 5104986802252976708 : 88)) : 59)) : ((-2068298688 ? 64 : (353101202 <= 68)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [3] [i_5] [i_6] [i_6] = var_0;
                    var_15 = (var_9 / 1659342805);
                    var_16 = (min(var_16, (arr_17 [i_5] [i_6])));
                    var_17 ^= max((2147483647 - 1), ((32149 ? 1 : 1)));
                }
            }
        }
    }
    var_18 = (max(var_18, (((3941866074 ? 997222630 : 1968660971)))));
    #pragma endscop
}
