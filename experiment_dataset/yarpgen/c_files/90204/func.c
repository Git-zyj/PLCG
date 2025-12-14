/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90204
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
    var_11 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (unsigned short)34651)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-51)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((var_5), (var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) arr_1 [i_1 - 3]);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_13 = ((/* implicit */short) arr_6 [(signed char)11] [i_1 - 3] [i_2]);
                    var_14 = ((/* implicit */unsigned short) ((((arr_2 [i_1 + 2]) < (arr_2 [i_1 - 3]))) || (((/* implicit */_Bool) var_4))));
                }
                for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_4] [i_4] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1 + 1] [i_2]))), (min((((/* implicit */unsigned long long int) (unsigned short)20840)), (var_4))))), (((/* implicit */unsigned long long int) max((2001196133), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                        var_15 = ((/* implicit */int) max((max((max((arr_9 [i_0] [i_4] [i_0] [i_0]), (var_0))), (((/* implicit */unsigned long long int) arr_4 [i_4] [0LL] [(_Bool)1])))), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (-846537752)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) * (arr_2 [i_2])))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) arr_20 [i_4]);
                        arr_22 [i_4] [i_1 - 2] [i_2] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_15 [i_4 - 3] [i_0] [i_1 - 1] [i_4] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) / (var_6)))))) : ((-(arr_1 [(unsigned short)0]))));
                        arr_23 [i_6] [i_6] [i_4] [4ULL] [i_2] [i_1] [i_6] &= ((/* implicit */signed char) arr_14 [i_2]);
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 4) 
                    {
                        var_17 ^= ((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2] [i_2]);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_13 [i_0] [(short)9] [i_0] [(unsigned short)7] [i_4] [i_0] [i_1 - 2]))))));
                        arr_26 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) == (((unsigned long long int) max((-2030153652), (-1039873925))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_14 [i_0]);
                        arr_31 [i_1] [i_1] [i_1] [i_4] [12LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1039873915))))), ((unsigned short)0)))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)103)))), (((/* implicit */int) arr_14 [i_0]))))) : (3199689965U)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(arr_8 [i_4] [i_1 - 3] [i_2] [i_4])))), (min((((/* implicit */long long int) arr_20 [i_4])), (var_6)))));
                        arr_35 [i_4] [i_1 + 2] [i_2] [(signed char)1] [i_9] [i_9] = ((/* implicit */unsigned short) (-(((long long int) arr_5 [i_1 + 1] [i_1 + 1]))));
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)207)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_1 + 3] [i_0] [i_4] [i_0] [(signed char)11] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_4 + 2] [i_10])) : (max((arr_27 [i_0] [i_0] [i_4] [i_2] [i_1 + 2] [i_0]), (((/* implicit */unsigned long long int) var_3))))));
                        var_21 |= min((var_6), (max((max((((/* implicit */long long int) arr_11 [i_0] [i_1 - 2] [i_2] [i_0] [i_2])), (var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))));
                        var_22 = var_5;
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((min((var_4), (((/* implicit */unsigned long long int) (signed char)1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))))))));
                    }
                }
                var_24 = ((/* implicit */unsigned long long int) (~(-1039873914)));
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_25 |= var_1;
                var_26 -= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) var_7)) | (((6951041681565898759ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), ((+(max((((/* implicit */unsigned long long int) (_Bool)0)), (7ULL)))))));
            }
            arr_42 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) (unsigned short)10343)), (var_1)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (arr_15 [i_0] [i_0] [i_0] [6LL] [i_1]))) : (max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned char) var_10))))), (((arr_24 [2LL] [i_1 - 2] [2LL] [2LL] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
            arr_43 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
            arr_44 [i_1 - 1] [i_0] = ((/* implicit */long long int) min((((arr_38 [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 2]) * (arr_38 [i_1 + 3] [i_1 + 3] [i_1 - 3] [i_1] [i_1 + 2]))), (((/* implicit */unsigned long long int) ((_Bool) arr_38 [i_1 - 3] [i_1 - 3] [i_1 + 1] [9U] [i_1])))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_12] [i_0] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)44463)) : (((/* implicit */int) arr_18 [i_0] [i_12] [i_12] [i_0] [8LL]))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 12; i_13 += 2) 
            {
                arr_49 [i_13] = ((/* implicit */unsigned char) (-(arr_3 [i_12] [i_12] [i_13 - 1])));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_13 + 1] [i_13 - 1] [i_13 - 1])) || (((/* implicit */_Bool) arr_12 [i_13 + 1] [i_13] [i_13 - 1]))));
                var_29 = (unsigned char)127;
                arr_50 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */signed char) ((unsigned short) arr_11 [i_0] [i_12] [10ULL] [i_12] [i_13]));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            arr_53 [i_0] [0ULL] = ((/* implicit */unsigned long long int) ((unsigned int) max((var_1), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_14] [i_14])))));
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    {
                        arr_60 [i_0] [i_0] [i_15] [i_16] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) (-(arr_59 [i_0] [i_14])))) + (((15744300950539446599ULL) | (((/* implicit */unsigned long long int) var_7)))))));
                        var_30 = ((/* implicit */unsigned long long int) var_10);
                        var_31 = arr_46 [1] [(unsigned short)5] [(unsigned short)5];
                    }
                } 
            } 
        }
    }
}
