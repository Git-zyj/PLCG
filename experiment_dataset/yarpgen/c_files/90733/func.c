/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90733
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_1])) <= (((((/* implicit */int) (short)-26913)) - (((arr_0 [4ULL]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)0))))))));
                var_11 += ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)63045), (((/* implicit */unsigned short) arr_0 [i_1 + 1]))))) / (((/* implicit */int) ((_Bool) (short)26913)))));
                var_12 = ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = var_1;
                        var_13 = ((/* implicit */_Bool) min((var_13), (arr_6 [i_1 - 1] [i_3 - 1] [i_3 + 1])));
                    }
                    for (int i_4 = 3; i_4 < 12; i_4 += 2) 
                    {
                        var_14 = ((((/* implicit */int) arr_9 [(short)2] [i_1])) != (((((/* implicit */int) arr_8 [i_0] [i_4 - 2] [i_1 + 1] [i_4 - 2] [i_4])) + (((/* implicit */int) (unsigned char)166)))));
                        var_15 = ((/* implicit */_Bool) var_0);
                    }
                    arr_15 [i_0] [i_1] |= ((/* implicit */long long int) (signed char)-15);
                }
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    arr_20 [i_5] = ((/* implicit */_Bool) (unsigned short)61419);
                    arr_21 [i_5 + 2] [i_5] [i_5] [8ULL] = ((/* implicit */long long int) ((arr_6 [i_0] [i_1 + 1] [i_5 - 2]) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1]))));
                    arr_22 [i_5] [i_1] [i_1 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5] [i_5 - 2] [i_1 + 1] [i_0])) >= (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0] [i_0]))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_1))));
                    arr_25 [i_6] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_6] [i_1] [i_0])) | (((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_1] [i_0]))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_19 [i_0] [i_1 + 1] [(_Bool)1] [i_6]))));
                }
                for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        arr_31 [(_Bool)0] [i_7] [8] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [(unsigned char)4] [i_7]))) - (((long long int) arr_14 [12ULL] [i_7 + 1] [i_8]))))));
                        var_18 = ((/* implicit */long long int) arr_16 [i_7] [i_7 - 1] [i_1 - 1] [i_7]);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((unsigned short) max((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_29 [13U] [i_9] [i_9] [8ULL])))), (((/* implicit */int) (unsigned short)61412)))));
                        arr_37 [i_7] [i_9] [i_7] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) ((_Bool) min((arr_17 [i_7] [i_1] [i_7 - 1] [i_7]), (((/* implicit */int) arr_12 [i_7 - 1] [(_Bool)1])))));
                    }
                    arr_38 [i_7] [i_1] [i_7] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_33 [i_1 + 1] [i_1 + 1] [i_7] [i_7 + 1])), (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                    var_19 = 8796092760064ULL;
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((max((((/* implicit */int) var_8)), (var_7))) != (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)2499)))))), ((_Bool)1)));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */long long int) var_1)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (12355823009398523650ULL)));
}
