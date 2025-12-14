/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67951
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
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-98)), (var_15)))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_6))))) : (((/* implicit */int) (signed char)-87))))), ((-(max((var_9), (((/* implicit */long long int) var_5)))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_20 |= ((/* implicit */unsigned long long int) (unsigned char)199);
                        var_21 |= min((arr_0 [(unsigned short)6]), (((/* implicit */unsigned long long int) ((((unsigned long long int) arr_9 [i_0] [i_0] [i_1])) != (var_2)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)13)), (arr_2 [(short)15] [(short)15])))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_9 [i_4] [i_0] [i_2]))))))))));
                        var_23 *= ((/* implicit */unsigned long long int) ((((min((arr_4 [i_4] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)21)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (_Bool)1))))))) != (((((/* implicit */_Bool) ((596180325U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((arr_4 [i_4] [i_2] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)13561)))))))));
                        arr_17 [i_2] [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_10))))), (((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-19431))))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_6))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_5))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-18440)) : (((/* implicit */int) (unsigned char)43))));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) < (((((/* implicit */_Bool) (short)-21350)) ? (((/* implicit */unsigned long long int) var_18)) : (var_15)))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */short) var_4);
                        arr_24 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 4844877515128724151LL);
                        arr_25 [i_2] = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned long long int) 2770056286U)), (2070100184661060444ULL))), (((/* implicit */unsigned long long int) 1951570485U)))) | (((/* implicit */unsigned long long int) (+(max((var_17), (((/* implicit */unsigned int) arr_5 [i_0] [(short)4] [i_0])))))))));
                    }
                    arr_26 [i_2 + 2] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(arr_23 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 - 1])))), (min((((/* implicit */long long int) arr_19 [i_2 + 2] [i_2] [i_2] [i_2 - 1])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9)))))));
                }
            } 
        } 
    } 
    var_27 = ((((unsigned long long int) 12836194854895931158ULL)) / (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))));
    var_28 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (((/* implicit */int) var_0))))))));
    var_29 -= min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1601137615U)) ? (596180350U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), ((-(281474976710655ULL))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 1951570485U)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) var_9)))));
}
