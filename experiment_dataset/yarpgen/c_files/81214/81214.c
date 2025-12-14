/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [2] [i_0] = (min((max(var_4, 1)), (1 + var_11)));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((((min((var_5 - 1), (arr_1 [i_0])))) ? var_14 : (((~1779888533625010576) ? (arr_0 [i_0]) : ((13682691944191037540 ? 1 : 1))))));
        arr_6 [i_0] = (max(65532, -1));
    }
    var_16 = var_15;
    var_17 = var_13;
    #pragma endscop
}
