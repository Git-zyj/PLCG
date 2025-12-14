/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 ? 135107988821114880 : 0));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [6] = (((arr_0 [i_0] [5]) - (((1835008 != (((-1954033563 - (arr_0 [1] [2])))))))));
        var_15 &= ((((arr_0 [i_0] [4]) ? -var_8 : (((arr_1 [i_0]) - (arr_0 [3] [i_0]))))));
        var_16 = (((((-var_5 ? (arr_1 [i_0]) : 11008212517296834487))) ? (arr_0 [i_0] [i_0]) : (((((arr_1 [i_0]) > -13948))))));
        var_17 = ((((((arr_1 [i_0]) == (((var_1 ? -559885745 : (arr_1 [i_0]))))))) >> (((((57096 ? 3943984519 : 57096))) ? ((((arr_1 [i_0]) || (arr_1 [i_0])))) : (arr_0 [i_0] [i_0])))));
    }
    var_18 = var_8;
    var_19 = 29;
    #pragma endscop
}
