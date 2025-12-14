/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62229
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) : (((-2086359381163441598LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)27458)) ? (arr_4 [i_1 + 3] [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30867))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_1 + 3] [i_1 + 3]))))));
                    arr_8 [i_1] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27467))) | (arr_4 [i_1 - 3] [i_1 - 1]))), (arr_4 [i_1 + 2] [i_1 + 1])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) var_6)))) ? (min((var_9), (((/* implicit */unsigned int) (unsigned short)19241)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-89)) >= (((/* implicit */int) (signed char)-52)))))))));
}
