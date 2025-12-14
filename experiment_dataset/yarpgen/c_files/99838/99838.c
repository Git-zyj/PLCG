/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_13 = (arr_1 [15]);
        var_14 *= (max(var_8, (arr_1 [i_0 - 3])));
        var_15 ^= (((max((arr_1 [13]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_0] = ((255 ? (((25520 || (arr_5 [i_0 - 2])))) : (((!(arr_8 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_3 [i_0]) ? ((-var_0 ? (arr_6 [i_0] [i_0 - 3] [i_0] [i_1]) : (((((arr_4 [i_1] [i_2] [i_4]) || (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) : (((arr_1 [i_0 + 1]) ? (arr_2 [i_0]) : (((arr_5 [i_0]) / -6345289965369833057))))));
                                var_17 = (((((6345289965369833065 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : ((((!(arr_7 [11] [i_1] [i_0 - 1] [i_2])))))))) ? (((((max(9223372036854775807, (arr_5 [i_0])))) && (((var_9 >> (18446744073709551615 - 18446744073709551611))))))) : (((var_12 <= (min(6345289965369833057, var_11)))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 *= ((((((arr_13 [i_0 - 3] [i_0 + 1] [i_0] [i_0]) ? (arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0]) : (arr_13 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 1])))) ? ((~(arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_0]))) : (arr_13 [i_0 - 2] [i_0 - 3] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (arr_16 [i_5] [i_5]);
        arr_19 [i_5] = (((max(var_1, (arr_16 [i_5] [4])))));
        var_19 = (max((~55939), var_3));
        var_20 = ((((max((arr_17 [i_5] [1]), (arr_15 [i_5] [i_5])))) << (((!(arr_17 [i_5] [i_5]))))));
        arr_20 [12] [12] = (((arr_16 [i_5] [i_5]) << (((max((((var_5 != (arr_15 [i_5] [i_5])))), 58065)) - 58065))));
    }
    var_21 = var_4;
    #pragma endscop
}
