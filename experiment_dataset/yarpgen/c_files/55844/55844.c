/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((var_6 ? (max(var_19, var_11)) : (~var_19))), var_7);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 ^= (((arr_1 [i_0]) ? ((-(arr_1 [i_0 + 2]))) : (((arr_0 [i_0 + 3]) + (arr_0 [i_0 - 1])))));
        arr_3 [i_0 + 1] [i_0 + 3] = ((0 == ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((max((arr_1 [i_0]), (arr_0 [i_0 - 1]))))) : (((arr_1 [11]) ? 14394906298898263586 : 3181554193284023994))))));
        var_22 = (((!(arr_1 [i_0]))) ? (((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))) : (max(((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_14))), ((65535 ? (arr_1 [i_0 + 3]) : 70367670435840)))));
    }
    #pragma endscop
}
