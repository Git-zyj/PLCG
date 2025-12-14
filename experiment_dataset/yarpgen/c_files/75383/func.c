/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75383
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 -= var_2;
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((signed char) arr_0 [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) + (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) var_1))))) && (((/* implicit */_Bool) var_7))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
    }
    for (short i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_0 [i_1 - 2]) < (arr_0 [i_1 + 1])))), (((((/* implicit */_Bool) ((short) (signed char)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1])) + (((/* implicit */int) var_10))))) : (18446744073709551615ULL)))));
        var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)0))))))))));
    }
    var_16 &= ((/* implicit */int) var_9);
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (var_11) : (((var_6) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) * (1051815862689071160ULL)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))), (max((-2201756843723781372LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))))));
}
