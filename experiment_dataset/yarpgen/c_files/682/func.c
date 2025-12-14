/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/682
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) var_9);
                var_15 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) ((short) (unsigned short)9))) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned short)11)))))), (1827610726)));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) (short)-18059)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5996861525514689168ULL))), (((/* implicit */unsigned long long int) ((_Bool) (short)4073))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (-1827610712))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14242887221190806610ULL)) ? (min((1827610691), (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)6))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) (short)7126);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
                                arr_20 [i_5] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [17ULL] [i_0] [i_3] = ((unsigned int) ((long long int) var_6));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((var_13) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 271655668556262781ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)1))))) : (10953654208156453580ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) max((var_9), (var_5))))))))));
}
