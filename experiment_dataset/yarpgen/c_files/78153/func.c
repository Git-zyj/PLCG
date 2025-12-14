/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78153
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_16 -= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_9)))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_7 [i_3] [i_1] [i_2] [6ULL]), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_4))))) : (max((((/* implicit */long long int) (signed char)12)), (876698691816579898LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */short) (_Bool)0);
                            var_19 ^= ((/* implicit */signed char) (-((-(((/* implicit */int) var_4))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned int) max((var_10), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_7))))) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_4 + 2] [i_1] [i_0]))))))))));
                        }
                    }
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)21419))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_13 [i_0] [(short)10] [i_0] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((17979214137393152LL), (((/* implicit */long long int) (_Bool)1)))))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_0] [i_0] [i_5]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_22 -= ((/* implicit */_Bool) ((((_Bool) 725744484U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19372))) >= (-876698691816579898LL))))) : (3423210654588304179ULL)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_6])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) var_1)))))));
                            arr_17 [i_0] [(signed char)13] [i_2] [i_5] [(signed char)12] = arr_7 [i_6] [i_5] [i_2] [i_6];
                        }
                        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) 3569222812U);
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) min((((/* implicit */signed char) arr_11 [i_1] [i_1] [i_2] [i_5])), (arr_4 [i_1] [i_2] [i_5] [i_5])))), (((unsigned char) 138538465099776ULL)))))) + (((unsigned int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_3)))))));
                            arr_21 [i_0] [i_1] [i_0] [11U] [i_7 + 1] [11U] = (short)19371;
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_7 + 2] [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 2] [(signed char)2]))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : ((((_Bool)1) ? (var_1) : (16421541246256724653ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_7 - 1] [i_2] [i_2] [(unsigned char)7] [i_7 - 1] [i_2])) >= (((/* implicit */int) (short)19385))))))));
                            arr_22 [i_0] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_2] [i_5] [i_7 + 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)15789)))) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)255)))) : (((/* implicit */int) var_5))));
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)0)), ((-9223372036854775807LL - 1LL)))) / (var_9)));
                    arr_24 [i_1] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-78))))))));
                    arr_25 [i_0] [i_0] [8U] = ((/* implicit */_Bool) ((((((unsigned long long int) arr_4 [i_1] [(unsigned short)15] [i_1] [i_1])) >= (((/* implicit */unsigned long long int) var_8)))) ? (((max((arr_20 [i_0] [i_0]), ((_Bool)0))) ? (((/* implicit */int) max((arr_20 [(unsigned short)10] [i_1]), (arr_16 [i_0] [i_0] [(unsigned char)4] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_0] [i_0])))))) : (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (short)3);
}
