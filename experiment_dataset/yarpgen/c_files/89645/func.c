/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89645
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
    var_15 = ((/* implicit */long long int) var_6);
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48177)) ? ((-(3263423531045737519LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3263423531045737520LL))))))))) / (((((((/* implicit */unsigned long long int) -3263423531045737520LL)) >= (var_0))) ? (((/* implicit */unsigned long long int) var_7)) : (max((var_14), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3263423531045737501LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */_Bool) (unsigned short)19895)) ? (((/* implicit */int) (unsigned short)48507)) : (610663968))) : (((/* implicit */int) var_6))))));
                            var_18 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [18ULL] [i_0 - 1] [i_1])))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_10)) : (-610663968)))))) ? (((/* implicit */int) (unsigned short)0)) : ((-(((/* implicit */int) arr_4 [i_1] [i_0] [i_0 - 1]))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_4)), (35184372088831ULL)))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1])))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            }
        } 
    } 
    var_22 = var_4;
}
