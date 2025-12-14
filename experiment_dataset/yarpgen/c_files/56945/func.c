/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56945
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
    var_10 = min((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned char)1)))) ? (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10677))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_6))))));
    var_11 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (_Bool)0)) > ((~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_0))))))) : ((~(((/* implicit */int) var_4))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))) * (((/* implicit */int) ((_Bool) (-(var_0)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] |= ((/* implicit */signed char) (unsigned short)0);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)84))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (((!(var_4))) ? (144115050636902400LL) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : ((-9223372036854775807LL - 1LL))))));
        arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)20813))))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967280U)))));
    }
    var_12 = ((/* implicit */long long int) var_0);
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_8)), (var_0)))))) / (((((long long int) 957954963)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -7040363696293471690LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0))))))));
}
