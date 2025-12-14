/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((((8249677806791639148 >= (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = (min(((min(963429028, (!2776900318)))), (arr_0 [i_0])));
        var_10 = (max(18446744073709551615, (2 >> 61)));
    }
    var_11 |= (!63765);
    #pragma endscop
}
