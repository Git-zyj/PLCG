/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(var_9, (((~(arr_3 [i_0]))))));
        arr_5 [i_0] [i_0] = arr_2 [i_0];
        arr_6 [i_0] [i_0] = (57597 ? -10926 : 9569743292408541275);
    }
    #pragma endscop
}
