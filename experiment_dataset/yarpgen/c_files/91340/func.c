/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91340
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (!((_Bool)1));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) 614833732)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1215108521536921284LL) == (((long long int) (_Bool)1)))))) : (((unsigned int) arr_3 [i_1] [i_1 + 1]))));
        arr_7 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) max((0), (arr_4 [i_1])))) - (((((/* implicit */_Bool) 611603524U)) ? (((/* implicit */unsigned long long int) 3683363782U)) : (var_11)))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (+((~(var_9)))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_20 = ((/* implicit */int) 11U);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) max((var_15), (((/* implicit */int) arr_9 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_3] [i_3])))) : (((((/* implicit */_Bool) 2842228341U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (9ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 5U)), ((-(var_1))))))));
        arr_13 [11ULL] = ((/* implicit */int) ((((unsigned long long int) (short)31591)) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8556835469957473704ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) -614833733)))))));
        var_22 = ((/* implicit */unsigned int) (~((-(8191LL)))));
        arr_14 [i_3] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) >= (9223372036854775807LL)));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_6))));
}
