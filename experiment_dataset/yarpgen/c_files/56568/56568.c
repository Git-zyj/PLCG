/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((max(((min(var_12, var_7))), (max(var_3, var_15)))) % (min((30573 % var_11), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((min(((max((arr_4 [i_0] [i_0]), -18079))), ((var_14 ? (arr_5 [i_0] [i_1]) : (arr_0 [i_0]))))), ((max((min(1087, 28672)), (arr_5 [i_0] [i_0]))))));
                var_17 ^= (((((arr_0 [i_0]) % ((min((arr_5 [i_1] [i_1]), (arr_1 [i_1] [i_0])))))) % ((min((arr_0 [i_1 + 3]), (min((arr_0 [i_0]), (arr_2 [i_0]))))))));
                var_18 = (max(var_18, (max(var_2, (arr_1 [i_0] [i_1 - 2])))));
            }
        }
    }
    #pragma endscop
}
