/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((~var_14), var_5)))));
    var_17 = (max(var_0, (min(var_7, ((max(1, var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = 30598;
                    var_19 *= 1;
                    arr_9 [i_0] [i_1] |= (((((((237 ? 1 : 587787818954409460))) ? (arr_2 [i_0]) : 0)) | 3409335119608009383));
                }
            }
        }
    }
    var_20 = (-2147483647 - 1);
    #pragma endscop
}
