/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_4, 32755));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_18 ^= (max((((((-(arr_2 [11] [i_0 - 2])))) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (min((!65526), (max((arr_1 [i_0]), (arr_2 [i_0 + 1] [i_0])))))));
        var_19 = max(((((arr_2 [i_0 + 1] [i_0 - 2]) < ((12 ? 248 : 20))))), (max((((arr_0 [i_0]) | 1152640029630136320)), (((arr_1 [i_0 + 1]) ? -1 : (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (arr_3 [i_1]);
        var_21 = (max((arr_0 [1]), (((12 > ((4294967278 ? (arr_3 [i_1]) : (arr_3 [1]))))))));
        arr_5 [i_1] = ((((~(arr_2 [i_1] [i_1])))) ? ((((arr_0 [i_1]) >= (arr_0 [20])))) : -106);
    }
    var_22 ^= (((~-var_0) ? (((-(20 == -1)))) : (((!20) ? (min(29551, 5094513667058443075)) : (65521 ^ -118)))));
    var_23 |= var_7;
    #pragma endscop
}
