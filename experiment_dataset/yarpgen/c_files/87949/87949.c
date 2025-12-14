/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0] [i_0])));
        var_12 = ((-1 / (min((arr_2 [i_0] [i_0]), ((var_3 ? 2993154382320618795 : var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((min((arr_3 [i_0]), (var_2 * 0))) - 33)))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? 15453589691388932821 : (((((2993154382320618789 ? -1933318795 : 15453589691388932820))) ? var_6 : -var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (max((-2993154382320618779 > var_10), var_6));
                                var_15 = ((!(arr_7 [i_1])));
                                arr_14 [i_1] = (((((1 % 2993154382320618779) ? (min((arr_7 [i_1]), var_10)) : (1 <= 7143460397986281801))) - (arr_5 [i_0] [i_1] [i_3])));
                                arr_15 [i_2] [i_1] [i_0] [i_4] [i_1] [1] [i_1] = ((((min((arr_4 [i_4] [i_3] [i_0 - 1]), (arr_4 [i_1] [i_1] [i_1])))) ? (((var_7 - var_3) ^ (arr_7 [i_1]))) : ((((((arr_1 [i_3] [i_3]) ? (arr_1 [i_4] [i_4]) : (arr_0 [i_1] [i_3]))) << (((arr_5 [i_0] [i_2] [i_0]) - 6462016739208577285)))))));
                            }
                        }
                    }
                }
            }
        }
        var_16 = (max(1642592577, -1933318795));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_18 [i_5] = ((~(arr_1 [i_5 + 1] [i_5 + 1])));
        var_17 = (min(var_17, ((((arr_0 [9] [i_5]) < (((arr_6 [i_5] [i_5] [i_5 + 1] [10]) << (15453589691388932820 - 15453589691388932770))))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_18 = (max(var_18, (((var_2 + (arr_9 [i_5] [i_8] [i_7 - 4] [i_8] [4]))))));
                        arr_27 [i_8] [i_5] [i_7] [i_5] [i_5] = (1 / -5671278579371028190);
                    }
                }
            }
        }
    }
    var_19 += var_3;
    var_20 -= ((var_4 >> (((((max(1078624590344096342, var_7)) >> (var_4 - 204))) - 7710))));
    #pragma endscop
}
