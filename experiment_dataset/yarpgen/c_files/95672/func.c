/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95672
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [0U] [i_0])) ? (((var_7) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -7218202754533952150LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(_Bool)1]))))) : (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-9))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((var_4) + (9223372036854775807LL))) << ((((((+(arr_6 [i_0]))) + (1393349553484282361LL))) - (18LL)))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_9))) : (((/* implicit */long long int) (~(0U)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            var_20 = (!((((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])))));
                            var_21 *= ((/* implicit */signed char) var_14);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [(_Bool)0] [(signed char)0] [i_0] [(signed char)0] [i_0] |= ((/* implicit */unsigned short) arr_15 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                            var_22 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_1] [i_5]);
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_3;
                        }
                    }
                    for (short i_6 = 3; i_6 < 7; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((long long int) arr_11 [i_1] [i_1] [i_1] [i_6 + 4])), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_2] [i_2] [i_2] [i_1] [1LL]), (arr_2 [i_0])))) ? (((/* implicit */int) arr_3 [i_6 + 3] [i_6 - 1] [i_6 + 4])) : (((((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [(short)3] [i_2] [i_2] [i_6 - 1])) - (((/* implicit */int) (signed char)-7)))))))));
                        arr_24 [(_Bool)1] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [(signed char)2] [i_0] [(signed char)2] [1ULL] [i_6]);
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 1) 
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min(((signed char)14), ((signed char)22)))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] [9LL]))))))) : ((-(((arr_18 [i_2] [i_2] [i_0]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))));
                        arr_28 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) / (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))))) ? ((-((-(((/* implicit */int) var_3)))))) : (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [(signed char)1] [i_2]), (((/* implicit */short) max(((_Bool)1), ((_Bool)1)))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_7 - 1] [i_7 - 2] [i_7 + 2] [6LL] [6LL] [i_7])), ((+(((/* implicit */int) arr_1 [i_0]))))))))))));
                        arr_29 [i_0] [i_0] [i_1] [i_7] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) max((arr_18 [i_0] [i_1] [i_7]), ((_Bool)1))))), (min((((/* implicit */int) arr_16 [i_0] [i_0] [(short)3] [i_2] [i_2] [7U] [i_0])), (856831547)))));
                    }
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((((/* implicit */int) (signed char)14)) * (((/* implicit */int) (signed char)7)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((unsigned long long int) ((unsigned char) (unsigned char)48)))));
    var_25 = ((/* implicit */int) (signed char)65);
}
