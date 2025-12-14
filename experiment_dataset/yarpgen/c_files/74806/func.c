/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74806
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)10)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_3))))));
    var_16 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)72)), (var_13)))) ? ((-(var_8))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [10])) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(max((10838441468252898117ULL), (((/* implicit */unsigned long long int) (unsigned char)16)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (1ULL)))) ? (9626177388307209539ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_8))) / (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (1976012990)));
}
