/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76978
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)29929)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_11)))))) | ((~(((/* implicit */int) var_8))))));
                    arr_9 [i_2] [i_0] = ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (728381837))) < ((-(728381839))))))));
}
