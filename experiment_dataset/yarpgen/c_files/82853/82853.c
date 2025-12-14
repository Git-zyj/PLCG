/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((-(34982 - 4294967290)));
        var_20 = (min(var_20, (((((((((var_17 ? var_15 : var_11)) < (((-(arr_1 [i_0])))))))) + 4116409045506819551)))));
        var_21 = ((((((1 - (arr_1 [i_0]))) + 201411894)) + var_8));
    }
    var_22 = ((((((min(10140, 30584))) || ((min(6, var_10))))) || ((!(~2147483647)))));
    #pragma endscop
}
