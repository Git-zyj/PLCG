/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55338
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
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0 + 4])) < (((/* implicit */int) arr_4 [i_0 + 3])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 - 1]))))) : (((((/* implicit */_Bool) 1550377904248187509LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (3491655930299477269ULL)))));
            var_15 = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned int) var_6)), (var_7))), (((/* implicit */unsigned int) (+(var_3)))))), (((/* implicit */unsigned int) (_Bool)1))));
            arr_6 [i_1] = ((/* implicit */int) var_0);
            var_16 = ((/* implicit */_Bool) arr_4 [5ULL]);
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (short)27994)) : (1111272145)))) ? ((-(((((/* implicit */_Bool) (unsigned short)62926)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)62923))))) ? (((unsigned int) (signed char)-127)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62907))))))));
        }
        var_17 = ((/* implicit */unsigned char) arr_0 [10U] [i_0]);
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 4; i_3 < 11; i_3 += 1) 
        {
            arr_12 [(_Bool)1] [(unsigned short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))));
            arr_13 [i_3] [1LL] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_9), (var_9))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_17 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_4), (arr_10 [i_4]))))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) & (((((/* implicit */_Bool) (unsigned short)62893)) ? (var_7) : (var_7)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1550377904248187509LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_4])) : (var_10))))))))));
            arr_18 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2609))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) : (12570951074775284488ULL)));
            arr_21 [i_5] [i_2] = ((/* implicit */_Bool) var_11);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [i_2])) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_5]) : (arr_9 [i_5])))) : (((((/* implicit */_Bool) 538402616U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
            arr_22 [0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)2640)), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_5]))) : (arr_8 [i_2])));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2626091688371990473LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1550377904248187509LL)))) ? (min((((/* implicit */unsigned int) arr_0 [i_2] [i_5])), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [7LL]))))))));
        }
        arr_23 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)97))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_20 [6U]))));
        var_23 = ((/* implicit */short) arr_9 [i_2]);
    }
    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        arr_27 [16LL] |= ((/* implicit */int) (short)-3408);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (signed char)-3))))) : (((12570951074775284477ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2609)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_4))))) : ((-(((/* implicit */int) arr_24 [i_6])))))) : ((-(((/* implicit */int) var_11))))));
        arr_28 [i_6] = ((/* implicit */unsigned long long int) var_11);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_26 = ((/* implicit */_Bool) var_6);
                arr_38 [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_33 [i_7] [i_8])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                arr_39 [(short)8] [i_7] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (signed char)71)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [2ULL]))) : (5875792998934267150ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_2 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))))))));
                var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                var_28 += ((/* implicit */unsigned short) ((var_2) + (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) (unsigned short)62927)))))));
            }
            for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_29 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8224480073276447012LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (var_8) : (var_8))));
                arr_42 [i_7] [i_7] [i_10] [i_7] = (-(((/* implicit */int) (unsigned char)217)));
                arr_43 [i_7] = ((/* implicit */unsigned char) var_7);
                var_30 = ((/* implicit */unsigned short) var_1);
            }
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_46 [i_7] [11] [i_8] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_29 [i_7]), (arr_29 [i_7]))))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7 - 1] [i_8 + 2])) ? (((/* implicit */int) arr_36 [i_7] [i_7] [i_7 - 1] [i_8 + 2])) : (((/* implicit */int) arr_36 [i_7] [i_7] [i_7 - 1] [i_8 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)65521)))) % (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (arr_1 [i_7 - 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
            }
        }
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5490)))))) ? (var_1) : (((((/* implicit */_Bool) (short)16128)) ? (-7378748784160116577LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    }
    var_33 ^= ((/* implicit */unsigned long long int) ((short) var_11));
    var_34 = ((/* implicit */int) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
