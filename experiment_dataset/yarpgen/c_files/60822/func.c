/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60822
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) 1644346084U)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) var_16);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)63))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0 + 2] [i_1] [i_1])), (var_2))))) & (var_4))))));
        }
        var_23 = ((/* implicit */int) arr_2 [i_0 + 2]);
        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (signed char)80))));
    }
    for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))), (((/* implicit */long long int) arr_9 [i_2 + 2] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2 - 2])) + (((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */short) (signed char)57)))))))) : (min((((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((unsigned long long int) var_18))))));
        var_25 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_7 [i_2 - 2]))), (((((/* implicit */int) arr_7 [i_2 - 2])) >> (((((/* implicit */int) arr_7 [i_2 + 1])) - (49)))))));
        var_26 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 + 2])) <= (((/* implicit */int) (short)-2689))))), (((int) ((signed char) arr_7 [i_2])))));
        arr_11 [19U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_8 [i_2])) ^ (((/* implicit */int) arr_9 [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_2] [i_2])), (var_4)))) : (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)57)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))))))));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18088))) : (var_15)));
    var_28 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17429))) & (var_15)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_19))))))), (var_17)));
    var_29 ^= ((/* implicit */_Bool) var_3);
}
