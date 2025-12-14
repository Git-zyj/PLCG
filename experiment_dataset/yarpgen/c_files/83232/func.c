/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83232
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
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) (signed char)0)) : (((int) 18446744073709551615ULL))))) ? (((((/* implicit */int) ((arr_1 [7ULL]) <= (((/* implicit */int) (short)16383))))) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)0))))))) : (((/* implicit */int) (signed char)-1)));
        var_16 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) < (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */int) ((((var_5) / (((/* implicit */int) var_2)))) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (short)(-32767 - 1)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0] [i_0 - 2]))), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12266)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (596939641984095453LL))))))) : (arr_1 [i_0 + 2])));
    }
    for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (signed char)-1);
        arr_6 [i_1 + 2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 - 3]))), (((/* implicit */unsigned long long int) (-(2138193641))))));
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_0))))))) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (3214398959290951704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_7 [i_1] = ((/* implicit */long long int) (signed char)-76);
    }
    var_19 = var_2;
}
