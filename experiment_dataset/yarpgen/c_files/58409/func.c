/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58409
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
    var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (var_11) : ((((!(((/* implicit */_Bool) (unsigned char)75)))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_5)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (~(var_11)))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37233))) : (var_1))))) >> (((((/* implicit */int) var_3)) + (14524)))));
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((arr_4 [18] [(short)3]) <= (((/* implicit */unsigned long long int) var_2))))), (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) var_7))))))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) ((short) var_6)))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_16 = ((((((/* implicit */int) (unsigned char)75)) >= (((/* implicit */int) (unsigned char)124)))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_7)))) : (max((((var_6) ? (((/* implicit */int) var_7)) : (var_10))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(short)6])) ? (arr_2 [i_1] [i_2]) : (((/* implicit */int) (unsigned char)97)))))));
                    var_17 = ((/* implicit */unsigned long long int) ((min((var_2), (((/* implicit */unsigned int) (signed char)-1)))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-4))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                        arr_13 [i_4] [i_3] [i_3] [(signed char)15] = ((/* implicit */long long int) var_0);
                        arr_14 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((-2125086965424991691LL) - (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_0] [i_0] [5U])))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_4])) ? (var_1) : (((/* implicit */long long int) var_2))))));
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3] [i_3]))));
                            arr_17 [i_0] [i_0] [9U] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_2 [i_4] [i_4])) / (23U)))) & ((+(var_9)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_23 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) arr_5 [(unsigned char)10])) - (40741)))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_0)) <= (((/* implicit */int) var_7))))));
                            var_25 = (-(((/* implicit */int) var_4)));
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) arr_12 [i_0]);
                    arr_24 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((int) ((((/* implicit */int) (signed char)3)) / (arr_18 [i_0]))));
                }
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_26 = ((/* implicit */short) (-(((((/* implicit */int) (signed char)-14)) * (((arr_16 [i_8] [5] [i_8] [i_8] [i_8]) / (((/* implicit */int) var_4))))))));
                    var_27 = ((/* implicit */unsigned char) 2496968575U);
                    arr_27 [i_0] [i_1] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8])))))));
                }
                var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-17)) ? (6798654652968415699LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    var_29 |= ((/* implicit */unsigned int) (!((!(((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_18 [i_0]))))))));
                    arr_30 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) (unsigned char)87);
                }
                for (unsigned char i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) arr_16 [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_10 - 2] [i_10 + 1]);
                    var_31 = max((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (var_4));
                    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_21 [i_10 - 1] [i_10 + 1] [i_10] [i_10]), (arr_3 [i_10 - 3] [i_10 - 3] [i_1]))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) ((min((var_10), (((/* implicit */int) var_4)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-124)) && (((/* implicit */_Bool) var_1))))))))));
}
