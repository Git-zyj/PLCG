/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91112
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
    var_11 |= ((/* implicit */long long int) ((var_4) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (((_Bool)1) || (var_5)))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1)))))))));
    var_12 &= ((/* implicit */_Bool) (-((~(((/* implicit */int) var_10))))));
    var_13 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(var_9))))))));
        arr_2 [(_Bool)1] [i_0] &= arr_0 [i_0] [i_0];
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_0 - 2])))) || (((((/* implicit */int) ((short) (_Bool)1))) < (((/* implicit */int) max((var_7), (((/* implicit */short) var_8)))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_0 + 4] [i_0 - 3]) && (var_9)))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)23920)) || (var_3)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 209417997274450138LL)))))))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-966))));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */int) (unsigned char)161)) << (((((/* implicit */int) (short)-23763)) + (23767))))) : (max((((((/* implicit */_Bool) (short)-7090)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (short)1553)) << (((/* implicit */int) var_3))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_4 [i_1] [i_1 + 3]), (((((/* implicit */_Bool) ((((/* implicit */int) (short)23763)) + (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [(short)3]))))) : (((unsigned int) (short)-23752))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1]))) | (((((/* implicit */long long int) ((/* implicit */int) (short)-21657))) | (arr_3 [i_1 + 1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((arr_3 [i_1 + 3]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && ((_Bool)0)))))));
    }
}
