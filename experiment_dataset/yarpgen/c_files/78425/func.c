/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78425
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_15))));
    var_21 ^= ((/* implicit */unsigned char) ((((var_4) ^ (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58622))) / (var_12)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_5))))))))));
    var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_23 ^= (unsigned short)53295;
                var_24 = ((/* implicit */unsigned short) (~(((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)682), (((/* implicit */unsigned short) (unsigned char)255))))), ((-((+(96)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) << ((((~(((var_9) / (var_15))))) + (42)))));
            }
        } 
    } 
    var_26 -= ((/* implicit */unsigned int) var_13);
}
