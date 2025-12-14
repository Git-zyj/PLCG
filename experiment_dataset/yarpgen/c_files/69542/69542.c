/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-8592 ? 4294967295 : ((var_8 ? ((32363 ? var_12 : var_2)) : 1))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [6] &= 8847191412874681757;
        arr_4 [i_0] = (((52929921 - 12624918447174697411) ? -var_17 : 8847191412874681728));
    }
    var_21 &= var_9;
    #pragma endscop
}
