/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max((max(var_11, 0)), (11609346776392330649 >= var_2)))));
    var_13 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 -= ((((max(255, 65519))) ? ((~(arr_0 [i_1] [i_0]))) : ((((((0 ? 1754205471801738541 : (arr_3 [i_1] [i_1] [i_0])))) && (arr_5 [i_0] [i_1]))))));
                var_15 -= (((((arr_0 [i_1] [i_0]) ? (max((arr_1 [i_1]), 1)) : (((var_6 ? (arr_2 [i_0] [i_1]) : 67))))) | (~var_8)));
                arr_6 [i_0] [i_0] [i_0] = (((((max(0, var_7)))) ^ (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
