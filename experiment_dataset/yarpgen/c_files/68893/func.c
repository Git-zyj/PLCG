/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68893
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
    var_20 -= ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */unsigned short) (((-(var_16))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned int) -1703350190)), (var_9))))))));
    var_22 *= (~(min((max((var_16), (((/* implicit */unsigned long long int) var_17)))), (var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 |= ((/* implicit */short) min((arr_6 [i_1] [i_3] [i_3] [i_3]), (((/* implicit */int) var_14))));
                                var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((unsigned short) arr_10 [i_1] [i_3] [i_4]))))));
                                arr_13 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1703350161)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_0] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30104)) ? (16467284263529295370ULL) : (((/* implicit */unsigned long long int) 3932439865U))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((((/* implicit */_Bool) max((362527430U), (((/* implicit */unsigned int) (short)32761))))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19))))))) / (min((17592186044415ULL), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_14 [i_2] [i_1] [i_2] = ((/* implicit */short) (~((~(min((268759466), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    var_26 = (~(((((/* implicit */_Bool) 14ULL)) ? (arr_5 [i_0] [i_2] [i_2] [i_2]) : (arr_0 [i_0 - 1]))));
                }
            } 
        } 
    } 
}
