/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_6 + var_9) * ((max(var_7, var_0))))) * var_0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [4] = (~1);
            arr_5 [i_0] [9] [8] = var_2;
        }
        arr_6 [i_0] = (((arr_1 [i_0] [2]) < 3938986969));
        arr_7 [i_0] [i_0] = var_0;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = (arr_10 [i_2]);
        var_11 = (!var_2);
        arr_12 [i_2] = (min((355980327 && 1), (17 || -1)));
        arr_13 [i_2] [i_2] = ((((((var_0 && (arr_9 [20])))) - -var_2)));
        var_12 &= min(var_6, (arr_9 [14]));
    }
    #pragma endscop
}
