/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78995
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
    var_17 = ((/* implicit */unsigned int) 18446744073709551609ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_18 = arr_1 [i_0];
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) % (arr_1 [i_0 - 2])))) : (((((/* implicit */_Bool) arr_0 [11ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (arr_0 [(short)6])))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)4094))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_0 [i_1]))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (short)10130)) - (((/* implicit */int) arr_2 [i_1]))))), (arr_1 [i_1 + 1]))) : (((((/* implicit */_Bool) (short)10125)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4108))) : ((+(2942715193627199753LL)))))));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((unsigned long long int) 524287U)), (6851936767354227326ULL))))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_2 [i_1]), ((short)-10142)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12623))) : (arr_5 [i_1 + 2]))) > (((/* implicit */long long int) (-(((/* implicit */int) (short)10108)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_24 = ((/* implicit */signed char) (~((~(arr_0 [i_2])))));
        var_25 &= ((/* implicit */signed char) ((arr_1 [i_2]) | (((((/* implicit */_Bool) 6851936767354227302ULL)) ? (-7763595453878616572LL) : (((/* implicit */long long int) 3412403986U))))));
        var_26 = ((/* implicit */short) arr_7 [i_2]);
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)15))))) + ((-(var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((6851936767354227298ULL) > (18356291107937502540ULL))))) : (((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_4))))) + (var_0)))));
}
