/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56638
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)0)), (var_9)));
                                arr_13 [i_0] [(unsigned char)0] [i_4 + 1] [i_3 + 1] [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8896098702129326178ULL)) ? (max((max((((/* implicit */unsigned int) var_11)), (1187665060U))), (((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_3 + 1] [i_3 + 1] [i_4 + 1])))) : (((/* implicit */unsigned int) var_11))));
                                arr_14 [i_4] [i_2] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56169)))))));
                                arr_15 [i_2] [i_3 + 1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13)) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)9366)) ? (((/* implicit */unsigned int) arr_10 [(_Bool)1])) : (arr_11 [i_0] [i_1] [i_2] [i_4 - 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + ((-(((/* implicit */int) (unsigned short)9366))))));
}
