/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63945
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)0))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 += var_6;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_7 [6LL] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1])))))));
                        arr_8 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)3]))) != (var_9)))) << (((((/* implicit */int) (unsigned short)16499)) - (16484)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16510)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */unsigned short) (short)-1730))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1873813340)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16499))) : (-344247853752179602LL)))) : (((((/* implicit */_Bool) 909480720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (18446744073709551615ULL)))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_11 [i_2] [i_5] [i_4] [i_2] [i_0 + 2] [i_0] [i_0 + 1])));
                        }
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-58)), (max((arr_0 [i_4]), (((/* implicit */unsigned short) (short)32767)))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) var_0);
                            arr_17 [i_0] [i_1] [4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0 + 1] [i_2])))) : (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_4])) : (((/* implicit */int) arr_7 [i_0 + 1] [(_Bool)1]))))));
                            var_21 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) max((arr_7 [i_0 + 1] [i_1]), (((/* implicit */unsigned short) var_3))))), (arr_9 [7] [i_1] [7] [(short)1] [i_1] [i_1])))));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_0 + 1]))) ? (((((/* implicit */_Bool) 15430776569538740414ULL)) ? (arr_19 [i_4] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_6 [i_0] [i_0])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28668)))));
                            var_23 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (short)19188)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) (unsigned short)49036))))));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) arr_21 [i_4] [i_1] [i_1]);
                            var_25 = ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))) ^ (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_8] [i_2] [i_8] [i_4])))))))));
                            var_26 = ((/* implicit */short) var_4);
                            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-27262))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned char)255), ((unsigned char)114))))))), (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49036))) <= (var_10)))))))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) arr_2 [i_2] [i_0]);
                            arr_24 [i_1] [(signed char)10] [i_1] [i_1] [(signed char)6] |= ((((/* implicit */int) (short)3)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (-344247853752179602LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9] [(signed char)8] [i_9]))))) : ((~(-2199501037680671615LL))))) + (1326LL))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)0), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (17213997278706498619ULL) : (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(_Bool)1])) <= (((/* implicit */int) arr_4 [i_2])))))))))) : (((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]))) : (-344247853752179616LL)))));
                        }
                        var_31 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_32 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_0])))))));
                    }
                }
            } 
        } 
    } 
}
