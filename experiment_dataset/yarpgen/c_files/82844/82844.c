/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 252;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((((((var_15 ? (arr_0 [i_0]) : var_1)))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((48556 ? 127 : var_2)))) : ((((((arr_1 [i_0]) ? 88 : var_17))) ? ((3096361914 ? (arr_1 [i_0]) : var_7)) : ((var_2 ? 168 : var_12))))));
        var_20 *= (((((((((arr_1 [i_0]) ? var_4 : -127))) ? (arr_0 [i_0]) : ((var_16 ? var_15 : var_10))))) ? (((((3096361914 ? var_17 : var_14))))) : (((((189 ? var_9 : 4211))) ? (((arr_1 [9]) ? (arr_0 [i_0]) : 29527)) : (arr_1 [1])))));
    }
    var_21 = (min(var_21, (((((((var_6 ? var_3 : var_13))) ? ((63 ? 2480301860423847585 : var_3)) : var_11))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_8 [i_1] [10] = (((((1529350303 ? (((arr_7 [i_1]) ? 1529350303 : var_14)) : (((var_3 ? (arr_4 [5]) : (arr_7 [i_1]))))))) ? ((((((arr_4 [i_2]) ? var_8 : 98))))) : ((((((arr_5 [6] [i_2]) ? (arr_5 [i_1] [0]) : 168))) ? (((144 ? -87 : var_0))) : (((arr_2 [i_2]) ? 5530073741124665668 : (arr_7 [i_2])))))));
                arr_9 [i_2] [i_2] [i_2] = ((((((arr_2 [1]) ? 81 : ((97 ? 88 : var_8))))) ? ((168 ? ((9223372036854775807 ? var_7 : var_6)) : (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : var_2)))) : ((((((arr_5 [i_2] [i_1]) ? -4346463647659215245 : 63))) ? (((arr_7 [7]) ? var_9 : 1)) : 24238))));
                var_22 = (((((((var_1 ? var_17 : var_16))) ? -1292239951395015209 : ((var_1 ? (arr_3 [7]) : (arr_2 [i_1])))))) ? (((((((arr_7 [i_2]) ? var_5 : (arr_2 [i_1])))) ? var_17 : 2055026017))) : (((((9223372036854775807 ? 41298 : 76))) ? (arr_7 [i_2]) : 5685)));
            }
        }
    }
    var_23 = ((((((179 ? -3600134397588378333 : var_14))) ? var_10 : (((var_11 ? 1813284252 : var_1))))));
    #pragma endscop
}
