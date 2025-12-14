/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(52672, 64612))) ? (650958103 || var_3) : var_7));
    var_13 = ((var_10 / (((var_5 != ((max(var_0, 48))))))));
    var_14 = (min((max((var_3 | 233), var_2)), (((((min(var_10, var_1)))) ^ (max(var_10, 4294967295))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_0));
                arr_4 [i_0] = (arr_3 [i_0]);
                arr_5 [6] [4] [6] = (87 * 4294967295);
            }
        }
    }
    #pragma endscop
}
