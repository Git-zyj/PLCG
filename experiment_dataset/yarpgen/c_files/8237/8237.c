/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_7, (var_11 * var_5))));
    var_13 *= (min((min((((var_5 ? 90 : -90))), ((var_9 ? var_9 : 52)))), ((((max(var_3, var_5))) ? (var_8 | 14103908558241287723) : (var_11 >> var_5)))));
    var_14 = (min(var_14, (((((var_4 > var_3) ? var_4 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (((arr_3 [i_0] [i_2]) * ((max((arr_3 [i_0] [i_1 - 1]), 1)))));
                    var_16 = (((((((max(1688849860263936, 56))) ? var_11 : 18445055223849287681))) ? (~var_11) : ((((arr_8 [1] [i_0]) || (((var_2 ? (arr_8 [i_0] [i_0]) : 1))))))));
                    var_17 = ((((max((arr_6 [i_0 + 2] [i_1 + 1] [i_0] [i_2]), (arr_6 [i_0 + 3] [i_1 + 1] [i_0] [i_2])))) / (((max(var_2, 1)) | var_8))));
                    var_18 = (((min((arr_7 [i_0] [i_0]), (((arr_6 [i_2] [i_2] [i_0] [i_2]) ? var_4 : var_5))))) ^ (min(var_5, (max((arr_1 [i_0] [i_0]), 1)))));
                }
            }
        }
    }
    #pragma endscop
}
