/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max((((var_17 > var_10) ? var_16 : 3968503812841711014)), ((var_6 ? -3968503812841711021 : (((3968503812841711021 ? var_14 : 19928)))))));
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((-(arr_3 [i_0 - 3])));
                arr_7 [i_0] = (((((-(arr_0 [i_0 - 2])))) ? ((-3968503812841711013 ? ((((arr_3 [14]) ? var_17 : (arr_3 [i_0])))) : (var_10 * var_16))) : (((min((((var_16 != (arr_2 [i_0] [i_1])))), 4))))));
                arr_8 [i_0] [i_0] [i_1] = ((-(min(14478240260867840621, ((max(var_2, var_12)))))));
            }
        }
    }
    #pragma endscop
}
