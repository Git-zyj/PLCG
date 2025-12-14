/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60389
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((1596374515) * (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_9))))));
        var_12 ^= ((/* implicit */long long int) var_3);
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [(short)14] [3] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) <= (var_5)));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+((~(var_5))))))));
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)32899)) ? (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (2044U))) : (((/* implicit */unsigned int) max((arr_3 [i_0]), (var_8))))))));
            var_15 = (unsigned short)61989;
        }
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            arr_11 [i_3] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) var_2);
            arr_12 [i_0] [i_3] [4U] = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_3]);
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_16 *= ((/* implicit */short) ((int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((var_0) ^ (((/* implicit */int) arr_0 [i_4])))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_11))));
            arr_15 [(signed char)2] [i_4] &= ((/* implicit */short) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_4))));
            var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (arr_5 [i_0])))) ? (((unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [15ULL])) << (((arr_3 [(unsigned short)12]) + (1843657801)))))) : (((/* implicit */unsigned long long int) var_8))));
            var_19 += ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) ((int) arr_7 [i_4]))) ? (((((/* implicit */_Bool) (unsigned short)28769)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = arr_19 [i_6];
                var_21 = ((/* implicit */_Bool) (signed char)-118);
                arr_21 [i_0] = ((/* implicit */int) ((_Bool) ((var_8) | (var_0))));
            }
            for (short i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    arr_27 [(signed char)16] [(unsigned short)12] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [(unsigned short)5])) ? (((/* implicit */int) (unsigned short)3547)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!((_Bool)1)))) : (var_1)));
                    arr_28 [9] [(short)7] [i_7 - 1] [14ULL] [i_7] [(short)6] = var_6;
                    arr_29 [i_0] [i_5] [i_8] = ((/* implicit */unsigned short) ((short) arr_4 [i_0] [i_5]));
                }
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_33 [i_7] [17LL] [i_7 - 1] [14LL] [i_9] [i_5] = ((/* implicit */unsigned short) ((_Bool) arr_24 [(short)5] [i_7] [i_7 + 4] [i_7 + 1]));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0])) ? (arr_24 [i_0] [i_5] [i_7 + 4] [(short)8]) : (arr_24 [i_0] [i_0] [i_0] [i_0])));
                    arr_35 [3U] [i_0] = ((/* implicit */unsigned short) var_10);
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0])) / (((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */long long int) 2984866088U)) : (((long long int) -1612661026)))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_7 + 1] [i_7 + 3] [i_9] [i_9]) : (((/* implicit */int) var_7))));
                }
                for (unsigned int i_10 = 3; i_10 < 16; i_10 += 2) 
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17] [i_0] = ((/* implicit */_Bool) ((unsigned short) var_11));
                    arr_39 [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (~(((var_8) ^ (((/* implicit */int) var_11))))));
                    arr_40 [5LL] [5LL] [i_7 + 1] [i_10] [i_0] = ((/* implicit */_Bool) arr_36 [i_5] [i_10 - 1] [i_10] [i_10]);
                    var_24 = ((/* implicit */long long int) ((arr_9 [i_0] [i_7 + 1] [i_10 - 2]) << (((arr_9 [i_0] [i_7 + 2] [i_10 - 1]) - (402039760)))));
                }
                arr_41 [i_0] [i_5] [(_Bool)1] = (-(((/* implicit */int) arr_16 [i_0] [(unsigned char)11] [i_7])));
                arr_42 [i_0] [i_5] [i_5] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) arr_30 [i_0] [i_7 + 1] [i_7])) : (((/* implicit */int) (unsigned short)0))));
                arr_43 [i_7] [12LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_0 [i_0]))));
            }
            for (short i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
            {
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0] [i_11])) : (((/* implicit */int) arr_7 [i_11 - 1]))));
                var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) arr_0 [(short)13])))))));
                arr_47 [i_0] [1U] [i_11 + 3] = ((/* implicit */unsigned int) -1965720856);
                arr_48 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_11 - 1] [i_11] [0ULL])) ? (((/* implicit */int) var_7)) : (arr_18 [i_11 + 4] [i_11] [i_11 + 1])));
                var_27 = ((/* implicit */int) max((var_27), ((-(arr_9 [i_0] [i_11 - 1] [i_11 - 1])))));
            }
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_51 [i_5] [i_5] [8ULL] [8] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [(short)17] [i_12] [i_12]))));
                arr_52 [i_12] &= ((/* implicit */short) ((((/* implicit */int) (signed char)-112)) | (((((/* implicit */int) var_7)) / (((/* implicit */int) var_9))))));
                var_28 ^= ((unsigned short) (unsigned short)18338);
                arr_53 [i_0] [8U] [8U] &= (short)-28663;
            }
            arr_54 [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_5] [i_5]))));
            var_29 = (((-(9223372036854775807LL))) % (((/* implicit */long long int) ((((/* implicit */int) (short)28286)) * (((/* implicit */int) var_2))))));
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3545527482U)));
            var_31 ^= ((/* implicit */int) ((short) (+(var_5))));
        }
        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (var_0)))))));
    }
    /* vectorizable */
    for (long long int i_13 = 4; i_13 < 14; i_13 += 4) 
    {
        arr_57 [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_13])) / (var_0)));
        var_33 -= ((/* implicit */long long int) ((unsigned long long int) var_11));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((int) var_4)))));
    }
    var_35 -= ((/* implicit */short) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) ^ (-1LL)))) ? (2113355466U) : (((/* implicit */unsigned int) var_0))))));
}
