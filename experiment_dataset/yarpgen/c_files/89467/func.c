/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89467
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
    var_10 = ((/* implicit */_Bool) (~((+(((var_3) ^ (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9)))))) << ((((~(((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))))) - (2519293532222712385ULL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3] [i_3]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
                        {
                            var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(((/* implicit */int) arr_8 [i_4 - 2])))) : (max((((/* implicit */int) var_4)), (arr_2 [i_2])))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) > ((~(((/* implicit */int) (short)8498))))))), (max((arr_7 [i_4 + 1] [i_1] [i_4] [i_3]), (arr_7 [i_4 + 1] [i_3] [i_2] [i_3]))))))));
                            var_15 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) 1643591262)) ? (((/* implicit */unsigned long long int) arr_4 [i_3])) : (var_1))), (((((/* implicit */_Bool) (short)8492)) ? (0ULL) : (var_5)))))));
                            var_16 = ((/* implicit */unsigned long long int) min(((short)8488), ((short)-8498)));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_11 [i_5] [i_3] [i_0]) & (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_5]))))) : (arr_9 [i_5 - 2] [i_5 - 2] [i_5 - 1]))) / (max((((/* implicit */unsigned int) (short)8498)), ((+(arr_9 [i_5] [i_1] [i_0]))))))))));
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (short)29967))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((1ULL), (12599072795960891617ULL))))));
                            var_20 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [3ULL] [i_6 + 1] [i_2] [i_6])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) var_8)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))), (max((arr_18 [i_2] [i_2] [i_2] [i_3]), (arr_13 [i_0] [i_1] [i_1])))))));
                            var_21 = ((/* implicit */unsigned char) ((long long int) min((arr_1 [i_6 + 1]), (arr_0 [i_6 - 1] [(short)9]))));
                            var_22 &= ((/* implicit */short) ((8379204747896560508LL) | (((/* implicit */long long int) 1901276194U))));
                        }
                        var_23 &= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (short)-8481)), (((unsigned long long int) (short)8468)))), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2]))))))))));
                    }
                    var_24 &= ((/* implicit */unsigned int) (short)-8489);
                }
            } 
        } 
    } 
}
