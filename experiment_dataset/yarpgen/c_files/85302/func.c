/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85302
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */int) min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1])))), ((-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))))));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(-19)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(7944920558382595381LL)))) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((long long int) ((unsigned short) arr_6 [i_1 - 2])));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_3] [(unsigned char)10] [i_5] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 1] [13LL]))))));
                            var_20 ^= ((/* implicit */signed char) (-(2147483647)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_6] [i_3] [i_4]))))))))))));
                            var_22 ^= ((/* implicit */signed char) arr_20 [i_1] [(signed char)15]);
                            arr_21 [i_1] [i_2] [i_1] [i_4] [i_1] [i_1 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(2147483647))), (((/* implicit */int) arr_19 [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1] [i_1 + 2] [i_4]))))) ? (1488703896U) : (((/* implicit */unsigned int) (-(2147483630))))));
                            arr_22 [i_1] [i_1 + 1] [(short)0] [i_1 + 1] [i_1 + 1] [i_1] [(short)14] = ((/* implicit */short) (!((!(((/* implicit */_Bool) 2147483630))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) arr_5 [i_7 - 3] [i_7 - 1]);
                            arr_26 [(signed char)14] [i_1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_12 [i_7 - 2] [i_1 + 1] [i_1 - 1]))))));
                            arr_27 [(_Bool)1] [i_2] [(_Bool)1] [6] [i_1] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-36))))))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) min((arr_12 [(short)14] [i_1 - 3] [i_1 - 1]), (((/* implicit */signed char) (_Bool)0))))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_4] [(short)6] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 2147483630))))), ((-(((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1]))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_8 [i_1] [i_1 - 2]))));
                            var_26 = ((/* implicit */signed char) arr_8 [i_1 + 2] [i_1 + 2]);
                        }
                        for (long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            arr_33 [i_1] [i_1 + 2] [2LL] [(unsigned short)13] [i_1] [i_1 - 1] = ((/* implicit */short) (~((-(((/* implicit */int) arr_32 [i_1] [i_1 + 1] [i_1] [i_9 + 1] [i_9]))))));
                            arr_34 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_9 + 1] [i_1]))))))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1]))))), (((arr_9 [i_1]) ? (arr_7 [i_1] [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1 - 1] [7] [i_4] [i_9])))))))));
                            var_27 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)92))));
                            var_28 = ((((/* implicit */_Bool) arr_32 [i_1 - 3] [i_9] [i_9 + 1] [i_9] [(unsigned char)3])) ? (arr_20 [i_3] [(short)5]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_19 [i_1] [(unsigned char)0] [13] [(unsigned char)0] [i_3] [13] [13]))))));
                        }
                        var_29 *= ((/* implicit */unsigned char) ((short) arr_8 [i_1 + 2] [i_1]));
                        var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [(_Bool)1] [i_1] [(short)0])))))));
                        arr_35 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_23 [i_1] [(short)5] [(short)5] [i_2] [(short)5] [(signed char)3]);
                    }
                } 
            } 
        } 
        arr_36 [i_1] = ((/* implicit */_Bool) min((arr_32 [i_1] [i_1] [(unsigned char)7] [(signed char)2] [i_1]), (arr_32 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])));
    }
    var_31 = ((/* implicit */_Bool) var_15);
}
