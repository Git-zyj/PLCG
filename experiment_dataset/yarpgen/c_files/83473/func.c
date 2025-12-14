/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83473
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
    var_10 |= ((/* implicit */_Bool) min(((unsigned char)165), ((unsigned char)87)));
    var_11 += ((/* implicit */_Bool) 4353086771454070755ULL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) 3897929567U)) ? (((/* implicit */int) (_Bool)1)) : (0));
                var_13 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) 0))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 4080791465U)) ? (14093657302255480862ULL) : (14093657302255480861ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) arr_1 [i_3] [i_2]);
                        var_16 -= ((/* implicit */long long int) arr_6 [(signed char)4] [(signed char)4] [(signed char)4] [(signed char)4]);
                        var_17 += ((/* implicit */int) (signed char)50);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        var_18 -= ((((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 - 1])) - ((-(((/* implicit */int) (_Bool)1)))));
                        arr_11 [i_2] [i_2] [i_2] = (~(4353086771454070753ULL));
                        arr_12 [i_1] [i_1] [i_2 + 2] [i_4] |= ((/* implicit */short) (~(4353086771454070756ULL)));
                    }
                    arr_13 [i_2] = (~(((/* implicit */int) var_1)));
                    var_19 = ((/* implicit */unsigned char) arr_3 [1U] [i_2 - 1] [i_2]);
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_20 = ((/* implicit */int) arr_2 [i_1]);
                    var_21 = ((/* implicit */signed char) ((5184645049288240233ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    arr_16 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_3 [i_0] [i_1] [i_5]))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1073741820U)) > (0LL)));
                }
                for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    var_23 += ((/* implicit */unsigned short) (-(((/* implicit */int) (short)284))));
                    arr_20 [i_6 - 1] [i_0] |= ((/* implicit */signed char) min(((~(arr_8 [i_6 - 1] [i_6 + 1] [i_1]))), (((((/* implicit */_Bool) arr_8 [(signed char)4] [i_6 - 1] [i_1])) ? (arr_8 [i_6] [i_6 - 1] [i_1]) : (arr_8 [(unsigned char)4] [i_6 + 1] [i_1])))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_24 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)256))));
                        arr_25 [i_0] [i_1] [i_8] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                    }
                    arr_26 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_7] [i_1])))) ? ((+(arr_1 [i_0] [i_0]))) : (((arr_1 [i_7] [13]) / (arr_1 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = max((1622214172941270077ULL), (18446744073709551593ULL));
                        arr_30 [i_0] [i_0] [(signed char)15] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) arr_4 [i_1] [i_1])))));
                    }
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_25 += ((/* implicit */unsigned int) arr_10 [i_0] [17ULL] [17ULL] [i_10]);
                    var_26 = ((((/* implicit */_Bool) 4353086771454070753ULL)) ? (((/* implicit */int) (unsigned char)91)) : (arr_1 [i_1] [i_10]));
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    var_27 -= ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_11]))) == ((~(arr_23 [i_11] [i_1]))));
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_28 &= ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_1])) % (arr_19 [6] [i_11] [(_Bool)1])));
                        arr_40 [12U] [17ULL] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)212))));
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = ((((/* implicit */unsigned long long int) arr_34 [i_12] [i_11] [i_0])) % (4353086771454070755ULL));
                        var_29 = ((/* implicit */unsigned short) ((6ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_11] [i_11] [i_11] [i_11])))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))));
                        arr_44 [14] [i_11] [i_11] [i_0] [(unsigned short)16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 325663044)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (3U)));
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) arr_3 [i_1] [i_11] [i_1]);
                        var_32 = ((/* implicit */unsigned char) ((2965626547675875822ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
                    }
                    var_33 = ((/* implicit */_Bool) var_9);
                }
            }
        } 
    } 
}
