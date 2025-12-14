/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96244
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)18900)) ? (2668399165U) : (2668399148U)));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned int) var_6)))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((5148043235707491505ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) < (((arr_1 [i_0] [i_0]) << (((var_15) - (18390318039532693852ULL)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)127)))))))))))));
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1786382623U)), (var_14))))));
    var_20 |= ((/* implicit */signed char) (~(((((long long int) var_4)) / (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))))));
    var_21 = ((/* implicit */unsigned char) 1481785498453933137LL);
    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)30660))) - (-1442287340286194172LL)))));
}
