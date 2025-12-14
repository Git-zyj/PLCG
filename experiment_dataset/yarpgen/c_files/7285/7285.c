/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 += ((((((!(arr_2 [i_1]))))) >> (((min(var_16, (arr_4 [i_1] [i_1]))) - 4263251017))));
                arr_5 [i_0] = var_3;
                var_20 += ((((((7 ? -6298608556723357085 : var_2))) ? (((-23934 + 2147483647) >> 7)) : (arr_1 [i_1]))));
            }
        }
    }
    var_21 = (((((8 < (~8327013714499063128)))) != ((~((268435455 ? var_3 : 540531212))))));
    var_22 -= var_15;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_23 = ((arr_7 [i_2]) ? 597 : -11);
                var_24 ^= ((((!(((-(arr_9 [i_2] [i_3] [i_2])))))) ? var_11 : var_8));
            }
        }
    }
    var_25 += var_7;
    #pragma endscop
}
