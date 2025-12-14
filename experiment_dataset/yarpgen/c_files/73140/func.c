/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73140
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */_Bool) 1659874209U);
                var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((1659874220U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : ((+(0U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) | (((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) min((-2296433603943442935LL), (((/* implicit */long long int) var_5))))))));
    var_19 -= ((/* implicit */short) ((4191349755457740541LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_12 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3]);
                    arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_4 + 1])) << (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_3])), ((unsigned short)48848))))) - (max((arr_6 [(unsigned short)22]), (((/* implicit */unsigned int) var_5))))))));
                }
            } 
        } 
    } 
}
