/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 -= ((~(1351101176 || -4503599627370496)));
        var_13 = (max(((~(((arr_1 [i_0]) ? var_11 : 6610)))), (((max(var_3, (arr_1 [i_0])))))));
        var_14 = -4933809362634486658;
        arr_3 [i_0] = -4933809362634486681;
        var_15 = (min(var_15, (((~(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 += (arr_5 [i_1]);
        arr_6 [i_1] = (!-4933809362634486681);
    }
    var_17 = 1;
    var_18 = var_8;
    #pragma endscop
}
