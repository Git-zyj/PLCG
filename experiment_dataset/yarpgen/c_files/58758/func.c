/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58758
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
    var_10 += ((/* implicit */unsigned long long int) var_7);
    var_11 ^= ((/* implicit */_Bool) ((int) var_2));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(((long long int) (signed char)-77)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_13 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-77)), ((unsigned char)54))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)42028)) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) (_Bool)1)))) : (((1151736650U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
        var_15 = ((/* implicit */long long int) ((unsigned char) max((var_1), (((/* implicit */unsigned long long int) var_3)))));
        var_16 = ((/* implicit */unsigned short) ((short) (+(var_1))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 + 1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [12ULL] |= ((/* implicit */unsigned short) ((3528735137850432290LL) + (((/* implicit */long long int) 1151736650U))));
        var_17 = ((signed char) -1769185983);
    }
}
