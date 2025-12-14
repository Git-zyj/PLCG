/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75537
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_19 = ((/* implicit */_Bool) 18100461564770535436ULL);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)16))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) | (((/* implicit */int) arr_13 [i_5 - 1] [i_3] [i_2] [i_1] [i_0 + 1]))))) : (var_4)));
                            var_22 = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_5] [i_1] [i_1 - 1] [i_5] [1LL] [i_5]));
                        }
                        arr_15 [i_2] [2LL] [i_2] [i_0] = arr_12 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 3] [i_3];
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_14 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                    }
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        arr_19 [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_0))))));
                        arr_20 [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) | (arr_9 [i_6] [i_6 - 1] [i_6] [i_0] [i_0 - 2] [i_1])));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6] [i_6 - 1] [(signed char)8] [i_6 + 1])) ? (((/* implicit */long long int) arr_14 [i_6 - 1] [i_6] [i_6] [(unsigned char)10] [i_6] [i_6] [(signed char)4])) : (arr_17 [i_6 - 1] [7LL] [i_6] [i_6] [i_6]));
                        var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_17 [i_6] [i_2] [i_2] [i_1 + 1] [i_0])))))));
                    }
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        arr_24 [(_Bool)1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0])) > (3379786789U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3379786801U)) ? (var_14) : (1177625656U)))) : ((-(-4991937052676317303LL)))));
                        var_24 ^= ((/* implicit */signed char) ((long long int) (unsigned short)17130));
                        arr_25 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) 8648936641420600825LL);
                        arr_26 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48415)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                        arr_27 [i_0] |= ((/* implicit */unsigned char) (+(arr_14 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 + 2])));
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [6U] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0])) || (((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0] [0U] [i_0 - 1] [i_0 + 1]))));
                }
            }
        } 
    } 
    var_26 = min((max((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-4414))))), (((((/* implicit */_Bool) -7212430404511519176LL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_3)));
    /* LoopSeq 2 */
    for (int i_8 = 2; i_8 < 11; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)8504)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_29 [i_8 + 1] [i_8 - 1])) : (15222629434897931019ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (short)-32634)) : (27))))));
        arr_30 [i_8 - 2] = ((/* implicit */long long int) arr_28 [i_8] [i_8]);
        var_28 = ((/* implicit */unsigned int) ((((arr_29 [i_8 + 1] [i_8 + 1]) / (arr_29 [i_8] [i_8 - 2]))) * (((/* implicit */int) (signed char)63))));
        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) (unsigned short)64159)) : (arr_29 [i_8] [i_8 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) | (2091586191U))) : (((/* implicit */unsigned int) arr_29 [i_8] [i_8]))));
    }
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_31 = ((/* implicit */unsigned int) 10479448230509310952ULL);
        arr_33 [i_9] [i_9] = ((/* implicit */_Bool) arr_31 [i_9]);
        var_32 = ((/* implicit */signed char) min((((unsigned int) arr_32 [i_9])), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))));
    }
    var_33 = max((((/* implicit */unsigned short) (signed char)3)), (var_11));
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (short)-32749))));
}
