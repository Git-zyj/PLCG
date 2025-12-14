/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68843
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_15 += ((short) min(((short)24985), (arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)24982))))) ? (((unsigned long long int) arr_1 [i_0 + 1])) : (((/* implicit */unsigned long long int) 2388757257U)))))));
            var_17 = ((/* implicit */short) max((var_17), (arr_4 [i_0] [(short)4])));
        }
        var_18 = ((/* implicit */unsigned int) (~(var_4)));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_2])) ? (1127593100U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24986)))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_19 = ((/* implicit */short) var_5);
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(short)12] [i_2] [i_2] [i_5] [i_4] [(short)12])) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_15 [(short)1] [i_4] [i_4] [i_3] [i_2] [0ULL])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) >= (((((/* implicit */_Bool) arr_7 [(short)5] [(short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)5] [i_5]))) : (18320491417168120454ULL)))));
                        arr_19 [i_4] [i_4] = ((/* implicit */short) 35106545U);
                    }
                }
                for (short i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24986)) | (((/* implicit */int) (short)4360)))))));
                    arr_23 [i_7] [i_4] [i_4] [i_4] [i_2] [(short)12] = ((/* implicit */short) (~(arr_7 [i_7 + 4] [6ULL])));
                    arr_24 [i_2] [i_2] [i_2] [i_4] = (short)18;
                }
                for (short i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        arr_31 [(short)11] [(short)11] [i_4] = ((/* implicit */short) arr_12 [i_2] [i_4] [i_4]);
                        arr_32 [i_4] [i_4] [i_4] = ((/* implicit */short) ((unsigned int) (short)8));
                        var_23 ^= ((/* implicit */short) ((arr_28 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [(short)5] [2ULL] [i_9]) << (((((/* implicit */int) (short)16175)) - (16141)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) arr_6 [5ULL] [5U]);
                        var_25 -= ((/* implicit */short) arr_21 [i_8] [i_8 + 4] [i_8] [(short)5] [i_8 + 2]);
                        arr_35 [6U] [i_8 + 4] [i_4] [(short)11] [(short)11] = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                        var_26 *= ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
                    }
                    arr_36 [i_2] [5U] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_4] [(short)1])) < (((/* implicit */int) arr_4 [i_4] [(short)12]))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16200)) ? (18320491417168120432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18)))));
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (short)-3926)) : (((/* implicit */int) (short)-20060))));
                }
                for (short i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_11] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-25014)) % (((/* implicit */int) (short)-27))));
                    arr_42 [i_2] [2ULL] [(short)6] [i_4] [i_11] = ((/* implicit */short) ((unsigned long long int) (short)-18237));
                    arr_43 [i_2] [i_4] [i_2] [i_2] [12U] [i_11] = ((/* implicit */unsigned int) (~(arr_28 [i_3] [i_3] [i_11 + 1] [i_11 + 1] [i_3] [(short)9] [12ULL])));
                    var_29 = ((/* implicit */short) ((unsigned long long int) arr_39 [i_11 + 1] [11U] [i_11 + 3] [i_11 - 1] [i_11 + 2]));
                }
                /* LoopSeq 3 */
                for (short i_12 = 1; i_12 < 10; i_12 += 4) 
                {
                    var_30 -= ((/* implicit */unsigned int) 15ULL);
                    var_31 = ((arr_17 [i_4] [(short)12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [(short)10]) & (arr_17 [i_2] [i_4] [i_4] [i_12 + 3] [i_12 + 2] [i_12 + 2]));
                }
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_29 [i_4] [i_4] [i_4] [(short)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16181)) & (((/* implicit */int) (short)-16179))))))))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    var_34 &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 18320491417168120454ULL)) && (((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) arr_38 [i_2] [i_3] [i_14]))));
                    var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)1] [i_4]))) <= ((-(arr_45 [i_3])))));
                    arr_51 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_10 [11U] [i_4] [i_3]);
                }
                var_36 = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_4] [0ULL] [i_2] [i_2]);
                var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
            }
            var_38 = ((/* implicit */unsigned long long int) var_8);
            arr_52 [i_2] [i_2] [8U] = ((/* implicit */short) ((((18446744073709551613ULL) >> (((4259860758U) - (4259860749U))))) - (((((/* implicit */_Bool) 12349565233268876507ULL)) ? (((/* implicit */unsigned long long int) 1303925495U)) : (534426039519874577ULL)))));
            var_39 &= var_2;
        }
        for (short i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            arr_55 [i_2] = ((/* implicit */short) 18446744073709551596ULL);
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) var_1))));
            arr_56 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16160))) : (16351501128219361610ULL)))) ? (var_5) : (var_9)));
        }
    }
    for (short i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
    {
        var_41 = var_10;
        var_42 += ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)2306))))) > (min((arr_2 [i_16]), (((/* implicit */unsigned int) (short)-5294))))));
        arr_60 [1ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (min((((/* implicit */unsigned int) arr_57 [(short)10])), (arr_2 [i_16]))) : (arr_2 [17U])))) && (((((/* implicit */int) var_2)) == (((((((/* implicit */int) (short)-21362)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_16])) - (18352)))))))));
    }
    for (short i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
    {
        arr_63 [i_17] [4ULL] = (~(((((/* implicit */_Bool) arr_5 [i_17])) ? (arr_0 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [(short)12]))))));
        arr_64 [i_17] = ((/* implicit */unsigned long long int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_4 [18U] [i_17])) > (((/* implicit */int) arr_4 [(short)16] [(short)16]))))), (arr_4 [(short)2] [i_17])))))));
    }
    var_43 = ((/* implicit */short) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
