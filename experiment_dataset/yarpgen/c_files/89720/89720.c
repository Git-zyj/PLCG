/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((4294967284 | var_3) ? 6 : 4294967285)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = (min(var_18, (((-((((396548875 ? (arr_1 [i_0]) : (arr_2 [i_0]))) + ((-(arr_1 [i_0]))))))))));
        arr_3 [1] [1] &= ((~((((arr_2 [i_0]) <= ((max((arr_1 [i_0]), (arr_2 [i_0])))))))));
        var_19 = ((-((((arr_1 [i_0 - 3]) <= var_1)))));
        var_20 = ((+(((arr_0 [i_0]) ? (~1) : 348))));
        arr_4 [i_0] = ((~(!-127)));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] |= ((~(10 < 1)));
        arr_8 [i_1] |= (!(((11 ? (arr_5 [i_1 + 1]) : (arr_6 [i_1])))));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (min(var_21, 3097666821510913525));
        var_22 = (max(var_22, (((((arr_10 [i_2] [i_2]) % var_6))))));
        arr_12 [i_2] = (((((((11 ? 3097666821510913525 : 1)) | (((var_7 ? 1 : 348)))))) ? (809 && var_6) : (((-(arr_11 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = (arr_13 [i_3]);
        var_23 = ((((arr_13 [i_3]) ? 6100614542284337176 : var_4)));
        arr_16 [i_3] = ((+(max(((((-14855 + 2147483647) >> 1))), (((arr_13 [i_3]) ? 11 : 1))))));
        arr_17 [i_3] = ((var_5 && ((((arr_13 [i_3]) + (arr_14 [i_3]))))));
        var_24 = (min(-0, 102));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_25 = (min(var_25, (((((246 ? var_1 : var_5))) && (!var_9)))));
        var_26 = (~1);
    }
    var_27 &= 0;
    var_28 = var_9;
    #pragma endscop
}
