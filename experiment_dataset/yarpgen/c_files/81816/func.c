/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81816
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10400785833030066259ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_15)))) : ((-(var_17))))) + (((/* implicit */unsigned long long int) (~(((int) (unsigned short)65535))))))))));
    var_21 *= ((/* implicit */unsigned long long int) (unsigned short)12);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned long long int) var_9))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65523)) >> (((816875168U) - (816875145U)))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) (unsigned short)9);
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_6 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32761))) : (var_15)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65517)) % (((/* implicit */int) arr_4 [i_1] [i_1]))))) >= (arr_6 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_6)))))))));
    }
}
