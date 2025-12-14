/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99755
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_1] [i_1] [i_0])) * (((var_5) >> (((min((arr_1 [i_2]), (((/* implicit */unsigned int) (unsigned short)46046)))) - (46038U)))))));
                    arr_9 [i_0] [i_1] [i_2 - 2] = ((/* implicit */unsigned long long int) (signed char)11);
                    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97)))))) / (((((/* implicit */_Bool) (unsigned short)19490)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (unsigned short)49459))));
                }
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0 + 1] [i_3 + 1] [i_3] [i_3 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_3 - 1])) < (((/* implicit */int) (signed char)-123)))))))) || (((/* implicit */_Bool) min(((unsigned short)19472), (((/* implicit */unsigned short) ((signed char) 1635074655U))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_14 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19489)) >> (((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)46046)) - (46027)))))))))));
                        var_15 = ((/* implicit */unsigned int) (signed char)63);
                    }
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        var_16 = min(((!(((/* implicit */_Bool) (unsigned short)24)))), ((_Bool)0));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min(((unsigned short)16077), (((/* implicit */unsigned short) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) : (min((1606250879U), (((/* implicit */unsigned int) arr_4 [i_0 + 1]))))));
                        var_18 ^= ((/* implicit */unsigned short) ((unsigned int) ((signed char) min((arr_15 [i_0] [i_0 + 1] [i_1] [0LL] [i_5] [i_5 - 1]), (arr_10 [i_0] [i_5] [i_3])))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_3 - 1] [6ULL] [i_6 + 2] [i_0])) & (((/* implicit */int) (unsigned short)60)))) ^ (((/* implicit */int) min((arr_15 [i_0 + 1] [i_0 + 1] [i_3 - 1] [(_Bool)1] [i_6 + 1] [i_6 - 3]), (arr_15 [i_0] [i_0 + 1] [i_3 + 1] [(signed char)12] [i_6 + 1] [i_0])))))))));
                        var_20 = ((/* implicit */unsigned int) 18446744073709551600ULL);
                    }
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_9))));
                }
                var_22 = ((/* implicit */signed char) arr_8 [i_0 + 1] [i_1] [i_0] [i_0 + 1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_25 [i_0 + 1] [i_9] [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned long long int) var_1);
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_32 [i_0] [i_1] [i_11] [i_10] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_0] [i_7] [i_10] [i_11]) >= (arr_20 [i_11] [i_10] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_1] [i_10] [i_11])) ? (((/* implicit */unsigned int) arr_20 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (var_1)))));
                            arr_33 [i_11] [i_11] [i_10] [i_7] [i_1] [i_0] = ((/* implicit */signed char) 4720120265429277480LL);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            var_24 -= ((/* implicit */_Bool) ((2097024U) % (199782498U)));
                            var_25 = ((/* implicit */unsigned long long int) min((((unsigned int) arr_20 [i_0 + 1] [i_1] [i_7] [i_12])), (min((2659892663U), (((/* implicit */unsigned int) arr_23 [i_1] [i_1]))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)52573)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2097024U))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) ((signed char) 4292870271U)))))) >= (((/* implicit */int) (unsigned short)49459)))))));
                        }
                        var_28 += ((/* implicit */_Bool) min((((unsigned int) (+(((/* implicit */int) (signed char)-29))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * ((~(4294967295U)))))));
                        arr_40 [i_7] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0 + 1] [i_1] [i_10])))) <= (arr_22 [i_10] [i_7] [i_1]))))));
                    }
                    var_29 ^= var_4;
                }
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-95)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((627610314U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))))))))));
    /* LoopNest 2 */
    for (signed char i_14 = 1; i_14 < 20; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_31 = ((/* implicit */unsigned int) arr_42 [i_14]);
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    arr_49 [i_16] [i_14] [i_14] = ((/* implicit */int) 15280465033709615154ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) var_4);
                                var_33 -= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60)) ? (((/* implicit */int) (unsigned short)19490)) : (((/* implicit */int) (signed char)-79))))), (min((-398089825961580293LL), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                                var_34 += ((/* implicit */unsigned short) 4914206644212904672ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        var_35 = ((11377298602910817626ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_51 [i_14 + 1] [i_14 - 1] [i_19 - 1]) >= (((/* implicit */unsigned long long int) 1U)))))));
                        arr_57 [i_14] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_0)))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2945336681U)) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)19472)) <= (((/* implicit */int) (unsigned short)10))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_59 [i_14])) << (((arr_47 [i_15]) - (8701894979334389578ULL)))))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)19472))));
                        var_38 = min((((/* implicit */unsigned long long int) min((((signed char) var_6)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))))), (min((arr_60 [i_14] [i_14 - 1] [i_16] [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_43 [i_14 + 1])))));
                        arr_61 [i_14 - 1] [i_14] [i_16] = ((/* implicit */signed char) var_7);
                    }
                }
            }
        } 
    } 
}
