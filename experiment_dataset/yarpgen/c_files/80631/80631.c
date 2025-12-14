/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((-679785942 + 2147483647) >> (679785942 - 679785932)))), var_2));
    var_18 -= ((((((var_12 ? var_15 : var_5)) ? (~var_7) : (min(4294967295, var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 += ((~(((arr_5 [i_1 + 1] [i_1] [i_0 - 1]) ? (arr_5 [i_1 + 1] [i_1] [i_0 - 1]) : 1))));
                arr_6 [i_1] &= var_3;
                arr_7 [i_1 - 1] = (((+-1) ? (((var_13 * var_10) / (((arr_4 [i_0]) ? var_6 : -39609962)))) : (((arr_3 [i_0] [i_0] [i_0]) * (min(-39609962, 225))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            {
                var_20 = (max(var_20, -7259163818966413595));
                arr_13 [i_2] [i_2] [i_3 + 1] = (arr_9 [i_3 + 1] [i_3 + 2]);
            }
        }
    }
    #pragma endscop
}
