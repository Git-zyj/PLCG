/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60352
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
    var_15 = ((/* implicit */short) ((((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_5))))) >> (((var_10) + (5597410186267484079LL)))));
    var_16 &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (26) : (((/* implicit */int) (signed char)45))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
    var_17 &= ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_8)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((int) (signed char)22);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((int) arr_5 [i_0 - 1] [i_1] [i_0 - 1]))) : ((+(arr_4 [i_0] [i_0 + 1])))));
            var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 - 1] [i_0 + 1])))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_20 = (-(((var_10) / (arr_7 [i_0] [i_0] [i_0 + 1] [i_3]))));
                            arr_13 [i_4] [i_0] [i_2] [i_2] [i_2] [9U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-85))) ? (((/* implicit */int) (((~(16777200))) > (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)-59)))))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [(unsigned char)7])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [12ULL] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((long long int) arr_10 [i_1] [8ULL] [i_2] [i_0 + 1] [i_2])) == (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [(_Bool)1])) * (((/* implicit */int) (signed char)84)))))));
                var_21 &= ((/* implicit */signed char) 502888229);
                var_22 -= ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (int i_7 = 4; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_1] = ((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [i_5] [i_5] [i_6] [i_6] [i_7 - 1]))))) ? (((/* implicit */long long int) min((2799372659U), (((/* implicit */unsigned int) -502888261))))) : (((arr_4 [i_7 - 3] [i_0 - 1]) % (arr_4 [i_7 - 3] [i_0 - 1])))));
                        }
                    } 
                } 
                var_24 |= ((((/* implicit */int) (unsigned char)24)) - (((/* implicit */int) (_Bool)1)));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_0] [i_1] [i_8])) ? (arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50)))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_0 + 1])) ? (arr_7 [i_8] [i_1] [8ULL] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0 - 1])))));
                            var_27 = ((/* implicit */unsigned int) (short)27596);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) (+(((unsigned long long int) (short)7740))));
                var_29 = ((/* implicit */unsigned int) ((short) (_Bool)1));
            }
            arr_30 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -714890678)) ? (((/* implicit */int) (unsigned short)40170)) : (((/* implicit */int) (short)-13690)))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 - 1] [i_0 - 1] [18LL] [i_0 - 1] [i_0] [12LL])) || (((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 - 1]) == (((((/* implicit */long long int) 3447499155U)) | (arr_4 [i_0 + 1] [i_0 + 1]))))))));
            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_10 [i_0] [15ULL] [4ULL] [(unsigned char)8] [i_0 + 1]), (arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [9ULL] [i_11]))))));
            arr_34 [i_0] = ((/* implicit */unsigned int) max(((+(arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), ((+(arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
        }
        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [1U]))));
        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [12ULL] [i_0 + 1])) ? (arr_5 [i_0 - 1] [6LL] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7753))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0 - 1]))) <= (arr_5 [i_0 + 1] [(unsigned char)20] [i_0 - 1])))))));
        var_35 = (i_0 % 2 == zero) ? (((/* implicit */short) ((3447499163U) << (((((((/* implicit */_Bool) (signed char)40)) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (502888236)))))) - (9723962348754077830ULL)))))) : (((/* implicit */short) ((3447499163U) << (((((((((/* implicit */_Bool) (signed char)40)) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (502888236)))))) - (9723962348754077830ULL))) - (3956238220200779303ULL))))));
    }
}
