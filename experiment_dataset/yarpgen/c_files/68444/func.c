/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68444
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) (short)(-32767 - 1));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = arr_5 [i_0] [i_1];
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
                }
            } 
        } 
        arr_7 [i_0] [18ULL] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_5))) != (((/* implicit */int) var_9))));
    }
    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        arr_10 [i_3 - 2] = 4637335102962411669ULL;
        var_16 = ((/* implicit */int) min((var_16), ((((((-(((/* implicit */int) (unsigned char)64)))) * (((/* implicit */int) (short)-5276)))) % (((/* implicit */int) (short)8456))))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_17 = ((/* implicit */int) max(((short)22780), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_22 [(_Bool)1] [i_4] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned char) arr_2 [i_7 - 1]));
                            arr_23 [i_4] [i_5] = ((/* implicit */short) 9038926824612831106LL);
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned short) arr_2 [i_5]);
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_30 [i_4] [i_5] [i_9 - 1] [i_10] [i_4] = ((/* implicit */unsigned short) arr_1 [i_9 - 1] [i_9 + 1]);
                    arr_31 [i_4] [i_4] [0] [i_10] [i_4] [5] = ((/* implicit */short) (unsigned char)28);
                    arr_32 [i_10] [i_4] [i_4] [i_4] = -170773659;
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((-8733344074541837910LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)23))));
                    arr_37 [i_4] [(signed char)3] [i_11] = ((/* implicit */int) ((unsigned long long int) var_5));
                    var_20 *= ((/* implicit */int) ((_Bool) arr_34 [i_4] [(unsigned char)3] [i_9]));
                }
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    arr_41 [i_4] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_39 [i_4] [i_5] [i_4] [i_9])))));
                    arr_42 [i_4] [4LL] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 11671395967572596277ULL)) ? (15398596824497378472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64554)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) (unsigned char)82)) : (9187343239835811840ULL)));
                }
                arr_43 [i_4] [i_4] = ((/* implicit */int) ((long long int) var_4));
            }
        }
        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
            {
                arr_48 [i_4] [i_13] [i_14 + 1] = ((/* implicit */unsigned long long int) arr_35 [i_14 + 1] [(unsigned short)5] [i_13] [i_13] [i_4] [i_4]);
                arr_49 [i_4] [i_13] = ((/* implicit */long long int) ((arr_45 [i_4] [i_14] [i_4]) / (((/* implicit */unsigned long long int) ((int) (unsigned short)8576)))));
            }
            arr_50 [i_4] [i_4] = min((((/* implicit */unsigned long long int) ((arr_26 [(signed char)6] [i_13 + 1] [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)93))))))))), (((unsigned long long int) 0ULL)));
        }
        arr_51 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) 693079942)));
    }
    var_22 = ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -1838769764))) || ((((_Bool)1) || (((/* implicit */_Bool) 1243708630))))))) | (((/* implicit */int) var_6)));
    /* LoopSeq 1 */
    for (short i_15 = 1; i_15 < 23; i_15 += 1) 
    {
        var_23 += ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) var_2)) + (arr_53 [i_15] [17ULL]))) >= (((/* implicit */int) ((unsigned short) (signed char)-118))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 1) 
        {
            arr_56 [i_15] [i_15] [i_16] = ((/* implicit */int) ((signed char) ((signed char) (-2147483647 - 1))));
            arr_57 [i_15] [(unsigned short)2] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8177465473866039058LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))));
            var_24 += ((/* implicit */short) max((((((/* implicit */_Bool) (short)-32747)) ? (((((/* implicit */int) arr_54 [(unsigned char)16])) | (((/* implicit */int) (unsigned short)64513)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28146))) >= (18446744073709551614ULL)))))), (((((/* implicit */int) var_9)) & (((((/* implicit */_Bool) arr_55 [24ULL] [i_16 + 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)11714))))))));
        }
        for (int i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) var_9);
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)227)), ((unsigned short)64512))))));
            arr_60 [i_17] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_52 [i_15])) ? (((/* implicit */int) arr_59 [i_17] [i_17])) : (((/* implicit */int) (unsigned char)245)))) ^ (((0) & (var_5))))), (((/* implicit */int) var_10))));
        }
        for (int i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            var_27 = ((/* implicit */signed char) 8056856771065618034LL);
            arr_63 [i_15 - 1] |= ((/* implicit */long long int) ((int) ((_Bool) ((((/* implicit */_Bool) 14299258631171565065ULL)) ? (((/* implicit */int) (unsigned short)64512)) : (arr_53 [i_15 + 2] [(unsigned short)24])))));
            arr_64 [i_15] = ((/* implicit */unsigned long long int) var_11);
        }
    }
    var_28 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-5080)))))))));
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((((/* implicit */_Bool) ((unsigned short) 0LL))) ? (((int) (signed char)-91)) : (((/* implicit */int) var_3))))));
}
