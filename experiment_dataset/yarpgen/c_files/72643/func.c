/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72643
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
    var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((min((((/* implicit */int) var_11)), ((-2147483647 - 1)))) ^ (((/* implicit */int) var_19))))), (min((((((/* implicit */_Bool) (signed char)-108)) ? (1901034402U) : (((/* implicit */unsigned int) -1)))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1901034388U)))))));
    var_21 -= ((/* implicit */short) ((((var_18) - (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_11))))))) ^ (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6))), (((/* implicit */unsigned int) var_16))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */long long int) var_4)), (((arr_1 [i_0]) + (((/* implicit */long long int) (-(1072016613U)))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((max((2284601047U), (((/* implicit */unsigned int) 767318691)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (arr_1 [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)26776))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (+(((unsigned int) arr_0 [i_1])))))));
        var_24 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((8858614688055532000LL), (((/* implicit */long long int) max(((unsigned short)65521), (((/* implicit */unsigned short) var_10))))))))));
    }
}
