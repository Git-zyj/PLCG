/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_8;
    var_15 = 1;
    var_16 |= ((var_13 ? var_4 : var_5));
    var_17 = (max(((var_9 & (~var_6))), 255));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = -var_10;
        arr_2 [i_0] = ((+((var_9 ? (((max((arr_0 [i_0]), var_7)))) : 10273784956510144962))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = ((((((min((arr_0 [i_1]), 0))) ? ((((var_6 || (arr_6 [i_1]))))) : 8238412328811305615)) > (~var_6)));
        var_20 = 7868643035908298362;
        arr_7 [i_1] [i_1] = var_2;
        var_21 = (max(var_21, (((16 >> (101 - 79))))));
    }
    #pragma endscop
}
