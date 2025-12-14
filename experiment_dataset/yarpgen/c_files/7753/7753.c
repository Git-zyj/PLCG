/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_3));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] = (min((var_6 > 0), (((arr_4 [10] [i_1] [i_1]) ? 172 : (max((arr_7 [i_0] [i_1]), (arr_4 [i_0] [10] [i_1])))))));
                var_18 = ((arr_2 [i_1]) - (((arr_2 [16]) >> (172 - 151))));
                var_19 = 288065491197950979;
            }
        }
    }
    #pragma endscop
}
