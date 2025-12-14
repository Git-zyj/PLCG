/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99774
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
    var_11 = ((/* implicit */unsigned short) (-2147483647 - 1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0 + 2]))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)4080)) + (((/* implicit */int) arr_0 [i_0 + 4]))));
        var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_1])) <= (((/* implicit */int) (short)-32720)))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 3] [i_2])) > (((/* implicit */int) var_1))));
                    arr_11 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (2475656905U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [5ULL] [i_0 + 1])) ? (arr_6 [i_0] [i_1] [13LL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)12])))))));
                }
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    arr_14 [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)192)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1] [(signed char)14]))))) : (((/* implicit */int) arr_5 [i_0 + 4] [i_0] [(signed char)7] [i_4 + 1]))));
                    arr_15 [i_0] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((arr_10 [i_0 - 1] [i_1] [i_2] [i_4 + 1]) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_8 [i_4] [i_2 - 1] [i_0] [i_0]))));
                    var_16 = ((/* implicit */unsigned int) ((arr_13 [(short)9] [i_1] [i_4 - 1] [i_0] [i_2] [i_2 - 1]) << (((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_3 [(unsigned short)6] [i_1])) : (((/* implicit */int) (unsigned char)0)))) - (51760)))));
                    arr_16 [i_0] [(signed char)1] [i_0] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2 - 1])) | (((/* implicit */int) arr_10 [i_1] [(unsigned short)10] [i_1] [i_2 - 1]))));
                }
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_17 = ((short) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)-2746)) : (((/* implicit */int) arr_9 [(unsigned char)18] [i_1] [i_2] [(_Bool)1] [i_5]))));
                    arr_20 [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_10 [i_0 + 3] [(short)18] [(short)18] [i_0]))));
                    arr_21 [i_0] = ((/* implicit */int) ((arr_17 [i_1] [i_2 - 1] [i_5] [i_0]) ^ (arr_17 [i_1] [i_2 - 1] [i_2] [i_0])));
                }
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_26 [18] [i_1] [i_0] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (short)23757))));
                    arr_27 [i_0] [i_0] [i_2 - 1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [(unsigned short)18] [i_1] [i_1] [i_1]))));
                }
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_7] [i_0] [i_8] = ((/* implicit */unsigned char) ((arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2] [i_2 - 1] [i_2] [i_0 + 2])))));
                        var_18 = ((/* implicit */unsigned char) arr_24 [i_0] [(unsigned char)14] [i_0] [i_7] [(unsigned char)14] [i_8]);
                    }
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)17659)) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_0] [i_0])))) ^ ((+(((/* implicit */int) arr_22 [i_1] [i_1] [i_2 - 1] [(short)6]))))));
                }
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-17575)) || (((/* implicit */_Bool) (unsigned short)65532))))) >= (((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_0])))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((arr_17 [i_0] [i_0 + 4] [i_9 - 1] [i_1]) - (arr_17 [i_0] [i_0 + 3] [i_9 + 3] [i_1]))))));
                    var_21 += ((/* implicit */unsigned int) arr_4 [i_1]);
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_18 [i_9 - 1] [i_0] [i_0 + 1] [i_2 - 1] [i_1] [(unsigned short)2]))));
                    var_22 = ((/* implicit */signed char) ((((var_3) + (arr_28 [i_0] [i_0]))) / (((arr_35 [i_0] [i_0] [21U] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))));
                }
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0 + 4] [i_0 + 4] [i_0])) / (((/* implicit */int) arr_5 [(unsigned char)17] [i_0 + 1] [i_0 + 1] [i_2]))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) arr_24 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_10]);
                var_25 = ((/* implicit */unsigned long long int) ((2147483630) >> (((((/* implicit */int) ((unsigned short) (unsigned char)165))) - (139)))));
            }
            var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)14] [i_1]))) + (arr_34 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 4])));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [7LL] [i_0 + 3] [i_0]))))) > (arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 4] [i_0])));
    }
}
