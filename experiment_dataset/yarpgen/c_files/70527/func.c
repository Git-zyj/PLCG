/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70527
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = (+((-(((/* implicit */int) var_9)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_3 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [(unsigned char)5] [i_3 + 2] [i_3 + 2] [(unsigned char)5]))))) ? (((/* implicit */int) max((arr_8 [i_0] [i_3 - 1] [i_0] [(signed char)7]), (arr_8 [i_0] [i_3 - 1] [(unsigned char)2] [i_3])))) : ((-(((/* implicit */int) arr_8 [i_0] [i_3 + 2] [i_2] [i_3]))))));
                                arr_11 [i_1] = ((/* implicit */unsigned char) (((-(arr_7 [i_3 + 3]))) / (arr_7 [i_3 + 3])));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_4 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_3 + 3] [i_3 + 2])) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_15))))))) > (((/* implicit */int) ((((/* implicit */_Bool) 131071)) || (((_Bool) (signed char)19)))))));
                                arr_13 [(unsigned char)24] [i_3 + 3] [i_2] [i_1] [(unsigned char)24] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_2 [i_2]))))))))));
                                arr_14 [i_0] [i_4] &= ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_3 + 2] [i_3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            {
                arr_19 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_18 [i_5] [i_5])), (arr_1 [i_5]))))))) ? (((/* implicit */int) ((arr_15 [i_6]) >= (min((2687618278U), (((/* implicit */unsigned int) arr_2 [i_5]))))))) : (((((/* implicit */int) (signed char)-37)) + (((/* implicit */int) (signed char)-36))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_6 [i_5] [i_6 - 3] [i_5] [i_6 - 3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (max((var_12), (((((/* implicit */int) arr_5 [i_5] [i_6] [i_6] [i_6 - 1])) / (((/* implicit */int) var_2))))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (_Bool)1))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_22 [4])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_6 - 1])) != (max((arr_20 [i_5] [i_5] [i_5]), (((/* implicit */int) var_1)))))))));
                                arr_27 [i_5] [i_6 - 1] [i_7] [i_7] [i_5] &= ((/* implicit */short) var_15);
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))) == (17572280368251166641ULL))) ? (((/* implicit */unsigned long long int) (~(3126853857U)))) : (((((/* implicit */_Bool) (unsigned char)77)) ? (874463705458384983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))))))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_2 [i_7])), ((-(var_6))))))));
                            }
                        } 
                    } 
                    arr_28 [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)6))));
                    var_27 &= max((((/* implicit */int) arr_5 [i_6 + 1] [i_6 - 3] [i_5] [i_6])), ((~(((/* implicit */int) arr_5 [i_6 + 1] [i_6] [22ULL] [i_6 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (int i_11 = 4; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) var_8)) : ((+(max((((/* implicit */long long int) (signed char)-36)), (arr_25 [i_11] [i_7]))))));
                                var_29 = ((/* implicit */unsigned int) (-((~(((arr_30 [i_5] [i_6] [i_6] [i_11]) ? (((/* implicit */unsigned long long int) var_4)) : (arr_16 [i_5])))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((var_8) + (var_16))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 3])) : (((/* implicit */int) arr_29 [i_7] [(unsigned short)1] [i_6 - 3] [i_7] [i_7] [(unsigned char)17]))))));
                }
                for (unsigned int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    var_31 = ((/* implicit */int) max((var_31), ((-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_12 + 3] [i_12 + 3] [(signed char)0]))))) ? (((var_17) + (((/* implicit */int) arr_21 [i_5] [i_5] [i_12])))) : ((+(((/* implicit */int) arr_35 [i_5]))))))))));
                    var_32 = (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_10)))))) ? (((((/* implicit */_Bool) max(((unsigned short)31), ((unsigned short)16)))) ? ((+(2356643927U))) : (255U))) : (var_6));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (short i_15 = 1; i_15 < 15; i_15 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) max((((/* implicit */int) arr_42 [i_13] [i_14] [i_15])), (var_17)))), (max((var_5), (((/* implicit */unsigned int) arr_42 [i_13] [i_13] [i_15])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [22LL] [i_14] [i_15 + 3] [i_15 + 3]))) : (arr_41 [i_13] [i_14] [i_13])))))))));
                    var_34 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14])) ? (((/* implicit */int) arr_3 [i_13] [i_13] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? (((int) 1810304076)) : (((((/* implicit */_Bool) arr_8 [i_15] [i_15 - 1] [i_15] [i_15 + 4])) ? (((/* implicit */int) arr_8 [i_15 + 4] [i_15 - 1] [2] [i_15 - 1])) : (((/* implicit */int) arr_8 [i_15 + 2] [i_15 - 1] [i_15] [i_15]))))));
                    var_35 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15 + 4])) ? (arr_1 [i_15 + 1]) : (arr_1 [i_15 + 3])))));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((unsigned int) arr_3 [i_15 + 4] [i_15] [i_15 + 3])))));
                }
            } 
        } 
    } 
}
