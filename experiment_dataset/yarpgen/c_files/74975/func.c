/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74975
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) (unsigned char)4))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))))) ^ (((unsigned int) var_1)))))))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)28867))) > (9223372036854775807LL)))) | ((-(((/* implicit */int) var_10)))))))))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30469)) * (((/* implicit */int) (unsigned char)239))))) / ((-(1563201535U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned short) var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 *= ((/* implicit */unsigned short) min(((((_Bool)1) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)35))))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_7 [i_1] [i_2]), (((/* implicit */short) arr_6 [i_2] [i_1] [i_1] [i_0]))))) <= (((/* implicit */int) var_7)))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)8))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (arr_3 [i_1 - 3] [i_2 - 1] [i_2 + 2])))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 17785179U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-2021420878774406314LL)))))))));
                }
            } 
        } 
    } 
}
