/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95387
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
    var_16 = ((/* implicit */short) var_14);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [(short)2] [(short)2] |= ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0]));
        var_17 |= ((/* implicit */unsigned char) 6310261370937243175ULL);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_4 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_19 = ((/* implicit */short) ((arr_6 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((3750800317U) << (((((/* implicit */int) (signed char)-10)) + (31))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [(short)16] [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (-(0ULL)))))));
                            var_20 = ((/* implicit */short) arr_14 [i_5] [i_4] [i_1] [i_1] [i_2] [i_1]);
                            arr_17 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((arr_10 [i_3] [i_1] [i_3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_2 [i_2]))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)9])) << (((/* implicit */int) (short)0))))))))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1746849552279437989ULL)) ? (((/* implicit */int) (short)-25206)) : (1341017675)));
                            arr_19 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) max((((/* implicit */short) (signed char)-9)), ((short)29686)))))), (((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) arr_21 [i_6]);
        var_22 = ((/* implicit */short) (~(((((/* implicit */int) arr_20 [i_6] [i_6])) / (((/* implicit */int) arr_20 [i_6] [i_6]))))));
        var_23 |= ((/* implicit */unsigned int) 3513606076646508018ULL);
        arr_22 [i_6] = ((/* implicit */unsigned long long int) (unsigned char)199);
        arr_23 [i_6] [i_6] = ((/* implicit */short) ((unsigned short) ((unsigned int) (short)29686)));
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29686)))))))))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)86)))))))) < (((/* implicit */int) var_7))));
    var_26 = ((/* implicit */signed char) (-(var_11)));
}
