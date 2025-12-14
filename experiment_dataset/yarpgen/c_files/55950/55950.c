/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (-((var_8 ? (((arr_1 [i_0]) ? -1832786485 : -1740461593338839243)) : var_2)));
        arr_4 [i_0] = (max(((-365513294 ? var_8 : var_9)), (((((min(var_2, var_5))) ? (arr_1 [2]) : -30)))));
        arr_5 [i_0] = (((var_4 ? (arr_1 [10]) : (arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_11 ^= (max((((~(max(var_7, (arr_3 [i_1])))))), -1740461593338839253));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = var_7;
            var_12 = (((((473238308 <= (((var_3 < (arr_8 [i_2] [i_2] [i_2]))))))) < ((((var_1 ? var_2 : var_1))))));
            var_13 -= (((var_5 ? ((((var_7 == (arr_9 [i_2])))) : (~var_9)))));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_1] [i_1] = (((((((min(var_9, (arr_9 [1])))) ? -var_7 : -var_2))) ? ((((((var_1 ? 4294967295 : (arr_6 [i_1 - 1])))) ? 1740461593338839238 : (-1832786485 ^ 142)))) : ((var_1 ? (((arr_3 [i_3]) ? var_1 : var_8)) : ((var_3 ? var_9 : var_6))))));
            var_14 = (-40331112 & 40331099);
            arr_15 [i_1 + 1] [i_1 + 1] = (arr_2 [16]);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_19 [i_4] [i_4] = (((~638606672) ? (((~(max(var_9, -365513294))))) : (((arr_7 [i_1 + 2]) ? (1 & 59036) : 1))));
            var_15 = (max(var_15, (~var_1)));
        }
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_16 = var_8;
        var_17 = ((((min((((var_3 >= (arr_20 [i_5])))), (arr_3 [i_5 - 2])))) ? var_6 : ((+(((arr_18 [i_5]) ? (arr_13 [0] [i_5]) : var_4))))));
        var_18 ^= var_3;
        var_19 = (((((arr_2 [i_5]) % var_1)) / (min(var_7, (arr_2 [i_5])))));
        arr_24 [4] |= (arr_21 [6]);
    }
    var_20 += (((-(max(1014478514, var_0)))));
    #pragma endscop
}
