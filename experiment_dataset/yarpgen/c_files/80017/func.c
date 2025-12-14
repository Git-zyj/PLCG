/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80017
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
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_1 [i_0 - 3])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (839073950U)))), (10325704645192641595ULL)))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_4 [i_1]))))))) : ((~((-(arr_0 [i_3])))))));
                        var_15 += ((/* implicit */unsigned short) 10325704645192641595ULL);
                        var_16 = ((/* implicit */int) (unsigned char)255);
                        arr_11 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (-1) : (((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) -1)) ? (130944U) : ((~(arr_7 [i_3] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)61683)))) : (((/* implicit */int) arr_4 [i_1])))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) var_4);
        arr_15 [i_4] [i_4] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)28498)) ? (393216U) : (33521664U)))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4] [i_4]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((_Bool) max((((unsigned int) (unsigned short)64093)), (((/* implicit */unsigned int) (+((-2147483647 - 1))))))));
                    /* LoopSeq 4 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] = (unsigned short)19080;
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1443))))) ? (((/* implicit */int) ((unsigned short) (+(-341416410))))) : (((/* implicit */int) (_Bool)0))));
                        var_20 = ((/* implicit */unsigned int) var_9);
                        var_21 = ((/* implicit */short) ((unsigned short) (unsigned char)157));
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23696))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))));
                        arr_31 [(_Bool)1] [(_Bool)1] |= var_7;
                        var_22 = ((unsigned short) ((((((/* implicit */int) (unsigned char)255)) << (((536608768U) - (536608761U))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_9])) : (((/* implicit */int) var_12))))));
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */int) 18446744073709551607ULL);
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        arr_35 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((arr_23 [i_5] [i_5] [i_5] [i_5]) ? (18014398509481984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_19 [i_6] [i_5])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5])))))))) ? (arr_2 [i_5] [i_5] [i_5]) : (((/* implicit */int) (unsigned short)31676))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)193))))) : (4294967286U)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_9 [i_5] [i_5] [i_7 - 1] [i_5] [i_5] [i_6])) * (((((/* implicit */_Bool) arr_7 [i_10] [i_7] [i_6] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_5]))))))));
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_10 [i_7 + 1] [i_7] [i_7] [i_7])))) ? (((((/* implicit */_Bool) (unsigned short)16881)) ? ((-(4037828515U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])) ? (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (0U))))))));
                        var_25 = ((/* implicit */unsigned char) arr_16 [i_5] [i_6]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    arr_42 [i_5] = ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_7)))))) ? ((~((~(arr_22 [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))));
                    arr_43 [i_5] = ((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) ((unsigned char) (+(1))))) : (((arr_38 [i_12 - 1] [i_5]) ? (arr_40 [i_5] [i_5] [i_5]) : (var_8)))));
                    var_26 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_12 - 1])) ? (((/* implicit */int) arr_5 [i_5] [i_12 - 1] [i_13])) : (((/* implicit */int) (unsigned short)39217))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (_Bool)1)) : (-123388767)))) ? (((((/* implicit */_Bool) (+(2733651630U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)97))))) : (((((/* implicit */_Bool) 2147483634)) ? (5241752524336816573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65137)) ? (((/* implicit */unsigned int) 0)) : (0U)))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_5)))))))));
    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1143087612U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53770)) ? (((/* implicit */int) (unsigned short)51776)) : (((/* implicit */int) (unsigned short)58584))))) : (3455893356U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_9)) : (3455893346U)))))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (4261445632U) : (((1143087612U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), (((unsigned short) ((((/* implicit */_Bool) 4261445641U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))));
}
