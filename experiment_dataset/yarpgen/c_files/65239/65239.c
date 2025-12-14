/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 -= (-6887908391390537187 % 195);
        var_12 = (((max(((((arr_1 [i_0]) && 31918))), (arr_1 [i_0]))) >= ((max((((arr_0 [i_0 + 2]) << (70 - 66))), (-1 || var_9))))));
    }
    var_13 |= var_2;
    var_14 = var_9;
    #pragma endscop
}
