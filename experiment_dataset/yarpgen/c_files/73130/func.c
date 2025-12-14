/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73130
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
    var_19 |= ((/* implicit */signed char) 9093168101464821363ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]))))))) + (arr_3 [i_0])));
                    var_20 = ((/* implicit */unsigned short) max((arr_3 [i_0]), (((/* implicit */long long int) (unsigned char)96))));
                    var_21 = ((/* implicit */long long int) (signed char)125);
                }
            } 
        } 
    } 
    var_22 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (32512U) : (3921600316U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3921600328U) / (289022619U)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 4005944694U)) && (((/* implicit */_Bool) (signed char)-47)))))))));
    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)22097)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18254))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967277U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_24 = (signed char)79;
}
