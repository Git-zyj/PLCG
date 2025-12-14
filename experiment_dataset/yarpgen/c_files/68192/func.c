/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68192
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-90)), (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 0)) : (((long long int) var_6))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? ((-(var_10))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))))) ? (((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) (unsigned short)16128)))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) var_12))))));
                            var_17 *= ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) var_14))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) var_1);
            }
        } 
    } 
}
