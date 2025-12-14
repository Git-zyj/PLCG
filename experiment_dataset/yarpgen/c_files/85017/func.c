/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85017
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
    var_16 = ((/* implicit */long long int) var_1);
    var_17 &= ((/* implicit */short) (-(((/* implicit */int) ((-267381184307934455LL) <= (((/* implicit */long long int) 3477622536U)))))));
    var_18 = ((/* implicit */unsigned short) ((_Bool) var_6));
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 3477622524U)) ? (((/* implicit */long long int) 3477622536U)) : (-267381184307934472LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1] [i_0 - 1])))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_13) || (((/* implicit */_Bool) 817344774U)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? ((-(((/* implicit */int) arr_4 [i_0 - 1])))) : (((int) arr_4 [i_1 - 2]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_4] = ((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4]);
                                arr_14 [i_0 - 1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) + (3477622517U))), (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [15LL] [i_0] [i_0 - 1])))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((8519329351968747908LL) + (((-267381184307934455LL) / (-6500763382708562467LL))))))));
                                arr_15 [i_1] [i_1] [i_3] [i_3] [i_4] = 0U;
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_11 [i_1] [i_0 + 1] [i_0 + 1] [i_1])));
                arr_17 [i_1] = ((unsigned int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_0 - 1])) * (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
