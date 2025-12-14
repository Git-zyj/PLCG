/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95168
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_10 = ((/* implicit */short) min((228006456U), (8387584U)));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) * (((/* implicit */int) (short)30590))))) ? (arr_7 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_2]) : (((/* implicit */long long int) max((max((3401543644U), (((/* implicit */unsigned int) var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_0)))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_5 [i_2] [i_0] [i_0]))))));
                            arr_15 [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [(signed char)8] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (+(4240235172802774500ULL))));
                            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) (unsigned char)59)) : (arr_11 [i_1 - 2] [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)59)))) : (((((/* implicit */_Bool) 7867530817117991847LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6] [i_0] [i_1] = ((/* implicit */signed char) arr_7 [i_6 - 4] [i_7 + 1] [i_1 + 1] [(unsigned short)5]);
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)112))) ? ((-(2704956370U))) : (((/* implicit */unsigned int) arr_1 [i_1 + 2] [i_6 - 3]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_6] [(short)9]))) | (893423652U))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)16))))), (arr_8 [i_7] [i_6 - 4] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
    }
    var_16 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((signed char) 544335046U)))))));
}
