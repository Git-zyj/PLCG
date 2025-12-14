/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81662
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
    var_19 = ((int) ((((1131015895) >= (((/* implicit */int) (unsigned short)4064)))) ? (((/* implicit */int) max((var_7), (var_1)))) : (((/* implicit */int) var_8))));
    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (17664190771293351446ULL) : (17664190771293351456ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((17664190771293351446ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((782553302416200196ULL), (((/* implicit */unsigned long long int) var_1))))))));
    var_21 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (unsigned short)1024);
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (17664190771293351446ULL) : (((/* implicit */unsigned long long int) 2001893139230156284LL)))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) arr_6 [12LL] [i_1] [i_1] [i_3])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)11937)) : (arr_3 [(signed char)16] [i_1] [i_1])))))))));
                        var_25 -= ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) (signed char)125)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (short)-27206)) : (((/* implicit */int) arr_4 [(unsigned char)16] [i_0 + 2] [i_4 - 1]))));
                            var_26 = ((/* implicit */short) var_5);
                            var_27 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_4 + 1])));
                        }
                    }
                    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_19 [i_6] [i_0] [i_5] [(unsigned short)17] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2001893139230156284LL)) ? (((/* implicit */unsigned long long int) 3413636995U)) : (17664190771293351432ULL)));
                            arr_20 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_12 [i_5 - 2] [i_5 + 1] [i_5] [(signed char)20] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5])));
                            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */int) arr_4 [19] [i_2] [19])) : (1728050710)));
                        }
                        arr_21 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                        arr_22 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((((/* implicit */int) arr_16 [i_1] [i_1])) - (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned char)252)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (signed char)-125)), (var_16))))), (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 1] [i_1] [i_2]))) : (arr_26 [13] [i_1] [2] [i_1] [i_1]))) >> (((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) var_1))))))));
                                var_31 = (+(((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0])) ? (((((/* implicit */int) (short)10214)) ^ (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) arr_5 [8U] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
