/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69964
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_12) + (2256887848776332832LL)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)14)) >> (((18013298997854208ULL) - (18013298997854188ULL)))))), ((~(var_14)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_1 [i_0])))) ? (((var_14) >> (((arr_3 [i_0]) + (6905834186733337879LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
        var_18 |= ((/* implicit */short) ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) <= (arr_3 [13LL])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0]) <= (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_19 ^= ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)248)), ((+(((/* implicit */int) (unsigned char)10))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_20 = min((10462642213160999336ULL), (((/* implicit */unsigned long long int) (unsigned char)242)));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (7984101860548552272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7984101860548552280ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)4))))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_8 [6] [i_1])))))));
    }
}
