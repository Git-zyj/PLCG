/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67822
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_8))));
    var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)68))))), (((((/* implicit */_Bool) 3451571956U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(var_14)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (max((var_9), (((/* implicit */int) arr_2 [i_0])))) : (((int) (_Bool)1))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min(((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3451571975U))))), (((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned char)134)), (-964051405))))))));
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (var_0))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_1]) : (313632145)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)14))))) : (min((573820306659048816LL), (((/* implicit */long long int) (_Bool)1))))))));
    }
}
