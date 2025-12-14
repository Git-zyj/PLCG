/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = arr_2 [i_0] [i_0];
        var_16 = (max(var_16, (((((((arr_1 [i_0]) ? 6873623975295363175 : (arr_1 [3])))) ? ((min(1, (arr_0 [i_0])))) : (((arr_1 [i_0]) ? ((min(var_2, 9416))) : ((((arr_0 [i_0]) > -9421))))))))));
        arr_3 [i_0] [i_0] = 3220399605919206994;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_17 |= (min((var_11 || var_3), 268427264));
            arr_10 [i_1] = var_4;
        }
        var_18 -= (arr_1 [i_1]);
        var_19 *= ((((max((min(15396657384022603542, -536870912)), ((9416 ? 0 : 3584))))) ? (min(99, var_6)) : 1));
        arr_11 [i_1] = ((((694299646825466707 ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? ((var_9 ? var_13 : (arr_4 [i_1]))) : (((((min(0, (-9223372036854775807 - 1)))) && ((min(var_10, (arr_6 [3] [i_1]))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (arr_14 [i_3]);
        arr_15 [i_3] [i_3] = (i_3 % 2 == 0) ? ((max((((arr_13 [i_3]) >> (var_7 - 34263))), (max(((-23529 * (arr_12 [i_3]))), ((min((arr_13 [i_3]), var_8)))))))) : ((max((((((arr_13 [i_3]) + 2147483647)) >> (var_7 - 34263))), (max(((-23529 * (arr_12 [i_3]))), ((min((arr_13 [i_3]), var_8))))))));
        var_21 = 3050086689686948061;
    }
    #pragma endscop
}
