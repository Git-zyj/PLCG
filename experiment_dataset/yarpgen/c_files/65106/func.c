/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65106
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)22793)) ? (1355765874U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22812))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (arr_6 [(unsigned char)3] [(unsigned short)13] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) - (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)-53)))))));
                    var_21 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-18320)))) ? (((/* implicit */int) ((arr_7 [i_2 + 1] [i_1] [i_1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_18))))))))) : (((/* implicit */int) (unsigned char)106))));
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), (var_6)));
                }
            } 
        } 
    } 
    var_23 = (short)31050;
    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 8302577946922310516LL)) && (((/* implicit */_Bool) 7507368852495286167ULL)))))))) ? ((-((~(3878419041046244525LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) (unsigned char)174))))) : (((/* implicit */int) max((var_13), (((/* implicit */short) var_4))))))))));
    var_25 = ((/* implicit */short) var_4);
    var_26 = ((/* implicit */unsigned long long int) var_13);
}
