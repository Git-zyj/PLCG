/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70082
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */short) arr_3 [(unsigned short)17] [i_1] [i_1])))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))) + (max((var_16), (((/* implicit */unsigned int) arr_4 [7] [8] [1ULL]))))))));
                var_20 |= ((/* implicit */_Bool) arr_2 [i_0 - 1]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-56)) > (((/* implicit */int) arr_4 [i_1] [7ULL] [i_3])))))) <= (max((arr_10 [i_0 + 2] [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_4]), (((/* implicit */long long int) arr_4 [(signed char)6] [i_1] [(signed char)6]))))))), (((((/* implicit */long long int) ((unsigned int) var_18))) % (min((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0 - 1]))))))));
                                var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_6 [(unsigned short)6] [(_Bool)1] [i_3 + 1] [(short)12])))))), (((((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_0] [i_0]))) / (1742653439U)))));
                                arr_12 [i_4] [i_3 - 1] [i_2] [i_2 + 1] [i_1] [(short)7] = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_3]))))) * (((((/* implicit */_Bool) 1332737292)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4950125147410284760LL))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) var_19);
            }
        } 
    } 
    var_24 = ((((/* implicit */int) (((+(((/* implicit */int) var_12)))) != (((((/* implicit */_Bool) -4950125147410284761LL)) ? (var_9) : (((/* implicit */int) var_3))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -4950125147410284760LL))))));
    var_25 = var_9;
    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((8333580267316640310ULL) | (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1882322855)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (0U)))))));
}
