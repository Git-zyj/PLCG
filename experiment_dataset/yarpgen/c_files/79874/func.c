/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79874
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) (+(max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_1] [i_2]))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3 - 1])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)16839)), (2152379533116480133LL)))) ? (((/* implicit */unsigned long long int) min((-2152379533116480160LL), (((/* implicit */long long int) (short)32766))))) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (18446744073709551612ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53953)))));
                        var_15 &= ((/* implicit */unsigned char) ((((arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3]) <= (arr_9 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -6698824749142765368LL)))) : (((((/* implicit */long long int) arr_9 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3])) / (var_7)))));
                        var_16 ^= ((/* implicit */unsigned long long int) arr_5 [i_3] [i_2] [i_1]);
                        var_17 = ((((/* implicit */_Bool) max(((~(-6698824749142765351LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2152379533116480144LL)) || (((/* implicit */_Bool) (signed char)-109))))) : ((+(((/* implicit */int) arr_6 [i_0] [i_3 - 3] [i_3 - 1] [i_3 - 1])))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4])) && (((/* implicit */_Bool) (~(arr_2 [i_0]))))));
                        var_19 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-3814)), ((unsigned short)16513)));
                    }
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) (-(arr_10 [(short)14] [i_1] [i_1] [i_1] [i_5])))) - (((((/* implicit */unsigned long long int) var_11)) * (arr_4 [i_2] [i_0]))))));
                        var_21 = ((/* implicit */unsigned int) ((((max((arr_11 [i_0] [i_2] [i_2] [i_5]), (arr_11 [i_0] [i_1] [i_2] [i_5]))) + (2147483647))) << (((((((((/* implicit */_Bool) (+(var_9)))) ? (((long long int) arr_11 [i_0] [i_2] [i_0] [i_5])) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)33359), ((unsigned short)127))))))) + (941957174LL))) - (17LL)))));
                        arr_15 [i_0] [i_0] [i_0] [11ULL] = ((/* implicit */unsigned char) 6698824749142765354LL);
                    }
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 589045855404068060ULL)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned short)65403))));
                    /* LoopSeq 1 */
                    for (int i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        arr_19 [i_6] [i_6] = ((/* implicit */int) min((18446744073709551615ULL), (262143ULL)));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2152379533116480132LL)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)29511)), (-6303632610353332629LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27885))) : (var_3))) : ((+(min((((/* implicit */unsigned long long int) var_13)), (arr_4 [i_2] [i_2])))))));
                    }
                    var_24 = ((/* implicit */int) ((unsigned int) (~(((int) var_11)))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)-126))))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_12 [i_0] [i_0] [(signed char)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_2)) <= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned long long int) (unsigned short)65424)), (12ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1024)))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709289453ULL)) ? (((((/* implicit */_Bool) (unsigned short)65409)) ? (-6698824749142765351LL) : (-6698824749142765366LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))))))))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
    {
        var_28 *= ((/* implicit */unsigned char) arr_26 [(unsigned char)4]);
        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [(short)16])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) arr_22 [i_8] [i_8]))))) : ((+((-9223372036854775807LL - 1LL))))));
        var_30 = ((/* implicit */short) var_8);
        arr_27 [i_8] [i_8] = ((/* implicit */long long int) (!((_Bool)1)));
        var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min(((short)12186), (arr_23 [i_8])))) ? (var_11) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) (signed char)-8))));
    }
    var_32 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */long long int) 1714190575U)) != (var_12)))))), (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-29489)))) <= (((/* implicit */int) (_Bool)1)))))));
    var_33 = ((/* implicit */short) var_6);
}
