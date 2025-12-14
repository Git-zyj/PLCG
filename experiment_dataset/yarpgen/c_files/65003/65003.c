/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0 + 3] [i_0] = -7916387043569567306;
        var_16 *= (7916387043569567320 && -1);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 ^= ((((((arr_6 [i_1 + 1]) ? (((26718 ? (arr_4 [i_1]) : -127))) : (arr_1 [i_1] [i_1 + 1])))) ? (arr_4 [i_1]) : ((min(var_0, -64)))));
        var_18 = (((max((arr_4 [i_1]), (arr_4 [i_1 + 1])))) ? (arr_5 [i_1]) : (--109));
    }
    var_19 = 1;
    var_20 = var_6;
    #pragma endscop
}
