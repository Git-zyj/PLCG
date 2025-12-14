/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78941
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
    var_13 ^= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) max((365047896409236164ULL), (((/* implicit */unsigned long long int) (signed char)-74)))))), ((-(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] = ((unsigned short) ((unsigned char) arr_4 [i_3] [i_3] [(unsigned short)8] [i_3]));
                        var_14 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (9223372036854775800LL)));
                        var_16 -= (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_2 + 2] [i_2]))) % ((~(((/* implicit */int) arr_2 [i_0]))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_17 ^= min(((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_5])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0 - 1] [i_5])))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_1 - 1])), (arr_13 [i_0 - 1] [12LL] [i_2] [i_4] [i_5]))))));
                            arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1])) ? (((((/* implicit */_Bool) -2025062246)) ? (-150515322) : (((/* implicit */int) (signed char)92)))) : ((+(((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) arr_2 [i_4])))))))));
                            var_19 = ((/* implicit */signed char) min((((((/* implicit */int) max(((_Bool)1), (arr_6 [i_0] [i_1] [i_4] [i_4])))) % (((/* implicit */int) ((arr_13 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4])))))))), (((/* implicit */int) max((arr_6 [i_2] [i_1 - 1] [(signed char)4] [i_2 + 2]), (arr_6 [i_2 + 1] [i_1 - 2] [12LL] [i_2 - 2]))))));
                            var_20 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)50006))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            var_21 -= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_13 [i_1] [i_1 + 3] [(short)8] [i_2 - 1] [i_2 + 3]))), ((-((-(((/* implicit */int) (_Bool)1))))))));
                            arr_18 [i_0] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [i_4] [i_6]);
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_13 [i_0] [i_0 + 2] [i_2 + 1] [i_0 + 2] [i_6]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (962072674304LL)));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2 + 2])) >= (((/* implicit */int) arr_2 [i_2 + 2])))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) arr_7 [i_2 + 2] [i_4])))));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (signed char)102))));
                        arr_22 [i_0] [i_1] [i_2] [i_4] [(unsigned short)10] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 3] [i_1 - 1]))))), ((~((-(((/* implicit */int) arr_0 [i_0] [i_2]))))))));
                    }
                    for (short i_8 = 3; i_8 < 11; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_0 + 4] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                        var_27 *= (signed char)-116;
                        var_28 *= ((/* implicit */long long int) min((arr_13 [i_8] [i_1] [i_1] [i_1] [i_0 + 3]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [i_8 - 2] [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_16 [i_0] [i_0])))))))));
                        arr_27 [i_0 + 2] [(_Bool)1] [i_2 + 3] [i_8 - 2] = ((/* implicit */signed char) ((unsigned short) arr_20 [i_1 + 2] [i_0 + 4] [i_2 + 2] [i_8 - 1] [i_1] [(unsigned short)10]));
                    }
                    for (unsigned short i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_29 = arr_3 [i_9] [i_9] [i_9];
                            arr_33 [i_9] [i_1] [i_9] [i_9 - 1] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((arr_29 [(unsigned short)7]), (((/* implicit */long long int) (signed char)-59)))))))));
                        }
                        arr_34 [i_0] [(signed char)1] [i_9] [(unsigned char)3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_1] [(_Bool)0] [i_2] [i_2] [i_9] [i_0])) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_28 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_2] [i_9])))) : (((/* implicit */int) min(((_Bool)0), (arr_4 [i_0] [i_0] [i_2 + 1] [i_2 + 1]))))))));
                        var_30 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (short)-8161)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) / (arr_13 [i_0] [i_1] [11LL] [i_9 - 3] [i_9 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_28 [i_9] [i_2] [i_2 + 1] [i_1 - 1] [i_0]))))))) : (((/* implicit */unsigned long long int) arr_14 [8LL] [i_1] [i_1] [2ULL] [i_1]))));
                        var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 2] [i_1]))))) ? ((-((~(((/* implicit */int) (_Bool)1)))))) : ((-(min((arr_7 [(unsigned short)1] [i_9]), (517808063)))))));
                    }
                    var_32 = ((/* implicit */signed char) (~(6371246315311730056ULL)));
                }
            } 
        } 
    } 
}
