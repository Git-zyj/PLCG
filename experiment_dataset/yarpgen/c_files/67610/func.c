/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67610
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
    var_18 = ((/* implicit */short) (+(min(((~(((/* implicit */int) (short)19669)))), ((+(((/* implicit */int) (unsigned char)42))))))));
    var_19 ^= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned char)189))))) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(2584929502U)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)60)))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)31483))));
    }
    for (unsigned char i_1 = 3; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1557343569)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-6667)))), (max((1557343576), (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)72)), ((short)19677)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1]))) < (((arr_7 [i_1]) ? (1710037794U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))))))));
        var_22 = ((/* implicit */unsigned long long int) (short)-19667);
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 24; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) (unsigned char)165);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 24; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4294967295U)))) && (((((/* implicit */_Bool) (short)31475)) && (((/* implicit */_Bool) (unsigned char)63))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_15 [i_2] [i_2] [i_2])))));
        }
    }
}
