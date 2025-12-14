/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67966
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1985589184)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) (unsigned short)4081)) / (((/* implicit */int) (unsigned char)158)))))) == (max((((((/* implicit */int) (unsigned char)144)) >> (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) - (19526))))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)82))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0]))))), (var_3)))) | (max((((arr_0 [i_0] [i_0 - 1]) ? (((/* implicit */int) (short)22440)) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))), (min((var_4), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))))));
        var_17 = ((/* implicit */short) (!((!(min((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 2] [i_0 + 2])))))));
    }
    var_18 = ((max((((/* implicit */unsigned int) ((_Bool) var_12))), (max((var_1), (((/* implicit */unsigned int) (unsigned short)32172)))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))))) && (((/* implicit */_Bool) (+(18597147)))))))));
}
