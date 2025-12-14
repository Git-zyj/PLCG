/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65590
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] [(unsigned short)4] = ((/* implicit */unsigned short) min((max((((long long int) var_13)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned short)64889))))))), (max((((((/* implicit */_Bool) var_0)) ? (2452847576136258714LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64880))))), (((/* implicit */long long int) (signed char)-1))))));
                var_19 = ((/* implicit */unsigned int) ((_Bool) (((+(((/* implicit */int) (short)-3386)))) / (((/* implicit */int) ((((/* implicit */int) (short)3385)) != (((/* implicit */int) (signed char)-111))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)8914))))))))));
                arr_5 [i_0 - 2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3388)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8915))) : (var_1)))) ? (((/* implicit */int) (short)3388)) : (((((/* implicit */int) (short)-3385)) * (((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_9);
}
