/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((var_7 ? (((!(arr_1 [i_0] [4])))) : ((max((var_11 || 3840), (var_8 || 3835))))));
        arr_2 [i_0] = (var_8 && -3835);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, ((((((-(((arr_5 [i_1]) + -62))))) + ((~(var_11 + -1033181172428701804))))))));
        var_15 = (((((min((arr_4 [i_1] [i_1]), (max(var_2, (arr_4 [i_1] [i_1]))))))) | (((arr_5 [i_1]) / (arr_5 [i_1])))));
        var_16 = (max(((((arr_4 [i_1] [7]) || (arr_4 [i_1] [4])))), (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_17 = ((((((max(var_7, (arr_6 [i_2] [16]))) | (arr_7 [i_2 - 2])))) ? (((arr_3 [7] [i_2 - 2]) + (arr_5 [i_2]))) : ((~(arr_5 [i_2 - 2])))));
        var_18 ^= var_3;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((-122 ? var_8 : ((((((arr_9 [12]) > var_9))) / -1))));
        var_19 = var_9;
    }
    #pragma endscop
}
