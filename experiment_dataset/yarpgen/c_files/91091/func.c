/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91091
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 &= ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-18505)) != (((/* implicit */int) (signed char)112))))) != (((/* implicit */int) ((short) (signed char)(-127 - 1))))));
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((16628337505605503878ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) ((18446743523953737728ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)117))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)47912)) : (((/* implicit */int) (_Bool)0))))) != (((unsigned long long int) arr_4 [i_1]))))) : (max((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) var_0)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (10ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16816))) : (max((((/* implicit */unsigned long long int) var_16)), (18446743523953737732ULL)))));
            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168))))) << (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) : ((~(((2) - (((/* implicit */int) (signed char)-18))))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3]))) - (min((0U), (((/* implicit */unsigned int) var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) arr_7 [i_3] [i_3])) - (113)))))) : (((((long long int) var_2)) << (((((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (288160007407534080LL))) - (124LL)))))));
        var_22 = ((/* implicit */_Bool) (signed char)-121);
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) % ((~(var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((-762720184024556347LL) + (762720184024556360LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_14)) : (18446743523953737732ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4])))))))) : (((/* implicit */unsigned long long int) min((((int) 3336684018U)), (((/* implicit */int) ((unsigned char) 288160007407534080LL))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (arr_9 [i_4] [i_4] [6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)80)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)-29789))) ^ (4294967295U))))))))));
        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_4]))));
        arr_17 [i_4] &= ((/* implicit */unsigned char) -762720184024556347LL);
    }
    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
}
