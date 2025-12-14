/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71108
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_17 = ((/* implicit */unsigned long long int) ((-5481470188499090448LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40029)))));
        arr_3 [2U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5481470188499090447LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((2612063907626486978LL) ^ (1LL))))) ? (min((((/* implicit */unsigned long long int) (signed char)-1)), (15ULL))) : (10393152007229325439ULL)));
        arr_8 [i_1] = ((/* implicit */signed char) min((arr_6 [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1]) : (((/* implicit */int) var_2)))))));
    }
    for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)18])))));
            var_19 = ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (3148458045072576759LL))) : ((-(arr_10 [i_2]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2]))));
            var_20 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_26 [i_2 - 1] [i_4] [i_5] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2 + 1] [i_4] [i_5 + 1] [i_4] [i_4]))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_9)) <= (arr_19 [i_2] [i_4])))), (((-3148458045072576756LL) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))))));
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56117))) > (3571569186518506574ULL)));
                            var_22 *= ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_17 [i_2 + 2] [i_2] [i_2 - 1])), (((((/* implicit */_Bool) 4561498864811963809ULL)) ? (((/* implicit */long long int) var_8)) : (var_14)))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)16]))) : (((((/* implicit */_Bool) var_12)) ? (arr_23 [i_2] [i_2] [i_4] [i_4]) : (17469572408637177ULL)))));
            arr_27 [i_2] = ((/* implicit */unsigned short) min((var_14), (((/* implicit */long long int) min((min((var_9), (((/* implicit */unsigned short) (signed char)65)))), (var_6))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    arr_34 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) ? (((long long int) arr_30 [i_2] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_5))))))))) ? (((((/* implicit */_Bool) arr_16 [i_2] [i_2])) ? (max((arr_32 [i_8] [i_2]), (9581048228787694895ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 513654902U)), (var_10)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (arr_29 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */short) arr_21 [i_2] [i_2] [i_2] [i_9] [i_10]);
                        var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((3067531413419735348ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_32 [i_2 + 1] [i_2]);
                        arr_42 [i_2 - 1] [i_2 - 1] [i_2] [i_11] = ((/* implicit */long long int) arr_9 [i_2]);
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
    }
    var_28 = var_16;
    var_29 = ((/* implicit */unsigned short) ((unsigned int) var_7));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) 3614995716U))));
}
