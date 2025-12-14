/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86046
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (min((((/* implicit */unsigned char) var_10)), (var_9)))))), (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65529)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) >= (var_3)));
        arr_2 [i_0] = ((/* implicit */unsigned int) 2147483630);
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [(unsigned short)1] = ((/* implicit */long long int) arr_0 [i_1]);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)19])) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1])), (var_1)))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])) : ((~(((/* implicit */int) var_9)))))))));
        arr_7 [9U] = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) arr_3 [i_1] [2LL])) : (arr_4 [8U]))))) / (max((min((((/* implicit */int) (unsigned short)22)), (var_15))), ((~(((/* implicit */int) arr_3 [i_1 - 2] [i_1]))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_2)))))))));
}
