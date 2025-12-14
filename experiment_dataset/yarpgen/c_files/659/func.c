/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/659
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
    var_19 = ((/* implicit */unsigned int) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    var_20 = ((/* implicit */signed char) 4403754398803103586LL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4403754398803103596LL)) ? (-4403754398803103596LL) : (4403754398803103586LL))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((long long int) 4403754398803103612LL))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)247)), (-4403754398803103603LL))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)28394);
                }
                arr_9 [i_1] [i_0] = ((/* implicit */signed char) (~((-((-(4403754398803103576LL)))))));
                arr_10 [i_1] = (((+(((/* implicit */int) (unsigned char)255)))) >= ((+(((/* implicit */int) ((_Bool) (_Bool)0))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3761118308U)), (-5562847978518828528LL)))) ? ((+(((/* implicit */int) (unsigned short)37148)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)2)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (-(var_13)));
}
