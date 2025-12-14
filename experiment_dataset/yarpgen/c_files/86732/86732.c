/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 -= (((((-49 ? -49 : 49))) ? (((((2097151 ? 14054 : -2))) ? (((40 ? 45 : 32768))) : 6471457068218833070)) : var_4));
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (min(var_18, (((51472 ? 11975287005490718557 : 1)))));
        arr_4 [i_0] = ((244 ? (((((8 ? -28560 : 30))) ? 3925468029 : -15403)) : 7704733017523213315));
        var_19 = 686422049;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = -97;
        var_21 = (((((62220 ? 2154051653108339127 : -30832))) ? (((192 ? 4972485541105742950 : 3298734909))) : ((8177 ? 243 : 16886361536731501629))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = ((114 ? -2451230489815933207 : 123));
        var_23 = ((191 ? 238 : 32768));
    }
    #pragma endscop
}
