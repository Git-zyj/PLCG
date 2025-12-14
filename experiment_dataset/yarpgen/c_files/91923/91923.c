/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((9 << (((~var_8) + 21))));
                arr_6 [i_0] = ((-1579953751 ? ((-60943 * (arr_0 [i_0] [i_1]))) : (((65527 | (((var_3 < (arr_4 [i_0] [i_0] [1])))))))));
                arr_7 [i_0] [i_0] = ((((-((var_7 + (arr_3 [i_0] [i_0] [i_1]))))) >= (((var_0 >> (var_3 + 7808868860974806900))))));
            }
        }
    }
    #pragma endscop
}
