/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 -= 3724760705293043082;
        var_14 *= 3724760705293043081;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = (-1 & -9452);
        var_16 = 18486;
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_17 = (((3997324608 <= (max((-9223372036854775807 - 1), 11203)))));
        arr_9 [i_2] = ((~(var_5 != var_4)));
    }
    var_18 -= (3724760705293043081 / -var_6);
    #pragma endscop
}
