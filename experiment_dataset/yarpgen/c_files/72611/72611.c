/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0] = var_6;
                var_19 = ((((~(max(1466048591, var_4)))) != (((min((var_8 > var_4), var_4))))));
                var_20 = (max(var_20, ((((((((var_1 | (arr_1 [5])))) * (min(1466048591, (arr_0 [4])))))) || 1))));
                var_21 ^= (((var_15 ? var_12 : (arr_1 [i_0]))));
            }
        }
    }
    var_22 = (max(var_22, (((var_7 * var_0) > (((1 == 1466048578) ? (min(var_10, 1466048587)) : (((max(var_17, 1))))))))));
    var_23 = ((((max(1, var_10)) != var_7)) ? 2448029096 : 255);
    #pragma endscop
}
