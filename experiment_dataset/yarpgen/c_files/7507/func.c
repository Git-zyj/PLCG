/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7507
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [(signed char)17] [(short)22] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_13 = var_12;
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
            {
                arr_11 [i_0] = ((/* implicit */_Bool) (-(arr_3 [i_2 + 1])));
                arr_12 [i_2 + 2] [22ULL] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-27792))));
                arr_13 [i_0] [i_0] [i_2] [i_2 + 2] |= ((/* implicit */short) ((arr_9 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) / (arr_9 [i_1] [i_2 + 2] [i_2] [i_2])));
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)27791))));
            }
            for (short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) (short)-27782);
                arr_18 [i_3] [i_3] [i_3 + 1] = ((arr_6 [i_3 - 1]) >> (((arr_0 [i_3 + 2]) - (7697356952500238474LL))));
                arr_19 [(signed char)8] [22ULL] [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_2 [i_0]))))));
                var_15 = ((signed char) arr_15 [i_3] [i_3 + 2] [i_3 - 1]);
            }
            for (short i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
            {
                arr_24 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27782)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-22266)))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32)) ? (((((/* implicit */_Bool) (short)20890)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27782))) : (arr_15 [2LL] [i_1] [(short)12]))) : (((/* implicit */long long int) ((/* implicit */int) (short)27782)))));
            }
            for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_3 [i_5]) & (arr_15 [i_0] [i_1] [i_5])));
                arr_28 [i_5] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_15 [(short)21] [i_5 + 2] [i_0]) : (arr_15 [i_0] [i_5 + 2] [i_5 + 2])));
            }
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0])) + (((/* implicit */int) arr_22 [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) -2147483633))))));
        }
        for (short i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                arr_36 [i_0] [i_7 + 4] = ((/* implicit */_Bool) (unsigned short)41645);
                arr_37 [i_0] [i_6 + 1] [i_6 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_6] [(_Bool)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0]))) : (arr_8 [13LL] [13LL])))));
            }
            for (int i_8 = 3; i_8 < 21; i_8 += 2) 
            {
                var_18 = ((/* implicit */short) (unsigned char)255);
                var_19 -= ((/* implicit */_Bool) var_2);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_8] [i_8 - 3] [i_8 + 2] [i_8 - 2])) >> (((((/* implicit */int) arr_34 [i_8] [i_8 - 3] [i_8] [(short)22])) - (144)))));
            }
            arr_41 [i_6] [(short)5] = ((/* implicit */unsigned char) ((arr_29 [i_0] [i_0] [i_6]) & (((/* implicit */int) (unsigned char)0))));
        }
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_38 [i_0] [(short)8])) : (((/* implicit */int) arr_38 [i_0] [2LL]))));
    }
    var_22 |= ((/* implicit */long long int) var_8);
}
