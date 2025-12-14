/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92309
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (short)-9225))))), (var_5))))));
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1])) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) 5752799250241198175ULL))))) : (((/* implicit */int) min((((/* implicit */signed char) ((11046730672957635267ULL) != (var_8)))), (min(((signed char)102), (((/* implicit */signed char) arr_2 [i_0] [i_0] [i_1]))))))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                            {
                                var_14 ^= (~(var_2));
                                arr_12 [i_0] [i_0] [(unsigned short)7] [i_3 + 2] [16] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), (5752799250241198178ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3 + 3] [i_4]))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_2 + 3])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) arr_6 [i_2]))))));
                                arr_15 [i_5] [i_5] [i_0] [i_2 + 2] [i_0] [i_0] [i_0 + 1] = arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_5];
                                arr_16 [i_3 + 1] [i_0] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_3]))));
                                var_16 ^= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (signed char)102)) ? (min((((/* implicit */unsigned long long int) var_7)), (var_6))) : (max((var_8), (var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                                arr_19 [i_0 + 1] [i_0] [i_2] [i_0] [i_3] [i_0 + 1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]))))), (var_2))));
                                var_18 = ((/* implicit */int) min((min((arr_17 [i_0] [i_3 + 1] [i_6] [i_2 + 1]), (arr_17 [i_0] [i_3 - 1] [i_2 + 2] [i_2 + 1]))), ((((+(((/* implicit */int) var_0)))) != (((/* implicit */int) ((signed char) arr_7 [i_6] [i_2] [(short)16] [i_0])))))));
                                var_19 = var_4;
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((((/* implicit */short) (signed char)-103)), (min((((/* implicit */short) (signed char)-103)), ((short)-17432)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */signed char) arr_22 [i_1] [i_8 - 1] [i_8 - 1] [i_0 + 1]);
                                arr_29 [i_0] [i_9] = ((/* implicit */short) min((var_8), (((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */unsigned long long int) var_9)), (var_6))) : (((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) & (var_2)))))));
                            }
                        } 
                    } 
                } 
                arr_30 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(5752799250241198175ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) ((12693944823468353422ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
