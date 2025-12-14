/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71555
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_12 = ((/* implicit */long long int) var_5);
                    arr_8 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)234))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 2] [i_3 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1 + 2] [i_1]), (((/* implicit */short) var_3)))))) : (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3 + 1] [i_0]))))))));
                    var_14 = ((/* implicit */int) max((var_14), ((-(((((((/* implicit */long long int) arr_2 [5U] [i_1 - 1])) != (arr_1 [i_0]))) ? (((/* implicit */int) min(((signed char)0), ((signed char)-6)))) : (((/* implicit */int) var_9))))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) min(((((~(var_8))) << (((((var_1) ? (13028390711988249297ULL) : (((/* implicit */unsigned long long int) 2265580135U)))) - (2265580117ULL))))), (((/* implicit */unsigned long long int) (+(((var_3) ? (arr_1 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_0])), (var_10)))) : (min((((/* implicit */unsigned long long int) (signed char)22)), (5418353361721302336ULL)))))) ? (((((/* implicit */int) var_6)) << (((arr_0 [i_3 + 1] [i_3 + 1]) - (4225385655706941436LL))))) : (((((/* implicit */_Bool) max((7235540463128919166LL), (((/* implicit */long long int) (signed char)32))))) ? (((/* implicit */int) ((signed char) 1925058673))) : (arr_3 [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_0] [i_3 - 1] [16] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_6)) - (((/* implicit */int) var_6)))) < ((~((~(((/* implicit */int) var_3))))))));
                                arr_20 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_0] [i_0] [i_1 + 3] [i_4] [i_3 - 1] [3ULL])) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_1 - 1] [i_4] [i_3 + 1] [i_4])))) ^ ((~(((/* implicit */int) (short)6787))))));
                                var_15 &= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) - (9223372036854775807LL)));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_6 + 3] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_25 [i_6 - 1] [i_0] [i_1 + 3] [i_0] [i_0]))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-75))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2305843009213693951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 3] [i_6])) ? (((((/* implicit */_Bool) var_8)) ? (18051228818802295942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))))) : (((/* implicit */unsigned long long int) arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0])))))));
                }
                arr_30 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-6793)) ? (3131426880U) : (2029387149U))) << (((((/* implicit */int) ((unsigned char) ((long long int) -7235540463128919159LL)))) - (110)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        arr_33 [i_8] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(_Bool)1] [i_8] [i_8])) - (((/* implicit */int) (signed char)-78))));
        /* LoopSeq 1 */
        for (long long int i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            var_17 ^= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)0))))));
            arr_37 [i_8] [3LL] = ((/* implicit */int) (~(((arr_26 [i_8] [i_8] [i_9 + 1] [(short)9]) * (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        }
        arr_38 [i_8] = ((arr_3 [i_8]) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
        arr_39 [i_8] = ((((/* implicit */_Bool) (short)-6788)) ? (arr_16 [i_8] [i_8]) : (arr_0 [4U] [4U]));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)3))))), (var_7)))) ? ((((-(arr_40 [i_10]))) << (((((/* implicit */int) arr_42 [i_10] [i_10])) - (94))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_42 [i_10] [i_10]), (arr_42 [i_10] [13ULL]))))) : (var_4))))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (var_8))))) - (arr_40 [i_10])));
    }
    for (signed char i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */unsigned long long int) (~(-309582546760131087LL)))) : ((~(arr_40 [i_11]))))))));
        arr_46 [i_11] [i_11] |= ((/* implicit */unsigned int) ((((unsigned long long int) max((3241900492U), (((/* implicit */unsigned int) (signed char)-46))))) <= (((max((((/* implicit */unsigned long long int) var_3)), (arr_45 [i_11]))) % (((/* implicit */unsigned long long int) ((var_3) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
        var_21 = ((/* implicit */unsigned int) min(((+(arr_40 [i_11]))), (((/* implicit */unsigned long long int) ((unsigned char) var_5)))));
        arr_47 [15LL] = ((/* implicit */int) arr_42 [i_11] [i_11]);
    }
}
