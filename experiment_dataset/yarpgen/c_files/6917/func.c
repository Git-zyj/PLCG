/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6917
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8847249210958110503LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))) ? (((/* implicit */unsigned long long int) -8847249210958110503LL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8847249210958110533LL)) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (((/* implicit */int) arr_4 [(short)0] [(short)0] [i_1]))))) ? (((/* implicit */unsigned long long int) 8847249210958110501LL)) : (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_8);
    var_17 = var_12;
}
