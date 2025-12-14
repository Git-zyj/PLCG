/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((!(((~(-2147483647 - 1))))));
        arr_2 [i_0] = (var_8 * -1);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (min(var_14, 40500));
        var_15 = ((946154473 ? ((((!(~0))))) : (((~var_10) - (-946154474 < 946154473)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 ^= ((-16320 ? (255 / -3001116631803740831) : (0 * 5077892521171086230)));
        var_17 += ((!(((4294967295 ? -91 : 13368851552538465387)))));
    }
    var_18 = ((-2147483647 - 1) ? var_9 : (((!(((13368851552538465377 ? 3169618239 : 41226)))))));
    #pragma endscop
}
