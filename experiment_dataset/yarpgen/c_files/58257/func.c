/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58257
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(short)6] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (14278410230172197146ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)5691)), (arr_7 [8U] [i_1])))) ? (4168333843537354467ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((14278410230172197139ULL) >= (((/* implicit */unsigned long long int) arr_2 [i_0])))))))))));
                    arr_9 [i_2] [i_1] [4U] = ((unsigned int) ((((unsigned int) (_Bool)0)) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [(short)5] [i_1] [10U] [i_3] = ((/* implicit */unsigned int) max((arr_1 [i_4]), (((/* implicit */unsigned long long int) ((14278410230172197143ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_6);
                                arr_18 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4013)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_0 [i_0])))))))) : (((((var_1) ? (arr_6 [i_0] [i_0]) : (9223372036854775796LL))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))));
                                arr_19 [i_1] = ((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) (short)-5712))));
                                arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -898804343)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : ((~(0ULL)))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (14278410230172197146ULL)))) ? (((/* implicit */long long int) var_6)) : (((long long int) 324992001047501670ULL))));
                    arr_22 [i_1] [i_1] [i_2] [i_1] = max((((((/* implicit */unsigned long long int) var_2)) / (arr_12 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((-3026760990538624979LL) == (((/* implicit */long long int) 4294967295U)))) ? (((int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_11);
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_5)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775797LL))));
}
