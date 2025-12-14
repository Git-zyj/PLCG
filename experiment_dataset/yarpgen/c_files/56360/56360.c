/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (var_5 != var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 ^= (((var_2 << ((((-2690176145299119765 ? -26 : (arr_6 [i_2] [i_1] [2] [i_0])) + 53))))));
                    var_14 *= (((min(var_3, var_10)) / -var_4));
                }
            }
        }
    }
    var_15 = (min(var_2, var_10));
    #pragma endscop
}
