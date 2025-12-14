/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72525
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) (short)508);
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))) - (((unsigned long long int) 8350637627902133564LL))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1 + 1]))) : ((~((-(((/* implicit */int) (signed char)57))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_18 = min((((/* implicit */unsigned int) var_2)), ((+((-(3207539475U))))));
                        var_19 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])))))) * (((((/* implicit */int) arr_12 [4LL] [i_5 + 1] [i_2 - 1])) + (((/* implicit */int) arr_12 [i_2 - 1] [i_5 - 1] [i_2 - 1]))))));
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (4268514894U)));
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_21 = 2828708248U;
                            var_22 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2] [(unsigned short)12]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */_Bool) ((long long int) ((signed char) arr_9 [i_4] [i_7] [i_7] [i_4 - 1])));
                            var_24 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32074)) : (((/* implicit */int) arr_6 [i_2 - 1])))));
                            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65533))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (((unsigned long long int) ((arr_9 [i_7] [i_2] [i_2] [i_2 + 1]) ? (((/* implicit */int) arr_19 [(signed char)6] [(signed char)6] [(signed char)6] [i_5] [i_7])) : (((/* implicit */int) arr_9 [i_7] [i_2] [i_2] [i_2])))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_1), (((/* implicit */unsigned int) var_14)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned short)16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8)))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            arr_24 [i_2 + 1] [i_8] [i_3] [(_Bool)1] [0LL] [i_5] [i_8] &= ((/* implicit */_Bool) (+(min((((/* implicit */int) (signed char)69)), ((-(((/* implicit */int) (unsigned char)209))))))));
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]), (((/* implicit */long long int) arr_6 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                            arr_25 [i_2] [i_3] [i_4 - 1] [i_5] [i_2] [i_4] [9LL] = ((((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_8] [i_5 - 1] [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15266))) : (arr_21 [4LL] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)31515))))) ? (max((((/* implicit */long long int) var_0)), (arr_22 [i_2] [i_3] [i_4] [i_5 + 1] [5LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_2] [i_4 - 1] [i_4 - 1]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4268514894U)) ? (((/* implicit */int) arr_16 [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_4 - 1]))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)47)) * (((/* implicit */int) var_8))))) / (arr_30 [i_2])));
                            var_32 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) var_1)));
                            var_33 = min((((/* implicit */long long int) ((unsigned short) arr_11 [i_2] [i_10] [i_4 - 1]))), (min((arr_11 [i_2] [i_3] [i_4 - 1]), (arr_11 [i_2] [i_2] [i_4 - 1]))));
                            var_34 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_22 [i_10] [i_5] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (((/* implicit */long long int) 4070016133U))))) ? (((/* implicit */long long int) var_1)) : (((long long int) 4268514894U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_3] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_5 - 1])))))));
                            var_35 ^= ((/* implicit */unsigned long long int) 8584706412670158850LL);
                        }
                    }
                } 
            } 
        } 
        arr_33 [i_2] [i_2] = arr_7 [i_2] [i_2];
    }
    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) /* same iter space */
    {
        arr_36 [i_11] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) min((arr_23 [i_11] [(_Bool)1] [i_11] [i_11] [i_11]), (((/* implicit */unsigned char) var_11))))))) + (2147483647))) << (((arr_5 [i_11 - 1]) - (3482940881U)))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 16; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                {
                    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) arr_22 [i_11] [i_12] [i_13] [i_11 + 1] [i_12 + 1])) : (16665533769441652662ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_28 [i_12]))))));
                    var_37 = ((/* implicit */int) var_0);
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((signed char) min((1589732973U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)44010)))))))))));
    }
    var_39 = ((/* implicit */unsigned short) var_9);
    var_40 = ((/* implicit */long long int) (~(var_7)));
}
