/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] = ((((((0 ? var_1 : 17))) != (1 + 14614673896883823294))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = 27317;
                    }
                }
            }
        }
        var_18 = -27319;
        var_19 = (max(var_19, var_6));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (max(1631, 1));
        var_20 = 12634910854773986068;
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = var_9;
        var_21 = (((((18446744073709551592 ? ((((arr_4 [i_5] [5] [i_5 + 2]) < -27327))) : (~0)))) ? 32965 : 48826));
        arr_18 [i_5] = (((((((arr_1 [1] [1]) && (var_10 == 23))))) % ((var_0 * (max(var_5, var_7))))));
        var_22 = (((((~(max(16709, var_0))))) ? 27319 : (((max(var_11, var_6)) | ((var_14 ? var_11 : var_4))))));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_23 [i_6] [i_7] [i_7] = ((var_13 & (arr_12 [i_6])));
            arr_24 [i_7] = (~var_15);
            arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 2] = (((arr_20 [i_6] [i_6 + 4]) >= (arr_20 [i_6] [i_6 + 2])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_8] [i_9] [i_8] = (var_3 ? (arr_19 [12]) : 31);
                        var_23 = ((var_13 >= (((16677 ? 6107572220555457736 : var_9)))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_24 = ((-12 ? var_16 : (((var_1 | var_10) ? (((arr_28 [i_6] [i_6] [i_10] [i_10]) & (arr_28 [i_10] [i_10] [i_10] [i_10]))) : (((-4 ? 2939246766 : -27311)))))));
            var_25 = (max(var_25, ((max((arr_2 [i_6 + 1] [i_6 - 2]), ((((max((arr_33 [i_6] [9]), var_4))) ? var_6 : ((0 ? 4294967292 : 0)))))))));
            arr_35 [i_6] [i_6] [i_6] &= var_8;
            var_26 = ((((2174295915 ? 9223372036854775804 : 790213418))) ? (((arr_30 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6] [i_6]) ? 10 : (arr_30 [0] [i_6 + 1] [i_10] [0] [8] [8]))) : (((((arr_30 [i_6] [i_6 + 4] [i_10] [i_6] [i_6 + 4] [i_10]) > (arr_30 [i_10] [i_6 + 3] [i_10] [i_10] [i_6] [i_6 + 3]))))));
        }
        var_27 = (min(var_27, ((max(((max((arr_5 [i_6] [i_6] [i_6 - 1]), var_15))), (((((-9223372036854775807 - 1) >= var_13)) ? (((var_10 ? 0 : var_13))) : (min(var_10, var_4)))))))));
    }
    var_28 = max(11972205599309442357, var_15);
    #pragma endscop
}
