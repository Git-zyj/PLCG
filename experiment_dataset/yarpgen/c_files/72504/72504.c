/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1943222015;
    var_12 = ((-((((var_9 ? var_2 : var_6)) & (!-14095)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 |= ((var_6 ? ((((-14108 ? -14113 : 8144430728635385835)) | ((2179460528837167112 ? 14082 : var_1)))) : (((1 ? 1 : 32767)))));
                var_14 = (max(var_14, (((-(~384))))));
                arr_4 [i_1] [i_0] = ((-14134 ? (~32767) : (~32768)));
            }
        }
    }
    #pragma endscop
}
