/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, (((650787571 ? var_3 : var_0)))));
        arr_4 [i_0] = ((((-5613703706454044325 ? 136902082560 : var_2)) * (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_6 [i_1] [i_1])));
        arr_8 [i_1] = (((var_11 | 5613703706454044325) ? var_14 : (((((arr_6 [i_1] [i_1]) == (((arr_6 [i_1] [i_1]) ? 16412 : var_1))))))));
    }
    var_18 = (max(var_18, 236));
    var_19 |= (min(var_15, (min((min(-1677870741, 136902082566)), var_9))));
    var_20 = (max(var_20, ((min((((((var_10 ? var_15 : var_12))) ? ((262128 ? 87 : 136902082555)) : (var_9 % 255))), ((((var_4 && var_9) >= (min(284560305, var_5))))))))));
    var_21 = ((var_5 ? (min(3644179724, var_9)) : (((var_0 >> (((2147352576 & 3483228973) - 1335623680)))))));
    #pragma endscop
}
