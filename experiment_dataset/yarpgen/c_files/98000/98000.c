/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((1 ? -13140 : 509830715));
        arr_2 [i_0] [i_0] = (((((~(min((arr_0 [i_0]), 1))))) ? (509830715 / 384618539) : (max(((3910348751 ? (arr_0 [i_0]) : var_2)), (arr_0 [i_0])))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_12 = (max(var_12, ((((((max(3910348728, var_8))) ? ((3910348728 ? (arr_0 [0]) : (arr_1 [i_1]))) : (!1334914966)))))));
        var_13 = (min((~14034570887510990742), (((((258396466 ? (arr_3 [i_1] [i_1]) : (arr_1 [i_1]))) > (((arr_0 [8]) / var_10)))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_7 [i_2] = (((((7720 ? 3910348764 : 40))) | (arr_5 [i_2] [i_2])));
        var_14 = ((((var_2 || (((15973693146639328291 - (arr_1 [i_2])))))) ? ((~(arr_5 [i_2] [i_2]))) : 384618560));
        var_15 = ((((arr_0 [i_2]) * 2303890208809186715)));
        var_16 = (min((((!((var_3 || (arr_5 [i_2] [i_2])))))), (min(258396466, 3026857517))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] [i_3] |= (min((!2147483647), (((arr_9 [i_3] [i_3]) ^ (arr_9 [i_3] [i_3])))));
        var_17 = (max(var_3, var_7));
        arr_11 [i_3] = var_5;
        var_18 = (((((var_10 ? var_4 : (arr_3 [i_3] [i_3])))) ? (((arr_3 [i_3] [i_3]) ? (arr_3 [i_3] [i_3]) : var_10)) : ((var_9 ? (arr_3 [i_3] [i_3]) : (arr_3 [i_3] [i_3])))));
        var_19 = ((var_4 ? var_1 : (((~var_8) ? (arr_4 [i_3] [i_3]) : (var_4 / var_3)))));
    }
    var_20 &= -var_9;
    var_21 = ((((((!var_4) / var_7))) / var_10));
    #pragma endscop
}
