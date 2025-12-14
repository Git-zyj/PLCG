/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56413
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~((~(2383515803U))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [12LL] [3] [0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1] [(signed char)13]))));
                    var_20 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_14)))) > (((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2] [(unsigned char)2]), (((/* implicit */unsigned short) var_0)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) >> (((((/* implicit */int) (unsigned short)31913)) - (31913)))))) ? (((/* implicit */int) min(((unsigned char)108), (((/* implicit */unsigned char) (signed char)31))))) : (((/* implicit */int) (unsigned short)7396))))));
                }
            } 
        } 
    } 
}
