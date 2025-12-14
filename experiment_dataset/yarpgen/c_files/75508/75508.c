/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((arr_4 [i_0] [i_0]) - ((max((arr_2 [i_1]), (arr_4 [1] [17]))))))) ? 15 : 5994225163511845740));
                var_19 = ((((~(arr_4 [i_1 + 2] [i_1 + 2])))) ? ((-(arr_4 [i_1 + 2] [i_1]))) : ((~(arr_4 [i_1 + 2] [i_1 + 2]))));
            }
        }
    }
    var_20 = ((var_4 ? ((((-6396087353853508941 ? 1376337997 : var_2)) ^ (((562668127 << (8361 - 8361)))))) : var_18));
    #pragma endscop
}
