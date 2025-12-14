/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62735
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) 18446744073709551615ULL);
        arr_3 [i_0] = 18446744073709551615ULL;
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) var_10)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) ((arr_5 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned char)11] [i_2])))));
            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [18LL])))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */long long int) arr_7 [i_3] [3LL] [i_3 - 1]);
                arr_11 [(signed char)2] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(11819736618697689770ULL))))));
            }
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                arr_16 [i_1] [i_2] [i_4 + 2] = var_7;
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [6ULL] [i_4 + 1])))) : (((/* implicit */int) arr_10 [i_4 + 2] [(unsigned short)0] [i_4])))))));
                var_18 = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_4 + 1] [i_4 + 1] [i_4]));
                arr_17 [i_1] = ((/* implicit */unsigned char) ((arr_12 [i_4 + 1] [i_4 + 1] [i_1]) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_12 [7ULL] [i_4 - 1] [i_1]))));
            }
            arr_18 [i_1] = ((/* implicit */unsigned short) arr_14 [i_1]);
            var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_23 [i_1] [i_5] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
            var_20 = ((((/* implicit */_Bool) (+(1058136545714507623ULL)))) ? ((+(10634436964050580765ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125)))))));
        }
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) arr_21 [i_1])) : (arr_5 [i_1])));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_28 [(short)2] [i_6] = ((/* implicit */signed char) arr_19 [i_6] [i_6] [i_6]);
        arr_29 [i_6] = (signed char)34;
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    arr_36 [i_6] [14ULL] [i_8] = ((/* implicit */unsigned short) ((arr_21 [i_7]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-35)) ^ (((/* implicit */int) (signed char)-80)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_40 [i_6] [i_7] [7ULL] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? ((-(((/* implicit */int) (short)31586)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62275)) || (((/* implicit */_Bool) var_4)))))))))) : (((arr_30 [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))))));
                        arr_41 [i_8] = ((/* implicit */unsigned short) (unsigned char)154);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_31 [(signed char)15] [4U]))));
                        var_23 ^= ((/* implicit */long long int) (short)-32763);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(12826393470818687279ULL)))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_14 [i_6 - 1]))) : (((/* implicit */unsigned long long int) arr_34 [i_6 - 1] [i_7] [i_8] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (2165123974U)))))) : (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) arr_1 [i_6] [i_6 - 1])) : (max((((/* implicit */unsigned long long int) var_8)), (15754704867614715590ULL))))))))));
                    }
                    for (signed char i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned char) ((_Bool) var_8));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_19 [i_6] [i_7] [i_10]))) - ((-(((/* implicit */int) (_Bool)1))))))) : ((~(((((/* implicit */_Bool) arr_2 [i_7] [i_6 - 1])) ? (var_5) : (var_2)))))));
                    }
                }
            } 
        } 
        arr_44 [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((signed char) 18446744073709551606ULL)))) <= (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (4365031040874265358ULL) : (((/* implicit */unsigned long long int) ((arr_12 [i_6] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (arr_27 [(signed char)16]))))))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */unsigned int) arr_8 [i_11]);
        var_27 = ((/* implicit */unsigned short) arr_19 [i_11] [i_11 + 1] [i_11]);
    }
}
