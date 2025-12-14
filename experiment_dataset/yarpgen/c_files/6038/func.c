/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6038
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_15))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) var_3)) + (1735026444)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) -1735026427)) ? (((/* implicit */int) arr_0 [(unsigned short)6])) : (-932029679))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */int) (short)-18841)) + (((/* implicit */int) arr_1 [i_0])))) : ((~(((((/* implicit */int) (unsigned char)27)) / (((/* implicit */int) (unsigned short)41980))))))));
        var_21 |= ((/* implicit */unsigned long long int) var_14);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_22 += ((/* implicit */unsigned char) 583595732);
        var_23 -= ((/* implicit */int) arr_2 [14] [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)25628)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) & (var_9)));
        var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (591839925)))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -1735026444))))))) : (((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) var_17)) ? (177464065655448351ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    var_27 &= ((/* implicit */unsigned long long int) ((int) (+((+(11942972944537043344ULL))))));
}
