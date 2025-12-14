/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59940
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned char)1] [i_0 - 1] [(unsigned char)1] [i_2 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) var_2))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) var_7);
                    arr_10 [i_0 + 1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) 1015808U);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(((long long int) var_15))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17165724869677899378ULL)))))) : ((-((+(11303002117115040316ULL)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned short)30510)), (var_15)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)40169))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0))))) : (((/* implicit */unsigned long long int) min(((~(1U))), (((/* implicit */unsigned int) var_2)))))));
    var_20 = ((/* implicit */short) var_14);
}
