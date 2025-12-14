/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78917
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_1 [i_0]))))) ? (min((var_4), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_4)))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((4095U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (arr_1 [i_0])))))))))));
        var_15 = min((4294963183U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_7)), (arr_0 [i_0]))))))));
        arr_2 [12LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_1))))) & (((/* implicit */int) max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_16 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (max((-7346047077411099179LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned char) max((max((((((/* implicit */long long int) var_2)) % (4LL))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), (var_5)))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_5))))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3783))) : (2220673667U)))), (var_13)))));
}
