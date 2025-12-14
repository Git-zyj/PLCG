/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_7 ? 1460269546 : 237020687)))));
    var_17 = (min(((-1563004591423505578 ? 4054727030071408190 : 11871867605849127270)), ((((~var_4) ? var_7 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((-(arr_1 [i_0] [i_0]))), ((((-1918805810 + 2147483647) << ((((var_15 ? (arr_1 [i_0] [i_1]) : var_8)) - 11650465264590754883)))))));
                var_18 = ((~(arr_0 [i_0])));
                arr_5 [i_0] [i_0] [i_1] = ((!((((-2101235289 & var_8) ? var_9 : ((max(50956, 77))))))));
                arr_6 [5] = (((~16594) + (!-210308832)));
                var_19 = ((22108 || ((((arr_1 [i_0] [i_1]) & -131)))));
            }
        }
    }
    #pragma endscop
}
