/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((-(((!(arr_1 [i_0])))))))));
                var_13 ^= (min(((((((!(arr_1 [i_0])))) >> (((max(var_9, (arr_5 [i_0] [i_1] [i_1]))) - 75813696))))), (min((min(var_2, (arr_0 [i_0] [i_1]))), (arr_4 [10])))));
            }
        }
    }
    var_14 = var_8;
    var_15 += ((((var_8 ? (~var_1) : (~18446744073709551593))) | (((max(var_1, 5318541883708017170))))));
    #pragma endscop
}
