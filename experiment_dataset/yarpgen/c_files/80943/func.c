/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80943
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [8] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [17U] [i_1] [i_2] [i_4])) + (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_3] [i_4])))) - ((-(((/* implicit */int) arr_11 [i_2] [i_1] [i_4] [i_4]))))));
                                arr_16 [i_1] [i_4] = ((/* implicit */int) (~(min((8589934584LL), (((/* implicit */long long int) 4294967295U))))));
                                arr_17 [i_4] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2 - 1] [i_2] [14] [19LL])) + (((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_6 [i_0] [i_1] [5U] [i_0])))));
                                var_13 &= ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> (8U))), (((/* implicit */int) arr_12 [i_3] [15U] [i_1] [i_0]))))) ? ((~((~(arr_10 [i_0] [i_1] [i_3] [i_4]))))) : (max((((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_4])), (arr_1 [4U] [i_0]))));
                            }
                        } 
                    } 
                    arr_18 [i_2 - 1] [i_2 + 1] [i_1] [i_0] &= ((/* implicit */signed char) 9789165523595451257ULL);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)9465)) ? (1028823013) : (((/* implicit */int) (unsigned short)20778)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_7))))) || (((((/* implicit */_Bool) (short)15783)) || (((/* implicit */_Bool) var_2)))))))));
}
