/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (max(((max((arr_4 [i_1 - 1]), (arr_5 [i_0] [i_0])))), ((-9223372036854775800 | (arr_1 [i_0 - 1] [i_1 - 1])))));
                var_19 = ((((min(var_1, var_1))) | ((((arr_0 [i_0 + 2] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((var_7 ^ (arr_0 [i_0] [i_0]))))))));
                arr_6 [i_0] = ((((((255 * var_7) ? ((var_1 ^ (arr_2 [i_1]))) : (((min(1, 78))))))) ? (min((((arr_2 [i_0 - 2]) | 254)), (((var_11 ? var_9 : (arr_5 [i_0 - 4] [i_1 - 1])))))) : (((min(-9090, 9109))))));
            }
        }
    }
    var_20 = ((((max((((78 ? var_5 : var_7))), (~var_0)))) ? ((((((1760685365769022376 ? var_17 : var_6))) ? ((var_5 ? var_11 : var_7)) : ((min(9089, var_14)))))) : (max(((min(var_14, var_1))), (min(-1, var_2))))));
    var_21 = (min(var_21, var_8));

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_22 = ((!(((var_6 ? (max(4183500791180206432, var_5)) : ((((arr_4 [i_2]) ? 118 : var_12))))))));
        arr_9 [i_2] [i_2] = ((~((((max(1, 144115153716117504))) ? ((var_13 ? (arr_1 [i_2] [i_2]) : var_4)) : (((arr_1 [i_2 + 1] [i_2]) * 0))))));
        var_23 = (arr_8 [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_24 = (max((((((max(var_6, var_12))) ? var_7 : (arr_1 [i_3] [i_3])))), 16686058707940529240));
        var_25 = (((((2147483647 << (11 - 11)))) ? var_6 : (((min(3581862622754156869, (arr_3 [i_3 + 1])))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 = ((((max(var_0, var_10))) ? (((((((arr_0 [i_3] [i_4]) + -115))) > (max((arr_2 [i_3]), var_13))))) : ((((min(var_6, (arr_1 [i_3] [i_4])))) ? (var_9 >= var_6) : var_13))));
            var_27 = ((((min((((arr_4 [i_3]) + (arr_2 [i_3]))), ((max(var_16, var_4)))))) + (((((var_13 ? var_3 : var_6))) ? (min((arr_1 [i_3] [i_3]), (arr_11 [i_4]))) : ((9089 + (arr_10 [i_3])))))));
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_28 = ((~((((arr_0 [i_5] [i_5]) >= ((4050534571543486253 ? (arr_0 [i_5] [i_5]) : var_12)))))));
        var_29 = (arr_1 [i_5] [i_5]);
        var_30 |= ((((min(((((arr_3 [i_5]) ? var_15 : -198991924))), ((var_12 ? var_4 : var_11))))) ? var_14 : (max((max(var_17, var_10)), (((arr_5 [i_5] [i_5]) ? var_17 : (arr_1 [i_5] [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_31 = (((((~((var_11 % (arr_19 [i_6])))))) ? (var_16 - var_1) : (arr_20 [i_6] [i_6])));
        arr_22 [i_6] = ((((-(((arr_15 [i_6] [i_6]) ? (arr_8 [i_6] [i_6]) : (arr_14 [i_6])))))) ? (((2147483641 ? var_2 : var_3))) : (((((((arr_15 [i_6] [i_6]) ? var_2 : (arr_1 [i_6] [i_6])))) ? (arr_15 [i_6] [i_6]) : (min((arr_7 [i_6]), (arr_12 [i_6] [i_6])))))));
        var_32 = ((((((((131071 ? 1 : (-2147483647 - 1)))) ? (min((arr_10 [i_6]), 4001031491480235405)) : (((var_17 ? var_2 : 2147483647)))))) ? (((arr_12 [i_6] [i_6]) ? (min(254, 18446744073709551615)) : (var_17 - var_2))) : (arr_12 [i_6] [i_6])));
    }
    var_33 = (max(var_33, ((min(((((((var_15 ? var_5 : 1459940623))) ? (!var_5) : ((185 ? -794431989 : -1))))), (((((var_9 ? var_13 : 177))) ? (var_9 / var_6) : (var_1 ^ var_2))))))));
    #pragma endscop
}
