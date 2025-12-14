/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86799
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((((-(((/* implicit */int) var_13)))) & (((/* implicit */int) max((var_9), ((unsigned char)0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned char)204))));
                var_21 = ((/* implicit */unsigned short) var_13);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (unsigned char)21);
                    arr_8 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))), (max((((unsigned int) var_4)), (((/* implicit */unsigned int) (unsigned char)251))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_15)) : (var_2)))) ? (max((max((((/* implicit */long long int) var_18)), (var_12))), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_15))));
                        var_22 = max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_7)))) ? (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) (unsigned short)0))))) : (arr_6 [i_1]))), (((/* implicit */unsigned long long int) ((short) (unsigned char)255))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)210)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_11 [i_0] [i_1] [i_2] [i_3])))))), ((+(((/* implicit */int) arr_3 [i_0]))))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) arr_5 [i_1] [i_2] [i_4]);
                        var_24 = ((/* implicit */signed char) arr_1 [i_2]);
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)0))));
                        arr_17 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) arr_1 [i_4]);
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((unsigned char)22), (arr_19 [i_0] [i_1] [i_2] [i_5])))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)251))))), (((917878384310444769ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116)))))))));
                        arr_21 [i_5] [i_2] [i_1] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned char) var_10);
                        arr_22 [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    }
                    var_26 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_10 [i_0] [i_2])))), (((/* implicit */int) var_14))));
                    arr_23 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), ((+(((/* implicit */int) (signed char)-24)))))), (min((arr_2 [i_0]), (((/* implicit */int) ((unsigned short) (unsigned char)95)))))));
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_1))));
                    arr_26 [i_0] [i_0] [i_6] = 1666563470U;
                }
                var_28 = ((/* implicit */int) max((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) var_7))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_2))));
}
