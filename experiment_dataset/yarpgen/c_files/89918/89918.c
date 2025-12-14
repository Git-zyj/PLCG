/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_7;
    var_14 = ((-((min(22552, -118)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (min((min((arr_2 [i_0 + 1] [i_1]), var_4)), (~2147483644)));
                    var_16 = (max(var_16, (((((2698 < (arr_3 [i_1] [13]))) ? (-2083 - 330311120) : (arr_5 [i_2 - 3] [i_1] [0]))))));
                    var_17 = (arr_1 [i_2]);
                    var_18 = (max(var_18, ((min((arr_2 [i_0 + 1] [i_0 + 2]), -14)))));
                    var_19 = (max((arr_3 [i_0 - 3] [i_0 + 1]), (arr_3 [i_0 - 3] [i_0 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
