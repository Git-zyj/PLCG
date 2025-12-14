/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-235789363 != (max(117440512, var_9)))))) > (min(0, -86))));
    var_16 = (max(var_16, ((((var_1 * var_13) * var_11)))));
    var_17 = var_9;
    var_18 = (~var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((max((13712539928145646984 * 174), (arr_7 [i_2] [i_1] [i_2]))) <= 1524503027)))));
                    var_20 = var_14;
                }
            }
        }
    }
    #pragma endscop
}
