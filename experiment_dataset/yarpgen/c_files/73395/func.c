/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73395
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
    var_10 |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)10459)) : (var_0)))) || (((/* implicit */_Bool) (-(var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(var_1)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_3] [i_4] [i_3] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 26388279066624LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2] [i_4]))) << ((((+(231286801))) - (231286772)))));
                            var_11 = ((/* implicit */_Bool) (~(6ULL)));
                            arr_18 [i_0] [(short)3] [4LL] [i_2] [i_2] [(short)3] [i_4] = var_5;
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_3 - 3])) ? (arr_1 [i_0 - 2] [i_0 + 1]) : (arr_1 [i_0 - 2] [i_0 + 1])));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2])) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (signed char)38))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6] [i_6 + 1] [12ULL] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)1396))) : ((~(var_2)))));
                            var_15 = ((/* implicit */long long int) var_0);
                            arr_24 [i_0] [i_0] [(signed char)13] [(short)7] [i_2] = ((/* implicit */unsigned int) ((short) var_1));
                        }
                        arr_25 [i_0 - 1] [(unsigned short)14] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (-1262507560801412972LL)));
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_0] [13U] [13LL] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [1ULL])) ? (var_9) : (((/* implicit */unsigned int) (-(((int) arr_10 [i_0] [i_1] [4] [i_7])))))));
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4)))) ? (max((6780490787839754215ULL), (((/* implicit */unsigned long long int) (signed char)-90)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)1396)) && (((/* implicit */_Bool) -231286802))))))))));
                        arr_30 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                        arr_31 [(signed char)3] [i_1] [i_2] [i_7] = ((/* implicit */short) min((((unsigned int) (short)1403)), (((unsigned int) (!(((/* implicit */_Bool) -381129676)))))));
                        arr_32 [i_0] [i_0] [13U] [4ULL] [i_0] = ((/* implicit */unsigned long long int) (signed char)86);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_15 [i_1] [i_0])))))))));
                        arr_35 [i_8] [i_1] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */signed char) arr_14 [i_0 - 1] [i_1] [i_2] [i_8] [i_1] [8LL] [i_8]);
                    }
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8219))));
                }
            } 
        } 
    } 
}
