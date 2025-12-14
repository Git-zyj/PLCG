/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (((((-8633 ? 21520 : 4294967295))) ? (((arr_2 [i_1 - 3] [i_1 + 1]) ? (65520 * -15664) : ((min(-8633, (arr_0 [i_0] [i_1])))))) : 65520));
                var_19 = (((arr_1 [i_1 - 1]) ? (max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 1]))) : (((var_12 >> (((arr_1 [i_1 + 2]) - 14515038635707244112)))))));
                var_20 = (min(var_20, (((16 ? -8633 : 65520)))));
            }
        }
    }
    #pragma endscop
}
