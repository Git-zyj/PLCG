/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61326
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
    var_18 -= ((/* implicit */int) min((((/* implicit */unsigned int) ((var_17) ? (((((/* implicit */_Bool) (short)24461)) ? (((/* implicit */int) (signed char)73)) : (-2147483646))) : (((/* implicit */int) var_15))))), ((-(540073447U)))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 61170493))));
    var_20 = min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (4294967280U)))) ? (17571206546020841066ULL) : (((((/* implicit */_Bool) 8949560776499672309ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (var_14))))), ((-((~(var_1))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-69))))) ? ((+(((/* implicit */int) (signed char)73)))) : (((/* implicit */int) (short)24461))))));
        var_21 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (3754893849U) : (min((((/* implicit */unsigned int) (signed char)-74)), (arr_1 [6LL]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8949560776499672309ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((var_15), ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_17))))));
        var_23 *= ((/* implicit */unsigned char) (~(max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_24 &= ((/* implicit */_Bool) max((9497183297209879306ULL), (((/* implicit */unsigned long long int) ((arr_6 [i_1]) << (((((/* implicit */int) (unsigned char)102)) - (80))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_1])), (arr_4 [i_1])))) ? (min((((/* implicit */long long int) var_17)), (arr_4 [i_1]))) : (((/* implicit */long long int) arr_6 [i_1])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1])))))));
    }
}
