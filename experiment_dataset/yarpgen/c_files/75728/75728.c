/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_12 = ((+(min(15471, (max((arr_5 [i_0] [i_2] [i_2] [i_0]), var_4))))));
                    var_13 &= ((~(arr_0 [i_0] [i_0])));
                }
                var_14 = (min(var_14, ((min((arr_3 [i_0]), (~var_6))))));

                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    arr_10 [i_0] = ((-((max((max(var_3, 24588)), var_8)))));
                    arr_11 [i_0] [i_1] [i_3 + 1] [5] = var_6;
                }
                var_15 = ((((min(28100, (((arr_4 [i_0] [i_1] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : var_10))))) ? var_4 : (!15471)));
            }
        }
    }
    var_16 = (min(var_16, var_11));
    var_17 = var_10;
    #pragma endscop
}
