/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((((!(~2251799813554176))))) >= (var_3 ^ 4214593171)));
        arr_3 [17] = ((max(-18948, var_13)));
    }
    var_18 = (((max((min(5602645822116591807, var_10)), (((var_7 ? var_8 : var_16))))) > ((18033542537396702338 ? 3669137706975639357 : var_11))));
    #pragma endscop
}
