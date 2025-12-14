/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = -61740857189924173;
    var_14 = var_5;
    var_15 = var_2;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = var_6;
        var_17 = (min(var_17, (((((~(arr_1 [i_0])))) ? (((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : (--10461467004231412768)))));
        arr_4 [i_0] = ((61740857189924194 ? 4861525215213594350 : 6402034326590325447));
        var_18 = ((~-30561234) ? (max((((-61740857189924173 + 9223372036854775807) >> (255 - 246))), ((((arr_3 [i_0]) | -103))))) : (((((-6402034326590325426 ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0])))) & (((arr_1 [i_0]) ? -6402034326590325437 : (arr_3 [i_0]))))));
    }
    #pragma endscop
}
