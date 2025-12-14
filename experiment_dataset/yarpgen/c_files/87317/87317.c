/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_3 [i_0] [i_0])));
                arr_4 [i_0] = (((arr_1 [i_0]) > ((+(((arr_1 [i_0]) | 24464))))));
                arr_5 [i_0] [i_1 - 1] = (((min(0, (arr_2 [i_0] [i_0] [i_0]))) * (max(var_3, 9347))));
                var_16 -= ((123 ? (max(((min(24464, (arr_3 [i_0] [i_0])))), (arr_0 [i_1]))) : ((((3445138646912147948 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_0]))) / var_12))));
            }
        }
    }
    var_17 = (255 ^ 24451);
    var_18 = (max(var_18, 197));
    #pragma endscop
}
