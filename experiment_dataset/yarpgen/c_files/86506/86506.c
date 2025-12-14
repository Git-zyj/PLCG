/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 ^= ((((arr_4 [i_0]) ? 127 : (arr_4 [i_0]))));
                arr_6 [i_1] |= ((((((15 && 220) - (arr_2 [i_0] [i_0])))) || var_1));
                var_15 = (((((!((min(127, (arr_1 [i_0]))))))) >= 20));
            }
        }
    }
    var_16 = (max(((var_6 / ((var_5 ? 7032604650060099532 : var_1)))), (((1 >= (min(var_8, 1943948335)))))));
    var_17 = (max(var_17, ((max(var_12, -67)))));
    #pragma endscop
}
