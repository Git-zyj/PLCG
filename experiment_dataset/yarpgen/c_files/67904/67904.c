/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((((max(var_12, (arr_0 [23] [23])))) > 4297261140613829389)) ? var_10 : var_2));
        arr_4 [i_0 - 1] = (max((((((-(arr_2 [i_0] [i_0])))) ? (min(10, (arr_1 [1]))) : ((max(var_9, (arr_0 [i_0] [i_0 - 2])))))), (arr_2 [i_0] [i_0 - 2])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_13 = (max(((((!var_8) <= 4297261140613829405))), ((((max(var_3, var_10))) << ((((var_9 * (arr_6 [6]))) - 2926090584))))));
        arr_7 [i_1 - 2] = ((((max((arr_6 [i_1 + 2]), (arr_1 [i_1 - 2])))) ? (max((arr_6 [i_1 + 1]), (arr_6 [i_1 - 2]))) : (((arr_6 [i_1 - 3]) ? -693613306 : (arr_1 [i_1 + 1])))));
        var_14 = (min(var_14, (((70 && ((min((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 + 2] [i_1 + 2])))))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 += (((((~(arr_0 [i_2] [i_2])))) && ((((arr_1 [i_2]) ? (((arr_8 [0] [0]) ? (arr_5 [i_2]) : -1280813781464680963)) : ((((var_9 <= (arr_9 [i_2]))))))))));
        var_16 = (i_2 % 2 == 0) ? ((((max(var_1, (arr_6 [i_2]))) >> (((max((arr_8 [i_2] [i_2]), -9673)) - 69))))) : ((((max(var_1, (arr_6 [i_2]))) >> (((((max((arr_8 [i_2] [i_2]), -9673)) - 69)) - 13)))));
        var_17 = ((((min(((var_6 >> (26295 - 26272))), var_7))) ? (((arr_6 [i_2]) ? ((min(var_4, var_2))) : var_10)) : -99));
        var_18 *= (arr_8 [2] [16]);
    }
    var_19 = ((((max(var_7, var_5)) | (var_1 ^ -104))));
    #pragma endscop
}
