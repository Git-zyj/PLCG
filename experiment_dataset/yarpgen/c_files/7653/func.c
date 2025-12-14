/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7653
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_6))));
                var_12 = ((var_4) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (unsigned char)0)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32752)) ? (max((((/* implicit */long long int) max(((unsigned char)9), (var_9)))), ((-(9221120237041090560LL))))) : (((/* implicit */long long int) ((int) var_4)))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL)))))))) : (((((/* implicit */int) (unsigned short)3968)) - (((/* implicit */int) var_7))))));
    var_15 = ((/* implicit */int) ((((unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2)))))))));
}
