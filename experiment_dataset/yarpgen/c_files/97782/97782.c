/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= min((!var_6), var_5);
    var_12 = ((+(((var_1 + var_1) * var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((((var_4 || (arr_4 [i_0 + 3] [i_0 - 1]))) ? (min((arr_4 [i_0 - 2] [i_0]), (~253))) : ((-(arr_3 [i_0] [i_0 + 3] [i_0 + 2])))));
                arr_5 [19] [i_1] [i_0] = (max(((var_3 ? var_7 : (-1878109645 + 1878109663))), (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
