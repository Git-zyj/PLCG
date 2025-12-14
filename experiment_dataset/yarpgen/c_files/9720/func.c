/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9720
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (var_4)))) ? (-5721978397828846043LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))))))) ? (var_10) : ((-(((int) 2394696082U))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [(signed char)3] [i_1 - 1] [i_1]) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((arr_1 [i_0] [i_0]) - (14916810970634628677ULL)))))), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) 4151343193U)) : (((((/* implicit */_Bool) (unsigned char)248)) ? (22ULL) : (16513245020267965095ULL)))))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((min((arr_1 [i_1 + 1] [i_1 + 2]), (arr_1 [i_1 + 1] [i_1 - 1]))) >> (((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            arr_15 [i_3] [(short)1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [22LL])) ? (((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) (_Bool)1)))) : (arr_7 [16LL] [i_4]))) - (((/* implicit */int) ((short) 8520412981762260226LL)))));
            arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_4 - 1])) ? (((/* implicit */long long int) min((arr_6 [(unsigned char)14]), (arr_6 [(short)16])))) : (var_5)));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            arr_20 [(short)5] [(short)5] [i_5] = ((/* implicit */int) (signed char)40);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            arr_29 [i_3] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23533)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_26 [i_3 - 2] [i_5] [i_3 - 2] [i_3 - 2]))))) ? (((/* implicit */long long int) arr_8 [i_8] [i_6 + 1])) : (arr_28 [i_7] [i_7 - 1] [i_6] [i_5])));
                            arr_30 [8LL] [7LL] [(short)2] [(short)2] [(short)2] = ((/* implicit */int) 16513245020267965095ULL);
                        }
                    } 
                } 
                arr_31 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((2835624876U) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (short)1084)) : (((/* implicit */int) (short)26787)))))));
            }
            for (int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                arr_35 [(unsigned char)2] [(unsigned char)2] [i_9] [(unsigned char)2] = ((/* implicit */int) var_8);
                arr_36 [i_3] [i_5] [i_9] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) (signed char)40)))) || (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1081063484)))))) || (((/* implicit */_Bool) var_11))));
            }
            arr_37 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3])) && (((/* implicit */_Bool) ((long long int) arr_28 [i_5] [i_5] [i_3 - 1] [i_3])))))) >> (min((((unsigned long long int) arr_4 [i_3] [i_3] [10U])), (((/* implicit */unsigned long long int) ((2434577428U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))))))))));
        }
        arr_38 [i_3] = ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned char)152)) - (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned char)83)))), (((int) (short)4808))));
        arr_39 [i_3] = ((/* implicit */signed char) min(((+(arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned int) ((arr_14 [(signed char)4] [i_3] [i_3 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)1084))))))));
        arr_40 [i_3] = 776171280;
    }
    /* vectorizable */
    for (unsigned char i_10 = 4; i_10 < 22; i_10 += 1) 
    {
        arr_43 [(signed char)15] = ((((/* implicit */_Bool) arr_1 [i_10 + 1] [i_10 - 2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1))))));
        arr_44 [i_10] [i_10 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [21] [i_10])) ? (((/* implicit */int) (signed char)-60)) : (arr_7 [22] [i_10])))) ? (((/* implicit */int) arr_3 [i_10 - 3] [i_10 - 4])) : (arr_5 [(unsigned char)4] [i_10] [i_10])));
    }
}
