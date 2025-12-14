/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99292
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned long long int) var_10)), (max((15378585341421817280ULL), (((/* implicit */unsigned long long int) (unsigned char)109)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-36)))))), (min((((((/* implicit */_Bool) 722897882U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7))), (((/* implicit */unsigned long long int) var_4))))));
    var_19 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_11)))), ((+(((/* implicit */int) (short)6312))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)53);
                    var_20 *= ((/* implicit */signed char) arr_3 [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (-(var_0))))) > (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
}
