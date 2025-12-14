/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((var_5 ? var_5 : 14361380266314115216))) ? (var_8 / var_4) : var_10)), ((min(var_10, 1)))));
    var_12 = (min(-766737031, (min((-2147483647 - 1), var_6))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, ((max(0, var_5)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 = (~(max(((((arr_5 [i_0] [i_0] [i_0] [i_0]) / (arr_1 [i_1])))), (max(31, 15714203618446942668)))));
                var_15 = ((((((arr_3 [i_1] [i_2]) < (arr_5 [i_0] [12] [i_2] [i_2])))) ? ((4085363807395436406 ? 65535 : 34995)) : ((((max(var_6, var_7)) == var_7)))));
                var_16 ^= (max((((!((((arr_2 [i_0] [i_1] [9]) ? var_10 : (arr_1 [i_0]))))))), (min((((!(arr_2 [i_0] [i_1] [i_0])))), ((~(arr_3 [i_1] [2])))))));
            }
            arr_7 [10] [0] = (!8417861522388777036);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_17 *= var_5;
                arr_11 [i_0] [i_1] [i_3] = (((((((27958 ? (arr_0 [i_0]) : 1))) ? var_8 : (901700437 * -4))) * (~var_3)));
                arr_12 [i_0] [i_0] [i_1] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_1));
                var_18 += (min(((max(20842, 53368))), (arr_3 [i_3] [i_1])));
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_4] = (((min(4294967295, ((var_3 ? (arr_10 [i_0] [i_0] [1]) : -8417861522388777037)))) > -65534));
            arr_18 [i_4] = ((((min((!18446744073709551615), (arr_3 [i_0] [i_0])))) ? 14361380266314115216 : var_4));
            var_19 -= ((max((min(12662911459532986468, 37577)), 37577)));
            arr_19 [i_4] [i_4] = ((~(min(11812, 4342233357648230934))));
            arr_20 [i_4] = (max(((min((max((arr_5 [i_0] [7] [i_4] [i_4]), (arr_8 [i_0] [i_0] [i_0]))), (arr_15 [i_4])))), (min((max((arr_6 [i_0] [i_0] [i_0]), (arr_10 [8] [i_4] [8]))), (((!(arr_10 [i_4] [i_4] [i_4]))))))));
        }
        var_20 += ((~(max(9, 17203502157305588925))));
        var_21 = (min(var_21, ((((((max(27958, 34995))) || (((~(arr_2 [16] [i_0] [i_0])))))) ? ((((max(640264134, 5))) ? -21270 : (min(15127177790935570217, (arr_16 [i_0]))))) : ((max(((-(arr_5 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_6 [i_0] [18] [i_0]))))))))));
        arr_21 [i_0] = var_8;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 ^= (max((!1), (max(1, 65527))));
        var_23 = (min(var_23, ((((((((12904 ? 30373 : 1))) ? ((min(-17, 1))) : 1)) & 29)))));
    }
    var_24 = max(((min(var_0, var_7))), (max(2, (~0))));
    #pragma endscop
}
