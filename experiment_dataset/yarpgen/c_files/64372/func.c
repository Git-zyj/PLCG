/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64372
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (-(((/* implicit */int) min((max(((signed char)45), ((signed char)23))), (((signed char) (signed char)-1))))))))));
        var_12 += ((/* implicit */long long int) ((unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 4103813275034755214ULL))))), ((signed char)23))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((signed char)-40), ((signed char)-12))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((long long int) arr_5 [6ULL])), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-46)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-117), ((signed char)-61))))) : (max(((+(var_0))), (((/* implicit */unsigned int) min((var_3), (var_3))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(13311360694829102984ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4103813275034755199ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)119))))) : (((var_9) ? (5135383378880448632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (max((max((((/* implicit */unsigned int) arr_1 [(short)6])), (arr_17 [i_1]))), (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4] [i_1])) ? (((/* implicit */unsigned int) -216645943)) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_5 + 2]))))))));
                            arr_19 [i_1] [i_2] [i_1] [i_4] [i_5 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? ((-(3599799508U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 14342930798674796400ULL))))))) ? (((/* implicit */int) ((unsigned short) (signed char)95))) : (max((((/* implicit */int) (signed char)-101)), ((+(((/* implicit */int) arr_0 [12LL] [4ULL]))))))));
                            arr_20 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_1] [i_5 + 2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(max((arr_9 [i_1]), (((/* implicit */long long int) var_6))))))), (max((14342930798674796389ULL), (((/* implicit */unsigned long long int) var_2))))));
                            arr_21 [7U] [8U] [7U] [i_4] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(0)))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_16 = (!(((/* implicit */_Bool) max(((short)20132), (((/* implicit */short) arr_24 [i_1] [i_1] [i_1 + 2] [(unsigned short)2] [i_1] [i_1 - 1] [i_1]))))));
                            arr_26 [i_1] [6U] [(unsigned char)3] [i_4 - 1] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) (-(max((var_1), (((/* implicit */long long int) var_9)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((signed char) 14342930798674796389ULL));
                            arr_30 [i_1 + 2] [6ULL] [8U] [i_1] [6ULL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5532)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7081)))))));
                        }
                        var_18 = (+(min((13311360694829102972ULL), (((/* implicit */unsigned long long int) (unsigned char)36)))));
                    }
                } 
            } 
        } 
    }
}
