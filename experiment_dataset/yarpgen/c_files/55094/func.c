/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55094
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (unsigned short)1))))), (max((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)0)))))))));
                var_17 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_1 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned char) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), ((unsigned short)127)));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65409)))) & ((+(((/* implicit */int) (unsigned short)127))))));
                        var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_2))), (var_1))))));
                        var_20 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned char)0))))) + (7469195772786345111ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3])) ? ((-(arr_9 [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)180))))))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_4 [i_1 + 1])));
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) var_15);
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_0));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) 0U);
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_2] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (unsigned short)65409)), (min((((/* implicit */unsigned int) var_11)), (arr_18 [i_1] [i_1])))))));
                            var_22 = var_11;
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_5] [i_2] [i_0] = ((/* implicit */int) var_8);
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [(unsigned short)9] [i_0] [i_0] [i_3] [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)2] [i_0] [(unsigned short)2]))))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */short) (unsigned char)31);
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) var_16);
                        var_25 = ((/* implicit */unsigned short) ((max((arr_27 [i_7] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_1 + 2] [(unsigned short)8] [i_7] [i_7])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) 475063093);
                                var_27 *= arr_29 [i_0];
                                var_28 = ((/* implicit */int) min((var_28), (min((646022597), (((/* implicit */int) (unsigned short)65534))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (signed char)65))));
    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
}
