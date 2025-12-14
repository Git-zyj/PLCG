/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_3 ? var_0 : var_1))) ? var_3 : ((var_0 ? var_0 : var_6))))) ? ((((((var_2 ? var_3 : var_9))) ? -var_9 : ((var_5 ? var_10 : var_6))))) : (min(((var_7 ? var_0 : var_7)), (((var_7 ? var_5 : var_11)))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (max(2558984192354616192, 15887759881354935400));
        var_13 *= (((var_1 > var_7) ? var_7 : -var_3));
        var_14 = (max(((!(var_1 & var_8))), (((var_9 - var_6) >= var_9))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] = ((!var_10) ? (((min(var_0, var_11)) - ((min(var_11, var_1))))) : ((var_2 ? (var_3 ^ var_5) : (((var_2 ? var_4 : var_2))))));
        arr_9 [i_1] = ((((-var_5 ? var_10 : ((var_7 ? var_0 : var_8))))) ? (((((var_5 ? var_11 : var_11))) ? (((var_10 ? var_9 : var_10))) : var_0)) : (((((var_9 ? var_3 : var_11))) * var_0)));
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] = (((((var_9 | 15887759881354935423) ? ((2558984192354616192 ? 2558984192354616203 : 15887759881354935413)) : var_10))) ? ((((!(((var_6 ? var_10 : var_2))))))) : ((((min(var_9, var_3))) ? ((var_0 ? var_0 : var_8)) : (((var_8 ? var_3 : var_10))))));
        var_15 = (((~var_10) - (((~var_1) ? ((var_1 ? var_9 : var_11)) : var_11))));
        arr_13 [i_2] = ((+((((((-2147483647 - 1) / (-2147483647 - 1)))) ? ((var_11 ? var_11 : var_2)) : (var_4 & var_8)))));
        arr_14 [i_2] [i_2] = (((((2558984192354616204 ? 2558984192354616209 : 15887759881354935427))) ? (~var_2) : var_7));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 -= ((!(((var_2 ? var_5 : ((var_6 ? var_9 : var_0)))))));
        var_17 = (max(var_17, ((((((var_10 | var_5) ? (max(var_0, var_0)) : ((var_5 ? var_10 : var_5))))) ? ((((var_11 ? var_3 : var_7)) | ((max(var_11, var_8))))) : (((1 ? 1 : 1)))))));
    }
    #pragma endscop
}
