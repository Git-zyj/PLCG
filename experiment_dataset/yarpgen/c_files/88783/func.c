/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88783
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (unsigned char)238));
        var_14 ^= ((/* implicit */signed char) (short)-24130);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)31)) ? ((-(((/* implicit */int) arr_4 [6])))) : (((/* implicit */int) min(((short)-18260), (((/* implicit */short) (unsigned char)50))))))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6269474974621666000LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)64012)))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
        var_16 = ((/* implicit */unsigned int) -928239932);
        var_17 = ((/* implicit */short) (-(((((((/* implicit */int) (short)32767)) - (-759504623))) % ((-(var_10)))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)64)) >> (((((((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (unsigned short)25031)) : (((/* implicit */int) (unsigned char)5)))) % ((+(((/* implicit */int) var_6)))))) - (41)))));
}
