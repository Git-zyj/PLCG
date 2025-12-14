/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75231
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) arr_1 [i_1]))));
                arr_5 [i_0] = ((/* implicit */_Bool) arr_0 [i_1 + 2]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) (short)-2088);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1LL) == (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_4] [i_3]))))))))) : (max((((/* implicit */unsigned long long int) -1LL)), (max((((/* implicit */unsigned long long int) (unsigned char)198)), (arr_18 [i_4] [i_5 + 2])))))));
                                var_14 = ((/* implicit */unsigned long long int) max((max((579479367), (((/* implicit */int) (short)2087)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4 - 2])) || (((/* implicit */_Bool) arr_8 [i_4 + 3])))))));
                            }
                        } 
                    } 
                    arr_20 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) (short)6676);
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    arr_23 [i_2] [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_3] [i_2 + 1] [i_7] [i_3] [i_2] [i_7])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_12 [i_2])))) + (((/* implicit */int) arr_13 [i_7 + 1] [i_7] [i_7] [i_7 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_2] [i_8] [i_7 - 1] [i_7 - 1] [(signed char)18] |= ((/* implicit */signed char) arr_24 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [18LL] [i_7]);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 + 1] [i_7] [i_2 + 1] [i_2]))) - (((1831806193273122792LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))))));
                                arr_32 [i_2] [i_2] [i_2] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) 579479356);
                                arr_33 [i_7] = (short)-6677;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)182))));
                                arr_40 [i_3] [i_3] [i_3] [i_10] [i_11 + 2] [i_2 - 1] [i_7] = ((/* implicit */signed char) (unsigned char)198);
                            }
                        } 
                    } 
                }
                for (unsigned char i_12 = 4; i_12 < 18; i_12 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */short) (-(579479392)));
                    arr_43 [i_2] [i_2] [i_2] = max((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)9391)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30127))) : (522922564U))))), (arr_8 [i_3]));
                    var_18 &= ((/* implicit */int) (short)-2088);
                }
                /* vectorizable */
                for (unsigned char i_13 = 4; i_13 < 18; i_13 += 4) /* same iter space */
                {
                    var_19 += -1LL;
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_13 + 2] [i_13 + 2] [i_13 - 2] [i_2 + 1] [i_13 - 1])) && ((_Bool)1))))));
                    var_21 = ((/* implicit */short) arr_29 [i_2] [i_2]);
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13] [i_13 - 1]))) : (arr_45 [i_2] [i_13 + 2] [i_2] [i_2])));
                }
                arr_46 [i_2] [i_2] = ((/* implicit */signed char) (+(min((((/* implicit */int) min((arr_15 [i_2] [i_3] [i_2] [i_3]), (((/* implicit */short) arr_11 [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_2 + 2] [(_Bool)1] [i_3] [i_3])) ? (((/* implicit */int) arr_17 [(short)8] [(short)8])) : (((/* implicit */int) (signed char)34))))))));
                arr_47 [i_3] [i_3] = ((/* implicit */unsigned char) (signed char)34);
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_16 = 3; i_16 < 16; i_16 += 3) 
                            {
                                arr_56 [i_2 - 1] [i_3] [i_14 + 2] [i_15] [i_14] = ((/* implicit */long long int) (signed char)28);
                                arr_57 [i_2 - 1] [i_14] [i_14 - 1] [i_2 - 1] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_16 - 2] [i_14] [i_14] [i_14] [i_2 + 2]))));
                                arr_58 [i_2 + 2] [i_3] [i_3] [i_15] [i_14] = ((/* implicit */unsigned int) (unsigned short)36290);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                            {
                                var_23 |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) -2689929843749937596LL)) <= (arr_18 [i_17] [i_3]))) ? (2689929843749937595LL) : (((/* implicit */long long int) 579479356))));
                                arr_62 [i_17] [i_15] [i_17] [i_17] [i_17] |= ((/* implicit */unsigned long long int) arr_24 [i_17] [i_2 - 1] [i_2] [i_15] [i_17] [i_2]);
                                arr_63 [i_17] [i_17] [i_14] [i_14] [i_15] [i_15] [i_17] |= ((/* implicit */signed char) (unsigned char)174);
                            }
                            /* vectorizable */
                            for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                            {
                                arr_66 [i_15] [i_3] [i_14] [i_15] [i_18] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]))) / (1765799449U)));
                                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_2] [i_2 - 1] [i_14 - 1] [i_14]))));
                                arr_67 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_14] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_15] [i_2 + 2] [i_2] [i_14 + 1])) << (((((/* implicit */int) arr_13 [i_2] [i_2 + 2] [i_2 + 2] [i_14 - 1])) - (27)))));
                                var_25 = ((/* implicit */int) max((var_25), ((~(((/* implicit */int) arr_61 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14] [i_14] [i_14 - 1] [(unsigned char)0]))))));
                            }
                            arr_68 [i_14] [i_3] [i_14] [i_14] [i_14] = max((((/* implicit */int) arr_34 [i_2 + 1] [i_2 + 1] [i_3] [i_14 + 2] [i_2 + 1])), (((((/* implicit */int) arr_34 [i_2] [i_3] [i_14 - 1] [i_14 + 1] [i_2 + 2])) ^ (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
