/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((43898587 ? 4133032042 : 108))) ^ (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (1 ^ var_6);
        arr_4 [i_0] = (arr_1 [i_0 + 1]);
    }
    var_15 = 4120008082562798661;
    #pragma endscop
}
