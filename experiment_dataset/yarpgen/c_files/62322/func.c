/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62322
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (signed char)-122);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((arr_4 [i_0] [(_Bool)0] [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) arr_3 [9LL] [i_0] [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (6437622056582093088LL))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_4 - 1] [i_2 + 1] [i_4])) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_0] [i_1] [i_0] [i_2])))) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_3 [11] [i_0] [i_2 + 1]))));
                    arr_16 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((686349667) << (((((((arr_8 [i_0]) + (9223372036854775807LL))) << (((arr_9 [i_1] [i_0] [i_2 + 1] [i_0]) - (4893267705955167676LL))))) - (3313419006057506793LL)))))) : (((/* implicit */short) ((686349667) << (((((((((((arr_8 [i_0]) + (9223372036854775807LL))) << (((((arr_9 [i_1] [i_0] [i_2 + 1] [i_0]) - (4893267705955167676LL))) - (47619760460431873LL))))) - (3313419006057506793LL))) + (2579385458789147670LL))) - (31LL))))));
                    var_15 += ((((/* implicit */int) arr_12 [4] [i_0] [i_2 + 1] [(signed char)2] [i_2])) % (((/* implicit */int) arr_11 [6] [i_2 - 1] [6])));
                    var_16 = ((unsigned char) (_Bool)1);
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_17 += ((/* implicit */signed char) arr_12 [i_6] [i_6] [i_0] [i_6] [i_0]);
                        var_18 = ((/* implicit */short) (((((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_20 [i_0] [i_0] [i_5] [8] [i_5] [i_5])))))) % (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27436))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        arr_26 [6ULL] [i_0] [i_1] [i_5] [i_5] [i_7] &= ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_8 [i_7])))));
                        arr_27 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (((_Bool)1) ? (max((((/* implicit */unsigned int) (_Bool)0)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_5] [i_0] [i_0]))) % (arr_25 [i_0] [(_Bool)1] [i_5] [i_5] [i_5])))))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_9]))) : (arr_8 [i_0]))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_5] [i_8] [9LL])) ? (arr_25 [(unsigned char)6] [(unsigned char)6] [i_5] [i_8] [i_9]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_5] [i_8] [i_8] [(_Bool)1]))))) ? (((/* implicit */int) ((signed char) arr_3 [10] [i_5] [i_5]))) : (((/* implicit */int) arr_4 [i_5] [i_5] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_18 [i_5]))))))));
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) (_Bool)1))), (((arr_4 [i_1] [i_5] [11ULL]) ? ((((_Bool)1) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_5] [i_5] [i_8] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255)))))));
                        }
                        arr_33 [i_0] [i_1] [i_0] [i_0] = (!(arr_11 [i_1] [i_1] [i_0]));
                    }
                    arr_34 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_5]))))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0])) : ((-(arr_28 [i_0] [i_0] [i_5] [i_0])))))) : ((((_Bool)1) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned short)9])) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_12 [i_0] [12] [12] [i_0] [(_Bool)1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((max((var_6), (((/* implicit */unsigned int) min(((short)14889), (((/* implicit */short) (_Bool)1))))))) << (((var_0) - (1940912558460290005LL)))));
}
