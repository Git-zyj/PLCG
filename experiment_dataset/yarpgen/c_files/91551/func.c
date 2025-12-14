/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91551
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
    var_10 = min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)167))))), ((~(-2147483640)))))) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_5 [(unsigned char)9] [i_0] [(unsigned char)9] = ((/* implicit */long long int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_4 [i_0] [i_1]))), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))), (var_2)));
            var_11 = ((/* implicit */unsigned long long int) (-(322531477)));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 1] [(unsigned char)14])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-63)))), (max(((-(2147483631))), (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [16ULL]))) != (max((arr_1 [i_3]), (arr_3 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)31)) == (-198705108))) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_3 + 1])) : (arr_6 [i_0] [i_0] [i_0]))))));
                    var_14 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2559249960U)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_2])) : (var_7)))) * (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_3] [5])), (arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))));
                    var_15 = -2147483638;
                }
                for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    arr_13 [i_0] [(unsigned short)10] [i_1] [(unsigned short)10] [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) arr_12 [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4 - 3])) - (max((((/* implicit */unsigned int) arr_8 [i_2] [i_2])), (var_8))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(arr_6 [(signed char)7] [(unsigned char)1] [2U]))))));
                    var_17 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) (unsigned short)127)), (0ULL)))));
                }
                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_9 [i_0] [i_2] [i_2]), (((/* implicit */short) arr_0 [i_1])))))));
            }
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            var_20 = ((arr_12 [i_5] [i_5] [i_0] [i_0]) & (((((/* implicit */int) arr_8 [(signed char)5] [(signed char)5])) ^ (((/* implicit */int) arr_14 [16] [i_5] [i_5])))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_12 [10] [i_0] [i_5] [i_5])) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) - (var_5)))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_19 [i_6] [i_0] = ((unsigned int) arr_6 [(short)12] [i_0] [i_0]);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_4))));
        }
        var_23 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65409))));
    }
    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned int) ((short) ((unsigned int) (short)5942)));
        arr_23 [i_7] [i_7 - 1] = ((/* implicit */unsigned long long int) arr_10 [i_7] [i_7] [i_7 + 1] [i_7]);
        arr_24 [6U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */int) (short)32144)) : (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_20 [i_7]))))))) ? (((/* implicit */int) ((short) ((arr_6 [i_7 + 1] [i_7] [i_7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */int) arr_9 [6LL] [(signed char)2] [i_7]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_28 [i_7] [i_7] [i_7] = ((/* implicit */int) (short)-10325);
            var_24 = ((arr_1 [(_Bool)1]) >= (((/* implicit */long long int) var_5)));
        }
        /* vectorizable */
        for (short i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_7] [i_9 + 1] [i_9])) > (((/* implicit */int) arr_0 [i_7])))) && (((/* implicit */_Bool) var_4))));
            arr_31 [i_7] [i_7] [i_7] = arr_20 [i_7];
            var_26 = ((/* implicit */short) ((unsigned char) arr_0 [i_7 - 1]));
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_6 [i_7] [i_10] [(unsigned char)4]))));
            arr_34 [i_7] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_7] [i_7] [i_10])) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)23184)))))))));
        }
    }
    var_28 = ((/* implicit */int) min((var_5), (((/* implicit */unsigned int) (-(max((-2147483640), (((/* implicit */int) (unsigned char)51)))))))));
    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_1)))) <= (((/* implicit */int) (unsigned short)290)))))) <= (var_5)));
    var_30 -= (~((-((+(((/* implicit */int) var_4)))))));
}
