/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = -var_4;
        arr_2 [i_0] = (571865843 >> 3);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 -= ((((((min(1, var_1)) >> (((arr_5 [i_1] [i_1] [i_1]) / 6))))) && 39201));
            var_19 = (min(35, (min(4, 3))));
            var_20 = 6;
        }
        arr_7 [15] = (min(2147483637, ((~((1023 ? (arr_6 [11] [i_1]) : 7))))));
    }
    var_21 = var_1;
    #pragma endscop
}
