/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= (((((((39870 << (133169152 - 133169147))) / (1 + var_6)))) ? (((~(min(31599, -3898540107194915148))))) : (((arr_1 [i_0]) ? 50814 : (min(18446744073709551615, 1219857791))))));
        arr_2 [i_0] [2] = (max((var_13 * 1219857777), ((((arr_0 [i_0]) - (arr_0 [i_0]))))));
        var_19 = (-1219857791 % (max(7251, (((arr_0 [i_0]) ? var_7 : var_13)))));
        var_20 = (min(14379, (arr_1 [i_0])));
    }
    var_21 = (min(var_21, (((var_16 ? (((((max(var_15, var_9))) < ((var_7 ? 65086 : -1219857791))))) : 1)))));
    var_22 ^= (((((max(var_3, 7680) <= var_5)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            {
                var_23 = ((-(((((~(arr_8 [i_1])))) ? -1219857814 : (-3814325483589871427 >= -1219857794)))));
                var_24 += 0;
            }
        }
    }
    #pragma endscop
}
