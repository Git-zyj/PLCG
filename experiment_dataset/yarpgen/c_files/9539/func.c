/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9539
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
    var_20 = ((/* implicit */unsigned long long int) 0U);
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))))));
                var_23 = ((/* implicit */long long int) ((_Bool) arr_0 [i_1]));
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)14)) ? (1206867764U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12786))))) > (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) (short)22890)) | (((/* implicit */int) (unsigned short)4032)))))))));
            }
        } 
    } 
}
