/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (var_18 ^ 192);
    var_20 = ((~(((~14695372677621944276) ? var_16 : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (arr_3 [i_0 - 1]);
                var_22 ^= ((((max((!var_1), (((arr_3 [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_4 [i_0])))))) ? -var_11 : ((((min(var_9, 3751371396087607340))) ? ((17642296688452494156 ? (arr_3 [i_0]) : -1)) : 2094064121))));
            }
        }
    }
    var_23 = (((var_14 >= var_18) * var_10));
    #pragma endscop
}
