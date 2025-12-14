/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (min(var_0, (min(9242, (arr_1 [5]))))) : (((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (var_2 | var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 |= -56285;

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_16 = (((((var_10 ? (arr_7 [i_0] [i_3] [5] [i_3 + 1] [i_2]) : -0))) ? (arr_6 [i_3 - 1] [i_2] [i_2] [i_3]) : ((((((arr_4 [9] [i_2]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) <= ((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? var_2 : var_6))))))));
                        arr_8 [i_0] [i_0] [i_3] [i_2] [i_2] [i_3 + 1] = ((var_8 ? (arr_1 [1]) : (((18446744073709551609 ? -var_5 : (((arr_4 [i_0] [i_0]) / var_5)))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_17 = (max(var_17, ((max(((40108 ? 785471748 : 26)), (~13727384032295895834))))));
                            var_18 = var_4;
                            var_19 = ((((max(((~(arr_1 [6]))), ((var_9 ? (arr_9 [i_0] [i_0] [9] [i_0] [i_0] [3]) : 7))))) ? (arr_5 [i_0] [i_3 - 2] [i_2] [i_2]) : (arr_10 [i_3] [i_1] [i_1] [2] [i_1] [i_1] [i_1])));
                            arr_11 [i_0] [6] [i_0] [i_0] [i_3] [i_0] [i_0] = ((arr_9 [7] [i_1] [i_2] [i_3] [i_4] [8]) ? (arr_2 [i_0]) : ((1 ? (arr_6 [i_3 + 1] [8] [i_3] [i_3 - 1]) : 2372023271)));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (((max((arr_4 [i_3 + 1] [i_3 - 1]), (arr_4 [i_3 - 2] [i_3 - 1]))) | (((((4231870040 ? 0 : 12613771939058019934)))))));
                            arr_14 [i_3] [0] [7] = (arr_4 [i_1] [2]);
                        }
                        for (int i_6 = 4; i_6 < 6;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((9244 ? (((~2058545123559874145) * (arr_0 [i_0]))) : ((((((max((arr_0 [i_2]), (arr_13 [i_6 - 3] [i_6 - 2] [i_6 + 1] [i_6] [i_6] [6])))) && var_6)))))))));
                            var_22 = 13727384032295895833;
                            var_23 -= ((((((arr_3 [1] [i_1] [i_2]) & (max(56285, var_1))))) && ((((-5171242952058106830 ? 9247 : var_10))))));
                        }
                        arr_18 [i_3] [i_1] [i_2] = ((((arr_17 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_3 - 2]) ? -var_9 : (max(var_8, (arr_7 [i_0] [i_3] [i_0] [3] [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_24 = (~(arr_17 [i_0] [i_1] [i_0] [i_7] [i_1] [i_7] [i_0]));
                        arr_21 [i_7] [i_2] = var_6;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_25 = var_10;
                    var_26 |= ((var_1 - (arr_23 [4] [0])));
                    var_27 = ((!(((min(50813, (arr_9 [1] [i_8] [7] [i_9] [i_9] [i_9]))) <= (max(56294, (arr_4 [i_0] [i_0])))))));
                }
            }
        }
        var_28 = (arr_9 [5] [i_0] [2] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        arr_30 [i_10] = min(((var_6 / (min(var_8, (arr_28 [i_10] [i_10]))))), 2826478812);
        var_29 = (min(((((0 >> (36968004 - 36968000))))), (arr_26 [i_10])));
        arr_31 [19] [i_10] = (min((((arr_29 [i_10]) ? (arr_29 [i_10]) : (arr_29 [i_10]))), ((((arr_27 [i_10]) != ((min(var_10, var_2))))))));
    }
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        var_30 = (((((arr_29 [i_11 - 1]) <= (arr_29 [i_11 - 3]))) ? var_5 : ((min(var_11, (arr_26 [i_11 + 3]))))));
        var_31 = (max((min((arr_28 [i_11 + 2] [i_11]), (arr_28 [i_11 + 2] [i_11 + 3]))), ((((((arr_28 [i_11 + 1] [2]) ? 2188035909 : var_2))) ? (min((arr_28 [i_11 + 3] [i_11 - 3]), (arr_33 [i_11] [i_11]))) : (arr_32 [i_11] [i_11])))));
        var_32 = (max(var_32, (((-(min(-24764, (arr_28 [i_11 + 2] [9]))))))));
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    {
                        var_33 = (~1);
                        var_34 = (min((min((arr_36 [i_12 - 1] [i_12] [i_11]), (arr_34 [i_11 - 2]))), ((max((!var_8), (arr_34 [i_11]))))));
                    }
                }
            }
        }
    }
    var_35 |= ((((8693961486252226904 && ((max(var_7, var_0))))) && var_2));
    #pragma endscop
}
