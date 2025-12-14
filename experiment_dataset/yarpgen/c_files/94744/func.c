/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94744
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
    var_18 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) << (((var_1) - (3640881446U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_2 [i_1]))), ((-(((/* implicit */int) arr_4 [i_1])))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_2 [i_0])))))));
                var_21 = ((/* implicit */int) (((_Bool)1) ? (min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [(_Bool)1]) : (arr_1 [i_0]))), (((/* implicit */long long int) max((var_9), (((/* implicit */int) var_0))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-36)))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_12 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3])) : (var_2))))), (14822789272188746938ULL)));
                                var_23 = ((/* implicit */unsigned long long int) (short)-16126);
                                var_24 = ((/* implicit */signed char) var_13);
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_17 [i_0] [i_1] [i_2 - 1] = var_10;
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
                    arr_23 [i_0] [i_5] [(signed char)1] = ((/* implicit */_Bool) 5597345146516202752LL);
                    arr_24 [i_5] = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_9 [11] [11] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (2049084970))))) / (min((min((((/* implicit */int) (short)-32745)), (-1764088176))), (((/* implicit */int) (_Bool)1))))));
                    var_25 = (i_5 % 2 == zero) ? (((/* implicit */short) min((min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) -9129788614092245567LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)225)))))), (((((((/* implicit */int) arr_5 [i_0] [12ULL])) << (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))) * ((~(((/* implicit */int) arr_14 [i_5] [(unsigned short)6] [i_1] [i_1] [i_1] [i_0] [i_0]))))))))) : (((/* implicit */short) min((min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) -9129788614092245567LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)225)))))), (((((((/* implicit */int) arr_5 [i_0] [12ULL])) << (((((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) + (103))))) * ((~(((/* implicit */int) arr_14 [i_5] [(unsigned short)6] [i_1] [i_1] [i_1] [i_0] [i_0])))))))));
                }
                for (signed char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    arr_27 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min(((((~(((/* implicit */int) var_3)))) | (((/* implicit */int) min(((unsigned short)32256), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_15)))), ((short)-16114))))));
                        var_27 -= ((/* implicit */unsigned char) arr_29 [i_0]);
                    }
                    arr_31 [i_0] = ((/* implicit */int) 288230101273804800LL);
                }
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_33 [i_1]))));
                    var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)9))))) ? (var_13) : (((/* implicit */unsigned long long int) min((1236795781425641440LL), (((/* implicit */long long int) 2049084970))))))) >> (((2049084984) - (2049084982)))));
                }
            }
        } 
    } 
}
