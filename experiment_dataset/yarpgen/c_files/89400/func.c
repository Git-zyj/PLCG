/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89400
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
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_14)) <= (min((((/* implicit */int) min(((short)27644), (var_14)))), (((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))));
    var_17 = ((/* implicit */int) (short)7641);
    var_18 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_13)))))));
    var_19 ^= ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) & (((/* implicit */int) arr_0 [i_0]))));
        var_21 = (i_0 % 2 == zero) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (56570)))))))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((((/* implicit */int) arr_0 [i_0])) - (56570))) + (40915))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((unsigned int) (unsigned char)103))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((var_11), (((/* implicit */signed char) arr_5 [i_1])))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))));
    }
}
