/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((-(arr_5 [i_0] [i_0]))));
                var_17 = (min(var_17, (((~(~1))))));
                arr_6 [3] [3] = 13818668747710576460;
                var_18 ^= 1;
            }
        }
    }
    var_19 = var_7;
    var_20 = ((var_1 ? var_1 : var_4));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_21 = -4593707356741201289;
        arr_10 [i_2] [13] |= (max(var_14, (((((max(-8809671312005933643, (arr_8 [i_2] [i_2])))) || ((min((arr_9 [i_2]), var_4))))))));
    }
    var_22 = (min(var_11, ((~((max(var_12, 35995)))))));
    #pragma endscop
}
