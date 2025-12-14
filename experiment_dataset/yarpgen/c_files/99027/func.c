/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99027
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned short)25172);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (short)2627)), ((-(var_7)))))));
                    var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)42182)), ((+(((/* implicit */int) arr_5 [4])))))))));
                    var_21 = ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned short)42182), (arr_5 [i_0])))), (((3024317414894873709LL) & (1068522274425644299LL)))))) ? (min((var_16), (((((/* implicit */_Bool) -6699490517923172160LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_3 [i_2 + 2] [i_2 - 2] [i_2 - 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (max((-6699490517923172160LL), (576460751766552576LL)))));
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5 + 3] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 1]))))), (arr_12 [i_3] [i_3] [i_0])));
                        arr_17 [i_0] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 134217472LL)) ? (max((min((((/* implicit */long long int) 187720387)), (var_4))), (((/* implicit */long long int) max(((unsigned short)8190), (((/* implicit */unsigned short) (short)21418))))))) : (((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_4])))) & (arr_12 [i_5 - 1] [i_4 + 1] [i_4]))))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */long long int) var_0);
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_25 [i_7] [3U] [i_0] = ((/* implicit */short) arr_22 [i_7] [i_6 - 3] [i_6] [i_0]);
                    arr_26 [i_7] [i_7] [i_0] [i_0] = (unsigned short)19703;
                    var_23 += max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57345)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_1)))) : (558196389)))), (((((/* implicit */_Bool) var_16)) ? (max((var_8), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    arr_27 [i_0] [i_6] [i_6] [i_6] = max((((/* implicit */long long int) 187720397)), (337175550820448272LL));
                    var_24 ^= (unsigned short)52360;
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            arr_39 [i_8] [i_9] [i_9] [i_10] [i_8] [i_10] = max((var_4), (var_3));
                            arr_40 [i_8] [i_8] [i_8] [i_8] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [(unsigned char)7] [i_10])) ? (((/* implicit */int) arr_31 [i_8] [i_9] [i_9])) : (((/* implicit */int) var_1))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-71)) - (((/* implicit */int) (signed char)127)))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) (unsigned short)32734)), (-1LL))), (((((var_8) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))))) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))))))));
                                var_27 = ((/* implicit */long long int) ((unsigned short) max((((((/* implicit */_Bool) -6699490517923172160LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [6U] [i_8]))) : (arr_20 [i_8] [i_8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) arr_5 [i_8]))))))));
                                arr_44 [i_12] [2LL] = ((/* implicit */unsigned short) var_6);
                                arr_45 [i_10] [i_11] [i_9] [i_10] [i_9] [(unsigned short)11] = ((long long int) min((var_15), (((/* implicit */int) var_10))));
                                var_28 = ((long long int) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (min((var_16), (((/* implicit */long long int) (unsigned short)57373)))) : (((((/* implicit */_Bool) var_17)) ? (arr_28 [i_8]) : (var_13)))));
                            }
                            for (long long int i_13 = 2; i_13 < 14; i_13 += 3) 
                            {
                                var_29 = ((/* implicit */unsigned int) arr_38 [i_13 + 2] [i_13 - 1] [i_13 + 1] [i_13 - 1]);
                                var_30 = ((/* implicit */short) var_14);
                            }
                            for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                            {
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3024317414894873709LL)) ? (((-4089450557622308202LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-29897))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) 815159865)) / (arr_7 [i_8])))) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (var_14)))))));
                                arr_52 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_19 [i_8] [i_8] [i_8]) : (var_13)))) ? (((var_4) / (var_14))) : (arr_43 [i_9] [i_14]))))));
                            }
                        }
                    } 
                } 
                arr_53 [i_8] [i_8] [i_8] = ((/* implicit */int) arr_34 [i_8] [i_8]);
                var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (-7171934573631597501LL) : (((/* implicit */long long int) -18949172))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3607221198530941368LL)) ? (((/* implicit */int) (unsigned short)38326)) : (((/* implicit */int) var_18))))) ? (var_15) : (((/* implicit */int) (unsigned short)52383))))) : ((-(((var_13) & (var_8)))))));
            }
        } 
    } 
}
