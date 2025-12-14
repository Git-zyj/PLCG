/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76488
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = (~(((/* implicit */int) var_0)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0] [10]) / (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0]) : (arr_4 [i_1]))))));
        }
        var_20 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_13))))) : (((unsigned long long int) arr_4 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
    }
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (4679912917551940873LL) : (-4679912917551940898LL)))) ? (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)92))))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (var_4) : (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (var_9)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) var_14)))))))));
}
