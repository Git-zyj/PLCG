/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64361
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_3))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-6261809607069230512LL)))) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))));
        var_17 = ((/* implicit */signed char) var_9);
    }
    for (long long int i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1 - 2] = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7))))))) ? (((/* implicit */long long int) (+(arr_5 [i_1 - 2])))) : (6261809607069230511LL));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_0 [(signed char)16]))));
        var_19 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))));
    }
    for (long long int i_2 = 3; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((min((((/* implicit */unsigned int) var_7)), (var_1))) - (30292U))))) : (((/* implicit */int) ((arr_6 [i_2] [i_2 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110)))))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) >= (((((/* implicit */int) min(((unsigned char)88), (((/* implicit */unsigned char) (signed char)-52))))) - (((/* implicit */int) ((unsigned short) arr_8 [i_2])))))));
        var_22 ^= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_11)))));
    }
    for (long long int i_3 = 3; i_3 < 16; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((int) arr_0 [i_3]));
        arr_13 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)2046))));
    }
    var_23 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))));
    var_24 = ((/* implicit */unsigned int) (signed char)32);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) & (264241152LL)));
    var_26 = ((/* implicit */unsigned char) ((((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) min(((short)2038), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((-6261809607069230480LL) + (((/* implicit */long long int) 1672283798U))))) || (((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) (signed char)64)))))))) : (((/* implicit */int) var_13))));
}
