/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90731
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned int) var_13);
                var_19 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (unsigned char)241)), (((unsigned int) var_16)))) ^ (((/* implicit */unsigned int) ((-1641577092) & (((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) var_2))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))))))), (var_0)));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 4; i_3 < 9; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */short) arr_4 [9] [i_3]);
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)19))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_3 [i_3] [i_4]))))) << ((((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_2]))) : (var_1))))) - (4294967274U))))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)31714))))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) var_13)), (var_10))))))))));
}
