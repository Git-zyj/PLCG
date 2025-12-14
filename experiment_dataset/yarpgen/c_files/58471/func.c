/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58471
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
    var_20 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)51133)) > (((/* implicit */int) (unsigned short)14398))))) : (max((((/* implicit */int) (signed char)3)), (1047552))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) var_0);
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */long long int) (_Bool)1);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) (unsigned short)14407)) ? (((/* implicit */int) arr_0 [(unsigned short)10])) : (((/* implicit */int) (signed char)12)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)22])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_19)) | (((/* implicit */int) ((unsigned short) ((-7172016803711521360LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_4 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_0 [14LL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25256))) : (4294967295U)))) : (arr_4 [(unsigned short)6])));
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62880)) + (((/* implicit */int) (unsigned short)28954))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (-1200997569)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
}
