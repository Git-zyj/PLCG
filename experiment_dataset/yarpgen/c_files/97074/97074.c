/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_14 &= ((((!(arr_1 [i_0 - 2]))) ? ((min((arr_0 [i_0 - 2]), (arr_1 [i_0 - 2])))) : (min((arr_0 [i_0 - 3]), ((var_5 ? 54 : 2804588114259071166))))));
        var_15 = ((((~(1 - 1)))) ? ((((min((arr_1 [i_0]), var_3))) ? ((var_5 * (arr_0 [i_0]))) : ((var_9 ? var_4 : 3683473715)))) : ((((((arr_0 [i_0 - 2]) ? var_7 : 2013708146))) ? (arr_0 [i_0 - 1]) : (((arr_0 [i_0]) ? (arr_1 [22]) : (arr_0 [i_0]))))));
    }
    var_16 -= ((~((((min(var_0, 49152))) ? (~112) : (var_1 & 15672046252620439404)))));
    var_17 *= ((((((1 ? var_4 : 1))) ? var_6 : 2759745851)) | var_13);
    #pragma endscop
}
