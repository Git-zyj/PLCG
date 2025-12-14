/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1 - 241);
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = 1668921815;
        arr_2 [i_0] = (max(((((107616227 <= (arr_0 [i_0] [i_0]))) ? (((1 ? 1 : 1))) : (((arr_1 [i_0]) ? var_6 : (arr_1 [i_0]))))), ((((((var_8 ? 13932 : (arr_0 [10] [10])))) && ((max(1, 224))))))));
        var_16 = (((((((min(-8743, 16585109553736100620))) ? (arr_1 [i_0]) : 31))) || (arr_0 [i_0] [i_0])));
        var_17 += ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : 16389948348639428848)))));
    }
    #pragma endscop
}
