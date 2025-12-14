/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((var_12 > 18446744073709551604), ((var_8 ? var_8 : var_5))))) ? (((((var_1 >> (var_2 + 671833215)))) ? (min(var_6, 0)) : (var_0 >= var_3))) : ((((var_3 > 127) * (var_9 * var_10)))));
    var_14 = ((((min((((1 ? 1 : var_11))), (max(var_6, var_11))))) ? ((max((var_9 | -31482), (var_10 >= -115)))) : (min((0 <= var_0), (max(291202591745936694, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((20709 && 18446744073709551598), (((((-127 - 1) ? 7686940024131222607 : (arr_1 [i_0]))) + ((var_6 >> (6144 - 6134)))))));
                var_15 = (max(var_15, (((((((((var_10 >> (((arr_2 [i_0]) - 776621494797166513))))) ? ((max(1, 3))) : (((arr_4 [i_0] [i_1 - 3] [i_1]) ? (arr_0 [i_1] [i_0]) : var_5))))) ? (max((min(var_4, (arr_2 [i_1 - 1]))), ((min(1, (arr_4 [i_1] [i_0] [i_0])))))) : (min((var_12 >= 256), ((23 ? var_9 : (arr_1 [i_1 - 3]))))))))));
                var_16 = (min(1, -49));
                var_17 = (min(var_17, (((((((((5 ? 94 : 11567))) ? (14879 * 0) : (max(var_4, (arr_4 [15] [i_0] [i_1])))))) | (max(8589934336, -31495)))))));
            }
        }
    }
    #pragma endscop
}
