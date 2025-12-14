/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? 2582417081024298640 : 0));
    var_17 = (min((var_12 <= var_6), var_3));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((var_14 * (((arr_1 [i_0] [i_0]) ? var_1 : (max(var_4, 1))))));
        arr_3 [i_0] = ((!((((arr_0 [i_0 - 1] [i_0]) / 23022)))));
    }
    var_18 = 11037;
    var_19 *= var_3;
    #pragma endscop
}
