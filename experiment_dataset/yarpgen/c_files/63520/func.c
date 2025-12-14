/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63520
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((var_8) ^ (((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) min((36028796884746240ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))) ? (min((36028796884746265ULL), (((/* implicit */unsigned long long int) (unsigned char)22)))) : (((/* implicit */unsigned long long int) -2147483638))))));
                var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_9)) ? (18410715276824805339ULL) : (var_4))) / (((/* implicit */unsigned long long int) 2147483632)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)17)) >> (((var_2) - (3413970849U))))))))));
}
