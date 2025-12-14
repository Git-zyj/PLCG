/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61575
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
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((var_8), (var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 493567196U)) ? (16833386618545882489ULL) : (((/* implicit */unsigned long long int) 4294967292U))))) ? (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) : (3801400099U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (var_0)));
                    var_14 |= ((/* implicit */short) (+((-(min((((/* implicit */unsigned long long int) 3801400099U)), (4636666348815008068ULL)))))));
                }
            } 
        } 
        arr_8 [(unsigned char)6] &= ((/* implicit */long long int) ((unsigned char) (signed char)0));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [(unsigned short)6] [i_0])))) <= (((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_4]))))));
                        var_16 = ((/* implicit */unsigned char) (~(min((min((((/* implicit */long long int) 3801400099U)), (arr_6 [3U] [i_5] [i_0] [3U]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [0U])))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_3] [i_4])) ? (-6946268697011519389LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) arr_5 [12ULL] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = 6946268697011519388LL;
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_10 [i_6] [i_7] [2LL]);
                    var_19 = (i_7 % 2 == zero) ? (((/* implicit */short) ((min((var_0), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned char)9))))), (((arr_1 [(signed char)8] [(signed char)8]) << (((arr_6 [(_Bool)1] [i_7] [i_7] [i_6]) - (8816382179154405854LL))))))))))) : (((/* implicit */short) ((min((var_0), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned char)9))))), (((arr_1 [(signed char)8] [(signed char)8]) << (((((arr_6 [(_Bool)1] [i_7] [i_7] [i_6]) + (8816382179154405854LL))) - (4708183033208854916LL)))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)9)) == (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)0))))))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)17)) | (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_8)))))), (((/* implicit */int) (unsigned char)0)))))));
        var_22 = ((/* implicit */unsigned short) arr_23 [i_9] [i_9] [(short)0] [i_9]);
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9]))) == (7742151695366408735ULL)))), ((signed char)78)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58034))) / (arr_0 [i_9])))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    arr_32 [i_9] [i_9] [6U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [0ULL] [i_10 - 3]))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_31 [i_10] [i_10 - 2])), (var_4))) / (((/* implicit */unsigned long long int) ((arr_11 [i_9] [i_9] [i_9] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)17))))))));
                                var_25 = (signed char)108;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_41 [i_14] [i_14] [(signed char)10] [i_14] = (signed char)-17;
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((-2681709316659028482LL), (((/* implicit */long long int) (unsigned char)244)))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1613357455163669127ULL)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_38 [i_10] [i_10] [i_11] [i_9] [i_11] [i_10]))));
                        var_28 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_10 - 2] [i_10 - 2] [i_11]) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7502))) / (arr_28 [i_10 - 3] [i_10 - 3] [i_10])))));
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) (((+(min((var_0), (var_9))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2037684240976458373ULL)) ? (((/* implicit */int) (signed char)81)) : ((-(((/* implicit */int) var_11)))))))));
}
