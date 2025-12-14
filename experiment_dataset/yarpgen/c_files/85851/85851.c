/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((max((var_0 + var_0), ((min(var_4, 32236))))) + (-var_3 * var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = 52;
                var_12 = (max(14143758501813497320, (((~(arr_7 [i_0 + 1]))))));
                var_13 = (min(var_13, (min(1, (((min(var_2, (arr_4 [i_0] [20] [i_1]))) - 96))))));
                arr_8 [i_1] |= (+-153);
            }
        }
    }
    #pragma endscop
}
