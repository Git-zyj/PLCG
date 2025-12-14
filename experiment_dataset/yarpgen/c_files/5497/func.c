/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5497
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (unsigned char)11))));
        var_14 = min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) 858729864)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_2)));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_15 = var_0;
                                arr_17 [i_1] [i_2] [16ULL] [i_4 + 1] [i_5 - 3] [i_3] [i_5 - 2] = min((((arr_8 [i_3]) | (arr_6 [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3] [i_4 - 1] [22])) ? (arr_9 [i_2 - 2] [i_3] [i_4 - 1] [i_5 + 1]) : (arr_9 [i_1] [i_3] [i_4 - 1] [i_5]))));
                                arr_18 [i_3] [i_3] [i_4] [14ULL] [i_3] = ((/* implicit */unsigned short) arr_3 [i_1] [i_4 + 2]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (858729857) : (((/* implicit */int) (_Bool)0)));
                        var_17 = ((_Bool) var_3);
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_26 [i_3] [i_2 - 1])), (var_0)))));
                            var_19 |= arr_7 [i_7] [i_8];
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_1] [i_2 + 1] [i_2 + 1] [i_3] [13] [i_9])) ? (var_11) : (((/* implicit */int) arr_22 [i_1] [i_2] [9LL] [i_1] [i_7] [i_9])))), (((/* implicit */int) var_8))))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))))));
                        }
                        for (int i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            var_22 = ((var_9) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (8388592) : (var_4)))));
                            arr_32 [i_3] [i_3] = ((/* implicit */unsigned int) arr_24 [i_1] [i_2 - 1] [i_3] [i_7] [i_3] [i_10 + 1] [i_10]);
                        }
                        for (int i_11 = 2; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_1 + 1] [i_2 - 1] [i_3] [i_7] [i_7] [i_3]))))) >= ((+(var_6)))));
                            arr_37 [i_11] [i_3] [i_11] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -12)) ? (((/* implicit */int) (signed char)53)) : (1005993595))))));
                            var_24 = ((/* implicit */signed char) (+(((int) arr_28 [(_Bool)1] [i_2] [i_2] [i_2] [i_3] [i_3] [i_11 + 2]))));
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((int) (~(-17)));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~((-(((((/* implicit */_Bool) (short)22032)) ? (var_9) : (((/* implicit */unsigned long long int) arr_15 [i_11] [i_11] [i_11 + 3] [i_11] [i_11])))))))))));
                        }
                        arr_39 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_22 [i_1] [i_1 - 1] [i_2] [i_3] [i_7] [i_7])) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) max((arr_30 [i_3] [i_3] [i_1]), (((/* implicit */signed char) (_Bool)0)))))))));
                        var_26 = min((max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1)))), (var_12));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 + 1] [(_Bool)1] [i_12] [i_2] [22LL] [i_12])) ? (arr_7 [i_2] [9LL]) : ((~(-1005993595)))))));
                        arr_42 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((11), (var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
                    }
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_11)), (var_6))) >> (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) == (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (var_12))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((long long int) var_8));
    var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) + (max((var_9), (((/* implicit */unsigned long long int) var_2))))));
}
