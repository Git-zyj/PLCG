/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97017
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
    var_19 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) max(((short)-17702), (((/* implicit */short) arr_0 [i_0 - 1] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 4203024307208268606LL);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) 10954865009278157091ULL);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_4 [i_2] [i_2]))));
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_2]))));
        arr_10 [i_2] |= ((/* implicit */_Bool) var_15);
    }
    var_23 = ((/* implicit */long long int) max(((unsigned char)124), (((/* implicit */unsigned char) var_18))));
}
