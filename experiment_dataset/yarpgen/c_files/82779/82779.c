/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_17;
                arr_7 [i_0] [i_0] [i_1] = (max(var_1, (((arr_4 [i_0]) ? 13410 : (arr_3 [i_0] [i_0])))));
                var_18 += 32767;
                arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_19 = var_10;
    var_20 = ((((min((max(var_12, 814945061)), ((min(31373, var_4)))))) >= var_3));
    var_21 = ((1 ? (~5033992401424835995) : var_13));
    var_22 = -var_4;
    #pragma endscop
}
