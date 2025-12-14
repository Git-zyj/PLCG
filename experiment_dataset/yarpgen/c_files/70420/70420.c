/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((0 ? ((65535 ? 5627844359469843548 : 65524)) : var_9));
    var_12 = ((var_3 ? var_7 : ((-(1 - var_7)))));
    var_13 = var_6;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_4 [12] [14] &= (((arr_3 [i_0]) ? (min((((arr_1 [i_0]) ? var_4 : (arr_1 [i_0]))), (((2784557092 ? 65535 : 8064))))) : ((((((((var_4 < (arr_3 [i_0]))))) == ((1510410204 ? 510071193638124300 : 6348220204405814042))))))));
        arr_5 [i_0 - 3] = (~1);
    }
    #pragma endscop
}
