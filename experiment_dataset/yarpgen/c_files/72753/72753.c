/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(min(1, (arr_1 [i_0])))));
                var_13 = (((arr_0 [i_0] [i_0]) ? (((0 ? 1 : 1))) : (min((((10675055699781727426 ? (arr_1 [i_0]) : var_4))), (min(-813823531, 14882070029454864733))))));
                var_14 ^= ((((((var_9 ? 1805372091 : (arr_0 [0] [8]))))) < (min(((max(1, (arr_0 [i_0] [6])))), var_12))));
                arr_6 [i_0] [i_0] = ((min(((245 ? 10 : (arr_1 [i_0]))), (((arr_1 [i_0]) ^ -813823531)))));
            }
        }
    }
    var_15 = var_3;
    var_16 = ((!var_0) - var_3);
    #pragma endscop
}
