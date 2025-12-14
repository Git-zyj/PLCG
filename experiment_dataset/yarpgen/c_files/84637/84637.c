/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = ((((min((arr_2 [i_0] [i_0]), 55))) && 55));
        arr_5 [i_0] = 50;
        var_12 = (min(var_12, ((~(((arr_1 [i_0]) ? 73 : 57518))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = ((1069735408 ? ((max(var_3, (max(var_8, 57))))) : ((-(arr_7 [i_1])))));
        var_13 = (arr_6 [1]);
        var_14 = ((-517707590 ? 1 : ((((((-63703935755310897 ? 3018689875 : 3752877519804640807))) && ((53968 && (arr_0 [i_1]))))))));
        arr_9 [i_1] = ((!(((-((4194304 ? -3752877519804640808 : var_11)))))));
    }
    var_15 = (((((-(~83)))) || var_0));
    #pragma endscop
}
