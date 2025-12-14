/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72731
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((2503010529U), (((/* implicit */unsigned int) var_3))))), (var_11)))) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29882)) ? (2503010516U) : (var_2)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [14LL] [i_2] [i_1] = ((/* implicit */short) (-(1326687247U)));
                    arr_8 [i_1] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) max((arr_1 [i_0 - 2] [i_0 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2503010528U)), (2918742082945411085LL)))))))));
                }
            } 
        } 
    } 
    var_13 = (+(((/* implicit */int) var_8)));
    var_14 *= ((/* implicit */unsigned char) (_Bool)1);
    var_15 = ((/* implicit */short) var_1);
}
