/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96148
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
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((arr_2 [i_0]) % (arr_2 [i_0 - 1])))))) ? (((arr_2 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) : (var_13)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_3 [i_0 + 2])), (arr_7 [i_0] [i_2] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1])))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)117)))) << (((((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1])) + (63)))));
                        var_20 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) arr_11 [i_0 + 1] [i_1] [i_2] [i_3 - 2] [i_4]);
                            var_22 = ((/* implicit */int) (_Bool)1);
                            arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((arr_7 [i_3 - 1] [i_3 + 2] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_0 - 1])) >= ((((_Bool)1) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) arr_10 [i_0] [12ULL] [i_1] [i_1] [i_3] [i_3] [i_4])))))))));
                            arr_13 [(short)7] [i_1] [i_1] [i_3 + 2] [i_0] = ((/* implicit */int) arr_9 [i_3 + 1] [i_0 + 1]);
                        }
                        for (short i_5 = 4; i_5 < 19; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((int) 567897563U));
                            var_24 = ((/* implicit */unsigned int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? ((~(arr_0 [i_0] [i_2]))) : (((/* implicit */long long int) var_9)))))));
                        }
                    }
                } 
            } 
            arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((((/* implicit */_Bool) 1080065723428211175ULL)) ? (arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16675))) : (252859903U))))));
            arr_17 [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) 1629918300)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_0 - 1])))));
        }
        var_25 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)108))) < (arr_7 [i_0] [i_0] [i_0])))) - (((/* implicit */int) (unsigned char)99)))));
    }
    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
    {
        arr_20 [i_6] [i_6 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)98)) || (((/* implicit */_Bool) (signed char)32))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) arr_8 [4LL] [i_6 - 1] [i_6] [i_6 + 1] [i_7 + 2]);
            arr_23 [i_7] = ((/* implicit */int) (~(arr_18 [i_6 + 3])));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [(short)10] [i_7])))) ? (arr_2 [i_6 - 1]) : (arr_18 [i_6])));
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_27 [i_6] = ((/* implicit */unsigned short) (_Bool)1);
            var_28 = ((/* implicit */int) arr_19 [i_6 + 1] [i_8]);
            arr_28 [i_6] [i_8] = ((/* implicit */long long int) arr_2 [i_8]);
            arr_29 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_30 [i_6 + 2] [i_8] [i_8] = (~(((((/* implicit */_Bool) arr_25 [i_6 + 2])) ? (arr_25 [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        }
        var_29 = ((/* implicit */short) -754339852);
        var_30 = ((/* implicit */unsigned short) arr_19 [i_6 + 1] [i_6]);
    }
    var_31 = ((/* implicit */unsigned short) var_13);
    var_32 = ((/* implicit */int) var_5);
}
