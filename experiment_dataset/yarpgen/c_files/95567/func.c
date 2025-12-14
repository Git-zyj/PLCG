/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95567
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) (unsigned char)190))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190))))) == (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)90)))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) arr_1 [i_1 + 2] [10LL]))))));
                arr_5 [i_1] [i_0 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) : (arr_2 [i_0 + 1])))) || (((/* implicit */_Bool) (~(((arr_2 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_4 - 2] [i_4 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_6 [i_2 + 1]) < (arr_6 [i_3]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 0ULL))));
                                var_18 = max((min(((-(arr_11 [i_2 + 1] [i_3] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (arr_18 [i_3] [i_5 + 3] [i_4 + 3] [i_3] [i_3] [i_2 + 1])))))), (((/* implicit */unsigned long long int) (~(arr_6 [i_5 - 1])))));
                                arr_20 [i_2] [i_5] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) max(((((((~(arr_12 [i_6] [i_4 - 1] [(short)6]))) + (9223372036854775807LL))) << (((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */long long int) (~((~(arr_6 [i_2]))))))));
                                arr_21 [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))))) < ((-(arr_6 [i_2 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_28 [i_8] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (signed char)87)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)207))))) : (arr_13 [i_2] [i_4 - 1] [i_2])));
                                var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(arr_24 [i_2] [i_2] [i_4] [i_8]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) ((min((1224139059U), (((/* implicit */unsigned int) (signed char)100)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9] [(unsigned char)6] [i_3] [i_2])))));
                        arr_31 [i_2 + 1] [i_2] [i_4] [(unsigned short)1] [i_9] [i_9] = ((/* implicit */long long int) ((((max((arr_23 [i_3] [i_3] [i_4] [i_3]), (((/* implicit */unsigned int) arr_6 [i_2])))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_27 [i_9] [i_2]))))))) || (((/* implicit */_Bool) min((arr_6 [i_2 + 1]), (arr_6 [i_2 + 1]))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (!(min(((!(((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_3] [i_2] [i_2])))), ((!(((/* implicit */_Bool) arr_33 [i_10] [2U] [(short)13] [i_2] [i_2]))))))));
                        arr_34 [i_2] [i_2] [i_2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_10] [3] [i_4] [i_3] [i_2 + 1])) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4 + 3] [i_10] [i_10])) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_4] [i_3] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4] [i_10])))))) : (((((/* implicit */int) arr_26 [i_10] [i_2] [i_2])) >> (((((/* implicit */int) arr_26 [i_4 - 1] [i_2 + 1] [i_2 + 1])) - (39592)))))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_2 + 1] [i_2]) + (arr_11 [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_4]))) / (arr_18 [i_2 + 1] [i_2 + 1] [i_3] [i_4 - 2] [i_4] [i_4]))), (max((((/* implicit */long long int) arr_23 [i_4 + 1] [i_2 + 1] [i_2 + 1] [i_2])), (9223372036854775795LL)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_23 &= ((/* implicit */unsigned int) (+(((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173)))))));
            var_24 += ((/* implicit */unsigned int) ((unsigned long long int) (~(7))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)-118))))) <= ((~(((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_12] [i_2] [i_2 + 1])))))))));
            arr_40 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [(short)2] [i_2] [i_2 + 1]))));
        }
        arr_41 [i_2 + 1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_11 [i_2] [2LL] [i_2]) ^ (((/* implicit */unsigned long long int) arr_22 [i_2] [6ULL] [(unsigned char)6] [i_2] [i_2])))))))), ((((-(var_0))) - (((/* implicit */long long int) (+(arr_37 [i_2] [i_2]))))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((((arr_36 [i_13] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) != (((/* implicit */long long int) arr_6 [i_13])))))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) arr_11 [i_13] [i_13] [i_13]);
            arr_48 [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) arr_25 [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14] [i_14]));
        }
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            var_28 = min((((/* implicit */long long int) ((unsigned int) (+(arr_17 [i_13] [i_15] [i_15] [i_15] [i_13] [i_13]))))), (((((/* implicit */_Bool) arr_36 [i_15] [i_13])) ? (arr_36 [i_15] [i_13]) : (arr_36 [i_13] [i_13]))));
            arr_52 [i_13] [i_13] = ((((/* implicit */_Bool) arr_35 [i_13])) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_46 [i_13] [i_15]))))))) : (min((arr_51 [i_15] [i_13] [i_13]), (((/* implicit */unsigned int) arr_7 [i_13] [i_15])))));
            var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_36 [i_13] [i_15]) >= (arr_36 [i_13] [i_15])))), (arr_36 [i_13] [i_13])));
        }
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            var_30 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_16] [i_16] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))) : (arr_8 [10U]))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)-26394)) - (((/* implicit */int) var_4)))))))) - ((-(arr_39 [i_16])))));
            var_31 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((arr_54 [i_13] [i_13] [i_13]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13])))))) & (((arr_29 [i_13] [i_13] [i_13] [i_13] [i_13]) ^ (((/* implicit */unsigned long long int) arr_51 [i_13] [i_16] [i_13]))))))));
            var_32 = ((/* implicit */int) (((~(min((((/* implicit */unsigned int) (unsigned char)52)), (2390751152U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            var_33 = (i_13 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (arr_47 [(_Bool)1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)78)) << (((((/* implicit */int) arr_35 [i_13])) + (138)))))) : ((+(var_7)))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (arr_47 [(_Bool)1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)78)) << (((((((/* implicit */int) arr_35 [i_13])) + (138))) - (92)))))) : ((+(var_7))))));
            arr_58 [i_13] = (i_13 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_13] [i_17] [i_17] [i_13] [i_13])) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_57 [6LL] [i_17] [i_13]))) - (7078327215317357096ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_13] [i_17] [i_17] [i_13] [i_13])) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_57 [6LL] [i_17] [i_13]))) - (7078327215317357096ULL))) - (11632771910372542204ULL))))));
            var_34 &= ((/* implicit */short) ((long long int) (~(7986866534793789846LL))));
        }
    }
}
