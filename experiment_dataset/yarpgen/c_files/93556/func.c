/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93556
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
    var_15 &= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))), (var_5))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (var_12))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_16 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) var_7))), (((((/* implicit */_Bool) -223223443)) ? (254083642) : (((/* implicit */int) (unsigned short)48274))))));
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned int) 385255425331247869LL)))));
            var_18 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */short) arr_4 [i_0] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
        }
        for (int i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (arr_3 [8U])));
            var_20 *= ((/* implicit */short) ((min((((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))) < (((/* implicit */int) ((unsigned char) ((signed char) var_4))))));
        }
        for (int i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_21 += ((/* implicit */short) (-(((((_Bool) (short)4459)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-102)), ((unsigned char)140)))) : (((/* implicit */int) (unsigned short)59851))))));
            arr_10 [i_3] [i_0] |= ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) / (var_9))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_6 [(_Bool)1] [i_3 + 1])), (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((arr_1 [i_0] [i_3 - 1]), (arr_1 [i_0] [i_0]))));
        }
        for (int i_4 = 2; i_4 < 11; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */_Bool) (-(min((((/* implicit */long long int) min((((/* implicit */int) arr_18 [(short)4] [i_0] [i_0] [(short)4])), (var_12)))), (((((/* implicit */_Bool) arr_15 [i_6] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                            var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((/* implicit */int) ((_Bool) var_12)))))), (((min((((/* implicit */long long int) var_1)), (var_5))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (var_12))) - (117)))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_3 [i_0]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_8)))) : (((/* implicit */int) max((var_3), (var_14)))))) : (max((((/* implicit */int) (signed char)-102)), (((((/* implicit */int) (signed char)-97)) + (-254083642))))))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_5 [i_0])))) - (((((/* implicit */_Bool) 72040001851883520ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (611138843094816017ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (var_2))))) / (arr_1 [i_4 + 1] [i_4])))))))));
            arr_22 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_4 - 2])) * (((/* implicit */int) var_10))))) ? (((((/* implicit */int) arr_11 [i_0] [i_4 - 2])) >> (((((/* implicit */int) var_6)) - (34246))))) : (((((/* implicit */_Bool) arr_11 [(unsigned char)3] [i_4 - 2])) ? (((/* implicit */int) arr_11 [i_0] [i_4 - 2])) : (((/* implicit */int) var_8))))));
        }
        arr_23 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_0] [i_0])) + (13652)))))) ? (((((/* implicit */int) var_11)) & (var_12))) : (((/* implicit */int) var_14))))) ? (max((min((611138843094816003ULL), (((/* implicit */unsigned long long int) (unsigned short)59867)))), (((unsigned long long int) arr_17 [i_0])))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-10150)), (2333782249U)))))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)7]))) + (((((/* implicit */_Bool) (signed char)-102)) ? (611138843094816017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17261))))))))))));
    }
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_6)) - (34240))))) << (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1564957206) : (((/* implicit */int) (_Bool)1))))) : (max((var_13), (((/* implicit */long long int) var_3)))))))))));
    var_29 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)146)), ((short)-5448))))))) | (var_2)));
}
