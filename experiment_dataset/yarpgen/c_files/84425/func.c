/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84425
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
    var_16 ^= ((/* implicit */int) -6137738969490506201LL);
    var_17 = ((/* implicit */long long int) max((-95470500), (((/* implicit */int) var_4))));
    var_18 |= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (max((var_3), (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) arr_0 [i_1] [i_0]);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-49))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) max(((-(((/* implicit */int) arr_4 [i_2] [i_2])))), (((var_10) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_6 [i_2]))))))))))));
                    var_21 = ((/* implicit */signed char) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_13);
}
