/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((~var_2) != var_12)) ? var_12 : (var_10 - -8509738180622791506)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_10));
                    var_15 = (min(((((17 ? 2 : 18)) + ((1079504352 ? var_12 : -4359)))), -2));
                    arr_7 [i_0] [19] [7] [7] = (arr_0 [i_0]);
                }
            }
        }
    }
    var_16 = (((((var_0 != var_7) ? var_5 : -var_4)) | ((min((-2 + 47098), ((1 ? var_5 : 17983)))))));
    #pragma endscop
}
