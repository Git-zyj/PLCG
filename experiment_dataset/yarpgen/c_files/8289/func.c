/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8289
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max(((((+(var_15))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_0]))));
            arr_8 [6] [6] |= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) arr_6 [0U] [0U])) / (((/* implicit */int) (unsigned char)145)))) << (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
            var_19 = ((/* implicit */_Bool) var_5);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_14);
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((var_15) - (arr_9 [i_0] [i_0] [i_2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_21 = ((/* implicit */short) (-(((/* implicit */int) (short)7056))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_18 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((max((253952ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_4])))))) % (((/* implicit */int) var_5))));
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_4]) << (((arr_9 [i_4] [i_3] [i_0]) - (17928899444569945366ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-123)) | (((/* implicit */int) (short)1722))))) : (min((arr_9 [i_0] [i_0] [i_4]), (arr_9 [i_4] [i_3] [i_0])))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) (unsigned short)53638);
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)-7072)) : (((/* implicit */int) (signed char)80)))), (arr_3 [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) ((_Bool) (unsigned short)41963))), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_2 [5ULL]))) <= (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_5] [i_3] [i_0]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_17 [i_0]) : (arr_17 [i_3])));
                        var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3268677297U)) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_0])) : (((/* implicit */int) var_13))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_3] [i_6 + 1])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_6 + 1])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_6 + 1]))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_13)))));
                    var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)52713)) ? (arr_24 [i_0] [i_3] [i_0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_0]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967286U)) ? (1028504117) : (((/* implicit */int) (unsigned short)50366)))))));
                }
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    arr_29 [i_0] [i_0] [i_3] [i_0] [i_4] [i_8] = ((max(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_14 [(_Bool)1] [0U] [(_Bool)1])))) | ((+(((/* implicit */int) arr_1 [i_8 - 1])))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_8])) < (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_3] [i_4] [i_4]))))));
                    var_31 ^= max((((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_8 + 1]))), (min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_3] [i_4])), (arr_21 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_0] [i_0]))));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1890427362U)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((arr_24 [6U] [i_3] [i_8 + 1] [i_8 + 1]), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
            }
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-80)) ? (1890427362U) : (3254121269U)));
            var_34 = ((/* implicit */int) ((arr_9 [i_3] [i_0] [i_0]) < (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) (_Bool)0))), (arr_3 [i_3] [i_0]))))));
            var_35 = (~(((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (max((340700681U), (((/* implicit */unsigned int) arr_26 [i_3] [i_3] [i_0] [i_3])))))));
        }
    }
    for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 2) 
    {
        arr_33 [i_9 + 3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_9 - 1] [i_9])) : (((/* implicit */int) var_0)))))) << (((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_9] [i_9 + 3] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)536)))))) - (27133)))));
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9 + 3] [i_9] [i_9])) ? (((/* implicit */int) max((arr_12 [i_9 - 1] [i_9 - 1] [i_9]), (arr_12 [i_9 + 3] [i_9] [i_9])))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)7)))))));
    }
    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1602540051U)))) : (((/* implicit */unsigned long long int) var_1))));
    var_38 = (_Bool)1;
    var_39 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) | (((/* implicit */int) max((((/* implicit */short) var_9)), (var_8))))));
}
