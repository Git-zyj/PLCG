/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = ((((max((max((arr_6 [i_2] [9] [i_0]), (arr_6 [i_0] [i_1] [i_1]))), ((max(var_11, 2460187597)))))) ? (arr_0 [i_0] [i_1]) : ((((arr_6 [i_0] [7] [i_2 - 1]) > (arr_3 [7] [i_1] [i_2 + 3]))))));
                    var_14 = (max(var_14, ((max(((((max((arr_0 [i_0] [4]), (arr_7 [i_1] [i_1])))) ? 71 : (max((-127 - 1), 718785653)))), ((~((max((arr_7 [i_2 - 1] [i_1]), (arr_4 [i_1] [10])))))))))));
                }
            }
        }
    }
    var_15 = (~var_0);
    var_16 = ((~((((((min(var_8, var_8)))) != var_3)))));
    #pragma endscop
}
