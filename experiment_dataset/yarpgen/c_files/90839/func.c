/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90839
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [(unsigned char)10] [(unsigned char)0] [i_2] [10U] [i_2] &= ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) < (3643265167U)))) & (arr_10 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_3])))));
                            arr_12 [i_0] [i_0] [i_1] [i_3] [i_2 + 1] [i_3] = ((/* implicit */int) arr_7 [i_0] [i_1]);
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                            {
                                var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 1]))) | (((-4937850338314823506LL) / (((/* implicit */long long int) arr_3 [i_0 + 1]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4])), ((unsigned short)401)))) | (1058758782))))));
                                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (unsigned short)416))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])) >> (((2147450880U) - (2147450859U)))))));
                                arr_15 [10] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) max((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))) : (arr_13 [i_0 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2])));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] = min((max((arr_7 [i_0 - 1] [i_4 - 1]), (arr_7 [i_0 - 1] [i_4 + 1]))), (((/* implicit */unsigned short) max((arr_14 [i_0] [i_1] [i_1] [i_3] [8LL] [i_2]), (((var_11) || (((/* implicit */_Bool) var_12))))))));
                                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)385)) ? (((/* implicit */long long int) max((arr_6 [i_0 + 1]), (arr_6 [i_0 + 1])))) : (8282146250772981451LL)));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) (unsigned short)385)) : (((/* implicit */int) arr_0 [i_2 + 2]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_0 [i_2 - 1])) - (((/* implicit */int) arr_0 [i_2 - 1]))))));
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((((/* implicit */int) var_9)) << (((/* implicit */int) (unsigned short)0)))))))));
                            }
                            var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)48191)) % (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3])) && (((/* implicit */_Bool) var_13))))))), (((/* implicit */int) (unsigned short)17329))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (max((((/* implicit */unsigned int) (unsigned short)48171)), (var_2)))));
                arr_20 [i_0] [4U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-4858168057595401290LL) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned short)13774)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_1]))))) : (arr_1 [i_0] [1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */long long int) (unsigned short)8);
}
