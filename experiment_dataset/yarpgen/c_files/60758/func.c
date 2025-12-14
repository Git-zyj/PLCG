/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60758
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max(((+(arr_4 [i_1 - 1] [9U]))), (max((8004231110212802041ULL), (((/* implicit */unsigned long long int) var_3)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_1 + 3] [i_2] = ((/* implicit */short) ((unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) >= (((/* implicit */int) var_9))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min(((~(arr_2 [i_1 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))))))))));
                    var_14 = ((unsigned long long int) arr_1 [i_1]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_7) + (min((11083010510303105804ULL), (((/* implicit */unsigned long long int) arr_7 [i_1])))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_11)), (var_10)))))));
                    arr_13 [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)25122), ((unsigned short)65522))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 + 1])))))));
                                var_17 = (unsigned short)58942;
                                var_18 = ((/* implicit */signed char) ((arr_1 [i_0]) * (arr_4 [i_0] [i_6])));
                                arr_22 [(unsigned short)7] [i_1] [i_4] [i_5] [(short)5] = ((/* implicit */unsigned char) ((arr_11 [i_6] [i_4 - 2] [i_0]) >> (((((int) (unsigned char)120)) - (118)))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */signed char) (unsigned short)63299);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_4] [i_5] [i_1])), ((unsigned short)10))))) ? (max((arr_17 [i_1] [i_4] [i_4 - 2] [i_1 + 3] [i_0] [i_1]), (max((((/* implicit */unsigned long long int) var_3)), (arr_23 [i_0] [i_0] [i_5] [i_7] [i_7]))))) : (17558196791009460031ULL)));
                                arr_25 [i_1] [i_1] [i_4] [(_Bool)1] [i_5] [i_1] = ((/* implicit */short) min(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)1)))))));
                                arr_26 [i_0] [(signed char)0] [i_1] [i_5] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 1])) >> (((arr_23 [i_1] [i_1 - 1] [i_5 - 1] [(short)8] [(_Bool)1]) - (4567842422122008847ULL))))), ((+(((/* implicit */int) (unsigned short)43670))))));
                                var_21 = ((/* implicit */unsigned int) (!((!(arr_21 [i_0] [i_4 + 1] [i_5 - 1] [(short)2] [(signed char)8])))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65525)) << (((4745232520256405333ULL) - (4745232520256405328ULL)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_0] [i_4] [i_5 - 1]))))) || (((/* implicit */_Bool) var_2)))))));
                                arr_31 [i_5] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) arr_16 [i_1 + 4] [i_1] [i_1] [i_4 + 1])))));
                                var_23 = ((/* implicit */_Bool) (unsigned short)28);
                            }
                            /* vectorizable */
                            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (short)-32762))));
                                arr_34 [i_1] = ((/* implicit */unsigned char) (unsigned short)19068);
                                var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((12243641620691878958ULL) & (var_1)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1 - 2] [i_4 - 2] [i_5 + 1] [i_9] [i_9])))));
                            }
                            var_26 = max((var_2), ((+(((/* implicit */int) (unsigned short)65522)))));
                            /* LoopSeq 2 */
                            for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                            {
                                arr_37 [i_0] [i_1] [(unsigned char)3] [(unsigned short)7] [i_1] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) 945760924986601741ULL)) ? (4ULL) : (18446744073709551615ULL)));
                                arr_38 [i_1] [i_1] [i_4] [i_4] [0ULL] [i_5] [6] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_29 [i_1] [i_1])) & (((((/* implicit */int) var_5)) & (1609596291)))))));
                                var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_4 + 2])) ? (arr_1 [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                                arr_39 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) var_5)), (var_10)))));
                            }
                            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                            {
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [(unsigned short)6] [i_1] [i_4] [5U] [i_4] [4U] [i_11])))))));
                                var_29 += ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                            }
                            var_30 *= ((/* implicit */unsigned char) (~(max((arr_23 [i_5] [i_5] [i_5] [i_4 - 2] [10ULL]), (((/* implicit */unsigned long long int) (unsigned char)30))))));
                            var_31 = ((/* implicit */unsigned char) 18446744073709551604ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23233))) : (var_7)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)146)) || (((/* implicit */_Bool) 2498502856U))))), (max((((/* implicit */unsigned int) var_5)), (var_6))))))));
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned char)66), (((/* implicit */unsigned char) arr_44 [4ULL])))))))) ? (((((/* implicit */_Bool) arr_40 [i_12] [i_12])) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (((var_4) >> (((((/* implicit */int) (unsigned short)65535)) - (65534))))))) : ((~(((unsigned long long int) var_11))))));
        arr_46 [i_12] [8ULL] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))), ((-(var_11))))), (((/* implicit */unsigned int) ((unsigned short) var_6)))));
    }
}
