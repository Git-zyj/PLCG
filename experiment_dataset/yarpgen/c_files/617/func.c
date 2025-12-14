/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/617
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
    var_20 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((/* implicit */long long int) ((var_16) / (var_6)))))), (((/* implicit */long long int) var_18))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) <= ((+(((long long int) var_14))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57765))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_12 [3U] [7U] [i_2] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57765))))))));
                            arr_13 [i_3] [6U] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)57765));
                        }
                    } 
                } 
                arr_14 [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57757))) | (2856197314015368272ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 1800646996)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)55601)))) : (((((/* implicit */_Bool) 3332271544906092844LL)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))), (min((var_8), (((/* implicit */unsigned int) arr_10 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((_Bool) var_0));
    var_23 = ((/* implicit */int) -3332271544906092840LL);
}
