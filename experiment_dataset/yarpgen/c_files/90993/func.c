/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90993
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
    var_19 = (~(9223372036854775807LL));
    var_20 ^= ((/* implicit */long long int) var_12);
    var_21 += ((/* implicit */unsigned int) (~(max((var_9), ((~(391399540392505944LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((arr_3 [i_0]), (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2 - 3] [i_0])) : (var_11))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2287890941U)) ? (4294967295U) : (3351689189U)));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_2 - 2] = max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 5U))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((unsigned int) 3351689209U);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 0U))) ? (((/* implicit */long long int) 943278106U)) : (((((/* implicit */_Bool) 5736317360590042010LL)) ? (((((/* implicit */long long int) 4294967295U)) / (arr_7 [i_0] [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) max((943278100U), (3351689209U))))))));
                                arr_25 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) 4294967278U))))) ? ((+(943278113U))) : (4294967295U)));
                                var_25 = ((/* implicit */long long int) ((((unsigned int) 4294967286U)) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) arr_6 [i_0] [i_0] [15LL] [i_0]))))))));
                                var_26 *= ((unsigned int) ((long long int) arr_19 [i_0] [i_1] [i_2 - 2] [i_5]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
