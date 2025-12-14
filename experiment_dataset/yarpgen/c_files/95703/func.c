/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95703
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
    var_19 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)202)) ? (12423499372607699736ULL) : (((/* implicit */unsigned long long int) 8874511819261340318LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) min((6213120164219744545LL), (((/* implicit */long long int) (unsigned char)53)))))))) ? (var_5) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((var_16) > (((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) & (arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_0)))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (arr_1 [i_0]))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (arr_1 [i_0]))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)10))))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */short) ((((var_16) == ((+(((/* implicit */int) var_18)))))) ? ((+(8874511819261340338LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1095739933U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) max((var_17), (var_18)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) var_18)))))))));
}
