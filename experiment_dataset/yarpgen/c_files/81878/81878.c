/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(37823, (27722 + var_1)))) ? (!var_2) : ((((((37835 ? var_8 : var_8)) + 2147483647)) << ((((6167354172952272838 ? 37821 : 4294967295)) - 37821)))));
    var_13 &= var_3;
    var_14 = ((var_9 ? (((var_10 ? var_9 : var_10))) : (min((max(4897416205489198489, var_2)), (!27701)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [2] [5] = ((!((((arr_3 [i_1 - 1] [i_1 + 1] [i_0]) + (((max(37842, 27727)))))))));
            var_15 = (((((var_2 ? (arr_2 [i_0]) : ((((arr_6 [i_0] [i_0]) ? var_6 : (arr_1 [i_0]))))))) ? var_6 : (arr_5 [i_0] [i_1])));
            var_16 = (min(((27701 ? 6167354172952272838 : 1)), ((~(((arr_6 [i_0] [i_1]) ? (arr_5 [i_0] [19]) : (arr_3 [15] [9] [i_0])))))));
            var_17 ^= ((~((((max((arr_6 [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))) == (((arr_1 [14]) ? 37854 : (arr_6 [i_0] [i_1]))))))));
            arr_8 [i_0] [i_0] [i_1] = (((((((!(arr_3 [i_1] [i_1 + 1] [i_0]))) ? (((arr_5 [i_0] [i_0]) * (arr_1 [i_1]))) : 37852))) ? 807965416504438944 : 2675449101));
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_18 = (((arr_5 [i_2 - 1] [i_2]) ? (arr_4 [i_2 - 1] [i_2 + 1] [i_0]) : var_7));
            var_19 = (max(var_19, ((((arr_6 [i_0] [i_2]) ? ((max((arr_5 [i_2] [12]), var_4))) : var_4)))));
            var_20 = (arr_3 [i_0] [18] [i_2]);
        }
        arr_11 [i_0] = (arr_1 [24]);
        var_21 = (max(2675449108, 65535));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_22 = ((2675449101 ? var_2 : (arr_0 [i_3 + 1] [i_3 - 1])));
        arr_14 [i_3] [5] = (arr_3 [i_3] [i_3] [i_3]);
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_23 = (max((max(0, (min(-1451079136, 1)))), 0));
        var_24 = arr_10 [i_4 + 2] [i_4];
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = ((~((~(arr_0 [13] [8])))));
            arr_22 [i_6] [i_6] [i_6] = (~(((arr_19 [i_6] [i_5]) ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [16]))));

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_27 [i_5] [i_6] [i_7] [i_7] = (((((((255 ? (arr_26 [i_5] [i_5] [i_6] [i_7]) : var_9))) || ((max(16777215, var_1))))) && (((1 ? (arr_25 [i_5] [i_6] [i_7]) : 0)))));
                arr_28 [i_5] [i_6] [i_6] [i_7] &= (!var_5);
                var_26 = (((((((((arr_10 [i_5] [i_5]) ? var_4 : var_9))) ? (arr_17 [i_7]) : 1619518188))) ? var_11 : (max(((246 ? -1451079135 : 37854)), (((arr_10 [i_5] [i_5]) ? var_6 : 1))))));
                var_27 = ((-((((((arr_4 [i_5] [1] [i_7]) << var_9))) ? (arr_21 [i_5] [i_7]) : (arr_0 [i_6] [11])))));
            }
            var_28 ^= ((17638778657205112668 ? var_8 : 807965416504438947));
        }
        var_29 = (arr_3 [20] [20] [i_5]);
        arr_29 [i_5] = (((((min(16777215, -1451079136)) + (((var_2 ? var_7 : 0)))))) ? (arr_25 [i_5] [i_5] [i_5]) : (arr_24 [i_5] [12] [i_5] [11]));
    }
    #pragma endscop
}
