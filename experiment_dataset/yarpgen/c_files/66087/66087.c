/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 << ((var_10 ? (min(1, var_4)) : (((1 & (-32767 - 1))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 11906;
        var_18 += ((25 - var_7) > (53629 ^ var_15));
        var_19 = (((((min(14596115603784806726, var_1)) | ((min(var_13, 14))))) < 962620039453110353));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_20 = (min(((min(var_2, var_10))), ((5181817672078682428 ? -2004 : 927))));
        var_21 = (((((var_4 ? var_2 : 1801679890)) > (-127 - 1))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = ((var_7 || (((1801679876 ? 2985508462 : 34)))));
        var_22 = var_0;
    }
    var_23 = max(3483611916073816131, (3408844746 & 18));
    var_24 |= var_16;
    #pragma endscop
}
