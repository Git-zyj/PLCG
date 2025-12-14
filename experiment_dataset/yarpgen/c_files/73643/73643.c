/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1076721742;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 ^= (((2147483647 != var_18) ? (((arr_2 [i_0] [i_0]) ? 32762 : -4294)) : ((255 ? (arr_0 [i_0] [i_0]) : 4299))));
        arr_3 [i_0] = (-4940464418140631928 / 548063910);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = (min(var_22, ((((arr_4 [1] [i_1]) <= (arr_5 [i_1]))))));
        arr_6 [i_1] = ((((var_2 ? 32767 : var_7)) % ((((arr_4 [i_1] [i_1]) ? 1027726245 : var_2)))));
        arr_7 [i_1] = (arr_4 [i_1] [i_1]);
    }
    var_23 *= var_13;
    #pragma endscop
}
