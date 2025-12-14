/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((-32767 - 1), ((32761 << (127 >= 19933)))));
    var_17 = (max((min((min(-5243053241238980324, 1941464865)), (var_12 <= var_0))), var_11));
    var_18 = (((((((((min((-32767 - 1), 32746))) + 2147483647)) << (var_0 - 2)))) ? (((min((max(var_11, var_2)), (var_9 <= var_15))))) : (((min(var_5, var_4)) - (var_10 != var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [4] |= (max((max(((var_11 ? var_13 : var_15)), var_13)), (((((min(var_9, var_4))) && (!-32038))))));
                var_19 -= ((466759416 >= (((19933 >> (121 - 115))))));
                var_20 = ((((-(var_15 / var_2))) | ((min((-91 || 14), (!var_11))))));
                arr_5 [i_0] [i_1] [i_0] = (((((!(!var_6)))) ^ (((!(~var_15))))));
            }
        }
    }
    #pragma endscop
}
