/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61040
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (((unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (~(var_8))));
                var_18 -= ((/* implicit */unsigned char) -685311843);
                arr_5 [i_1] [(unsigned short)0] = ((/* implicit */signed char) ((-4230196397927513745LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (max(((+(var_1))), (max((((/* implicit */unsigned long long int) var_12)), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_20 &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)161)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4001)))))));
}
