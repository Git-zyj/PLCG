/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67621
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2 - 1] [i_1] [i_2] [i_2])), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1] [i_0])) ? (var_10) : (((/* implicit */unsigned int) var_8))))) | (((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_2])), (arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_7))))));
                    arr_9 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -290836911)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (min((2694453684U), (((/* implicit */unsigned int) (_Bool)1))))))) > (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)3584)) : (((/* implicit */int) var_2)))))))))))));
    var_20 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) (signed char)-44))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)5479))))))), (min((((6500602485690135265LL) + (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_4))))));
}
