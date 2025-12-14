/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89889
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(unsigned char)10] [i_0] &= ((/* implicit */_Bool) 3719640617U);
                                var_13 = ((/* implicit */signed char) 4294967295U);
                                arr_14 [1LL] [i_3] = ((/* implicit */long long int) 3744215903U);
                                var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (-4994370465498304639LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3690198471U)) && (((/* implicit */_Bool) 604768833U)))))) : ((~(1175019821U)))))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */unsigned int) ((((var_4) && ((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) 607014878U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 173738024U))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3690198462U)) && (((/* implicit */_Bool) (unsigned char)114))))))))));
                }
            } 
        } 
    } 
    var_16 = (~(((var_11) ? (11U) : (3690198463U))));
}
