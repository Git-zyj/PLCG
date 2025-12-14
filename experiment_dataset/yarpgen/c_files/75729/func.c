/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75729
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
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0] [(unsigned char)20])))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50760)))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) - (var_2)))) ? (((/* implicit */int) max(((!((_Bool)1))), ((!(((/* implicit */_Bool) (unsigned short)25022))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && ((!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                    var_21 *= ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) max((9199486040750015560LL), (var_5)))))));
                    arr_9 [i_1] [i_1] [i_1] = (((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+(var_12))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0] [(signed char)14])))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned short) (-(255LL)));
    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (min((min((var_9), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (unsigned short)16)))) : (((unsigned int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
}
