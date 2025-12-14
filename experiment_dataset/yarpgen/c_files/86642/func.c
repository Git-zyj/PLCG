/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86642
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
    var_14 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) (signed char)76)), (18446744073709551615ULL)))))));
        var_16 = ((/* implicit */unsigned long long int) (short)-12708);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 -= ((/* implicit */_Bool) ((unsigned short) min((var_8), (((/* implicit */unsigned short) var_4)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)-29361))) ? (((/* implicit */int) (unsigned short)18860)) : (((/* implicit */int) (signed char)-43))));
            var_19 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)31782)) ? (((/* implicit */int) (unsigned short)25433)) : (((/* implicit */int) (short)16355))))), (((474083054599047442LL) & (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (short)-16372))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (474083054599047430LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4309))))))))));
            arr_12 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)55644)), (var_3)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (6564214886707623439ULL) : (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-31782)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_4)))))));
            var_21 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5))), (((/* implicit */unsigned long long int) (unsigned short)35412)))), (((/* implicit */unsigned long long int) max((((int) (unsigned short)4)), (((/* implicit */int) (short)-8572)))))));
        }
    }
}
