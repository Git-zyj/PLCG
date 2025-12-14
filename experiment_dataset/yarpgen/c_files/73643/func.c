/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73643
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
    var_20 = ((/* implicit */unsigned int) 1076721742);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */short) ((((2147483647) != (((/* implicit */int) var_18)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)-4294)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)4299))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((-4940464418140631928LL) / (((/* implicit */long long int) 548063910))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((arr_4 [1LL] [i_1]) <= (arr_5 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_7))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (1027726245U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
    }
    var_23 *= ((/* implicit */short) var_13);
}
