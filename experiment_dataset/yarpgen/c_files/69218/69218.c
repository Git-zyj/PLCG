/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (min(3292892876, (arr_3 [i_0] [i_1 + 1])));
                    var_12 |= (min((((arr_7 [i_0] [i_1 - 1] [i_1] [i_1 - 1]) ? (((arr_4 [i_1]) ? 209 : (arr_0 [1] [i_0]))) : (arr_0 [i_1 - 1] [i_1 - 1]))), (((((((arr_4 [i_1]) ? 203 : 97))) >= (arr_3 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_13 = (min((var_7 || 3292892863), (((425541471 ? 1 : 0)))));
    #pragma endscop
}
