/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3230487334;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((var_5 << (arr_3 [i_0 + 1])))) ? 2112302397 : ((-(arr_2 [i_0 - 1])))))));
                    arr_7 [15] [i_1] [15] [i_0 - 1] |= ((((((min(var_5, var_0))) | (524501872 * var_0)))));
                    var_12 = (min(var_12, (((min((((arr_0 [i_1]) >= var_2)), (arr_3 [i_0 + 1])))))));
                }
            }
        }
    }
    var_13 = (((((~var_7) < var_9)) ? 1064479952 : ((min(var_7, ((var_7 ? var_5 : var_5)))))));
    #pragma endscop
}
