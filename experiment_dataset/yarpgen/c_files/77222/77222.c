/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [10] = ((((arr_0 [i_0]) ? ((min(2096304302, var_6))) : ((9019505481024730934 | (arr_1 [9] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (arr_6 [i_2] [i_0] [i_0]);
                    var_21 = (min(2198663018, (arr_3 [i_0] [i_0] [0])));
                    var_22 = (max(var_22, (((((min(-1069215138, var_18)))) ? 1069215138 : (((arr_0 [i_0]) - ((4899894988333841391 << (var_9 - 1886411517)))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = (min((min(((((arr_11 [i_3]) || (arr_5 [11])))), (arr_5 [i_3]))), var_3));
        var_23 = (min(var_23, (((!((((arr_10 [i_3]) << (((((arr_0 [7]) ^ var_9)) - 3766374841))))))))));
    }
    #pragma endscop
}
