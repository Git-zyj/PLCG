/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71525
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_4))));
    var_21 = ((/* implicit */long long int) var_19);
    var_22 = ((/* implicit */unsigned long long int) (signed char)102);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)496)) & (((/* implicit */int) (unsigned short)255))))), (max((-896684802088737090LL), (((/* implicit */long long int) arr_0 [i_0])))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 16777208)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)65281))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
            var_24 *= ((/* implicit */unsigned long long int) arr_3 [i_0] [(short)0] [i_0]);
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((max(((unsigned short)65281), (((/* implicit */unsigned short) (signed char)-22)))), ((unsigned short)255))))));
        var_26 -= max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)263))) : (arr_2 [i_0 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))));
    }
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14336)) ? (((((/* implicit */_Bool) (unsigned short)1623)) ? (((/* implicit */int) max(((unsigned short)65281), (((/* implicit */unsigned short) (short)-7813))))) : (((/* implicit */int) (short)-30520)))) : ((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)65273)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_2])), ((+(((/* implicit */int) arr_6 [i_2 - 2]))))));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)292), ((unsigned short)65272))))) - (max((((/* implicit */unsigned long long int) var_9)), (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 4294967295U))), (var_8))))) : (max((((/* implicit */unsigned long long int) max(((unsigned char)252), ((unsigned char)0)))), (max((var_0), (((/* implicit */unsigned long long int) (short)-32755))))))));
}
