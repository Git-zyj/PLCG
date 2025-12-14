/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68353
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min(((-(11083188305625402978ULL))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_7)), (arr_1 [(unsigned char)4]))))))));
        var_17 += ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) arr_2 [i_1]);
        arr_5 [i_1] = ((/* implicit */int) (~(min((var_4), (arr_2 [i_1])))));
        var_19 += ((/* implicit */unsigned char) min((((11083188305625402978ULL) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (min((7363555768084148638ULL), (11083188305625402978ULL))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (17683767282787611541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    }
    var_20 = (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
}
