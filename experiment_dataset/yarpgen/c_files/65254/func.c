/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65254
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
    var_20 = ((/* implicit */signed char) (!((!(((((/* implicit */int) (unsigned char)129)) <= (((/* implicit */int) (unsigned short)4683))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)126))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned short)9939)) : (((/* implicit */int) (unsigned short)55593))))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)255))));
                var_23 = ((/* implicit */unsigned char) max((var_23), ((unsigned char)203)));
            }
        } 
    } 
    var_24 -= ((/* implicit */signed char) var_3);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63729)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned short)65535))));
}
