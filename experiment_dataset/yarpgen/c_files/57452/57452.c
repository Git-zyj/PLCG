/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(108, (var_5 ^ 99)));
    var_14 = (max(var_14, ((-((max(var_12, (max(var_8, var_8)))))))));
    var_15 -= (max((!var_8), 97));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 ^= (((((arr_2 [i_0] [i_1] [19]) ? 86 : var_4)) * var_9));
                var_17 ^= (30 <= var_5);
                arr_5 [i_1] = (((max((arr_4 [i_0] [i_0]), 503316480)) | ((((arr_2 [i_0] [i_0] [i_1]) & (arr_2 [i_0] [i_0] [i_0]))))));
                var_18 = (max(var_18, (((((max(var_8, (arr_2 [i_0] [i_0] [i_0])))) >> (((((arr_3 [i_0] [i_0] [18]) ^ var_10)) - 619458244)))))));
                var_19 |= 8190;
            }
        }
    }
    #pragma endscop
}
