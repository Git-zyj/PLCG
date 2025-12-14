/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71773
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) (+(0U)));
                    var_11 -= ((/* implicit */unsigned long long int) 1790176833162962486LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_3] [i_4] [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4 + 2] [i_4 + 2] [i_3])) ? (3542879895U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-83)))))))) ? (((((((/* implicit */unsigned int) arr_16 [0LL])) < (arr_11 [i_3] [i_3]))) ? ((-(arr_19 [i_3] [i_5] [i_3]))) : (1790176833162962486LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3])))));
                                var_12 -= ((/* implicit */unsigned short) ((((2016) != ((-(((/* implicit */int) arr_18 [i_3] [(unsigned char)6] [(unsigned char)6] [i_6] [i_6])))))) ? (max((var_7), ((-(((/* implicit */int) arr_13 [i_4] [(unsigned short)8] [i_6])))))) : ((((~(((/* implicit */int) (signed char)-74)))) | ((~(((/* implicit */int) var_8))))))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-(2075259347))))));
                                arr_21 [i_3] [i_3] [i_5] [(short)8] [i_3] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (unsigned char)5)) + (2075259347))) / (((((/* implicit */int) arr_13 [i_3] [i_3] [i_5 - 3])) ^ (((/* implicit */int) arr_18 [i_3] [i_3] [(unsigned char)14] [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_8] [(short)16] = ((long long int) (((+(((/* implicit */int) (unsigned short)65520)))) & (((/* implicit */int) min((arr_18 [i_3] [i_3] [i_8] [i_9] [i_3]), (((/* implicit */short) (unsigned char)11)))))));
                            var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) | (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) min((arr_19 [i_3] [i_4] [(signed char)0]), (((/* implicit */long long int) arr_23 [18LL] [i_4])))))))) ? ((-(((/* implicit */int) max((arr_12 [16ULL] [16ULL] [16ULL]), (((/* implicit */unsigned char) (signed char)-58))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) == (((/* implicit */int) (unsigned short)14030)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3049))) | (arr_23 [i_3 - 2] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_4] [i_3] [i_11])), (arr_26 [(unsigned char)8] [(unsigned char)6])))) && (((/* implicit */_Bool) (unsigned char)5)))))) : (((((/* implicit */_Bool) ((arr_16 [i_3]) % (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_4 - 2]))) : (((unsigned long long int) arr_17 [i_3] [i_3] [i_3] [0ULL] [0ULL]))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2238020219U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_31 [i_3] [i_3] [i_10] [i_11]))))))));
                            var_17 += ((/* implicit */long long int) ((-912391007) + (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)19468)) ^ (-434971314)))))));
                            arr_33 [i_3] [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1790176833162962487LL)) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17611)) || (((/* implicit */_Bool) (unsigned short)3049)))))))) && ((!((!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)1861)), (max((((/* implicit */unsigned int) arr_16 [i_3])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4]))) * (arr_11 [i_3] [(unsigned short)15])))))));
                arr_34 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((arr_23 [i_3 - 2] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned short)62681))))))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (arr_25 [i_3] [i_3 + 1] [i_3] [(unsigned char)12]) : (((/* implicit */int) (unsigned short)41247))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_10 [i_3])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 3) 
    {
        for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_45 [i_12] [i_12 + 1] [i_12] [i_14 + 1] [i_14] [i_15 + 1])) <= (((/* implicit */int) arr_45 [i_12 + 1] [i_12 - 1] [i_12] [i_14 - 1] [i_14] [i_15 + 1]))))));
                                arr_48 [i_12] [i_12] [i_12] [2] [i_16] [i_16] = ((/* implicit */int) ((((unsigned long long int) ((unsigned short) (unsigned char)4))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    for (long long int i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        for (short i_19 = 1; i_19 < 14; i_19 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) (unsigned char)25);
                                arr_56 [i_12] [i_12] [i_12] [10] [i_12] [i_12] &= ((/* implicit */_Bool) min((arr_40 [(signed char)14] [i_19]), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */long long int) (unsigned char)4)), (arr_43 [i_12] [i_12] [i_13] [i_17] [i_17] [12U])))))));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)41236)))) ? (((/* implicit */unsigned long long int) (~(arr_9 [i_12])))) : (((18446744073709551615ULL) << (((var_9) + (1959431976))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11430)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 10746485249081028952ULL)) ? (((/* implicit */int) (_Bool)1)) : (-2032627066))))))))));
                                var_23 = ((/* implicit */unsigned char) -1790176833162962480LL);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((130816LL) << (((((/* implicit */int) (unsigned short)30024)) - (29994)))))) ? (max((1168267886), (((/* implicit */int) arr_29 [i_12] [i_12] [i_12] [i_12])))) : ((~(((/* implicit */int) arr_29 [i_12] [i_12] [i_12] [i_12]))))));
                arr_57 [(signed char)5] [(signed char)5] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)-66)))) < (((/* implicit */int) ((unsigned short) (~(4294967295U)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (min((((/* implicit */unsigned int) var_7)), (var_0)))))) ? ((-(((((/* implicit */_Bool) 1790176833162962486LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) var_9))));
}
