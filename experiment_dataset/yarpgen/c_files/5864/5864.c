/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((-(min((min(var_1, var_3)), ((min(var_2, var_3)))))));
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (min((min(3995696728, -23846)), ((~(arr_0 [i_0])))));
        arr_5 [i_0] = ((-((((((((arr_3 [8]) > (arr_0 [i_0]))))) >= 2540984805207432798)))));
    }
    #pragma endscop
}
