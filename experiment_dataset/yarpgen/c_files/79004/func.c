/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79004
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
    var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
    var_14 = ((/* implicit */int) (short)-30659);
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 - 1])) < (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_1 [i_0 + 1])))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) max(((unsigned short)39174), (((/* implicit */unsigned short) (unsigned char)177))))) / (((/* implicit */int) (short)128))))));
        arr_4 [(signed char)14] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_5 [(_Bool)1] &= ((/* implicit */short) arr_2 [(short)6]);
        arr_6 [10U] = ((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) ((8977597274618496683LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_7 [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_17 [i_1]))))));
                            arr_22 [i_5 + 1] [i_4] [i_3] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_25 [i_3] = ((/* implicit */short) arr_14 [i_3 + 1] [i_2 - 1] [i_2 + 2]);
                            arr_26 [i_3 + 1] = ((/* implicit */unsigned char) (+(arr_18 [i_1] [i_2 + 2] [i_2 + 2])));
                        }
                        for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (((arr_23 [i_3 + 1] [i_3] [i_3] [i_3] [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_28 [i_7 - 2] [i_2] [i_3 + 1] [i_7 - 2] [i_7]))))));
                            arr_31 [i_1] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)39882));
                            arr_32 [i_1] [i_1] [i_3] [i_4] [i_7 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4] [i_7 - 2])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            arr_33 [i_1] [i_2 + 1] [i_3 - 2] [i_2 + 1] [i_7 - 1] = ((/* implicit */long long int) ((short) arr_18 [i_3 - 1] [i_1] [i_1]));
                            arr_34 [i_1] [i_1] [i_2] [i_1] [i_3 - 1] [i_4] [i_7] = ((/* implicit */short) ((unsigned long long int) (unsigned char)62));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) arr_19 [i_2 - 3] [i_3 - 1])) / (((/* implicit */int) arr_19 [i_2 - 1] [i_3 - 1])));
                            arr_39 [i_8] [i_2 + 1] [i_3] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_19 [i_1] [i_1])) >> (((arr_0 [i_1]) - (1201437536126500862LL))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 13; i_9 += 4) 
                    {
                        for (signed char i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_47 [i_1] [i_1] [i_9] [i_2 - 1] [i_3 - 1] [i_9] [i_10 + 2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1])), (arr_40 [i_9 - 3] [i_9] [i_9] [i_1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_5)))) : ((~(((/* implicit */int) arr_15 [i_10 + 2]))))))));
                                arr_48 [i_1] [i_9] [i_9] [i_9] [i_9] [i_10 - 2] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
