/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57087
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = (~(((/* implicit */int) ((unsigned char) var_5))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [(short)5] [(short)5] [i_3] [(signed char)12])))))));
                        var_17 = ((/* implicit */unsigned int) var_10);
                        var_18 = ((/* implicit */short) var_1);
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_0] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_9)))) & (((arr_1 [2ULL] [2ULL]) ? (var_14) : (((/* implicit */unsigned long long int) arr_11 [i_0]))))));
                        var_19 = var_10;
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9)))))));
                                var_22 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_11 [(unsigned short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)1] [10ULL]))) : (var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        arr_19 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_7 - 1]) : (arr_11 [i_7 - 3])));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37540)) ? (8386041593432488194LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_7)));
        var_27 += ((long long int) var_2);
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_5 [i_7] [2] [(short)10]))));
    }
    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(3069990958U))))));
                                arr_32 [i_10] [i_9] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) var_0);
                                var_30 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_27 [i_10] [6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_0)))) <= (((arr_27 [i_10] [i_10]) / (var_13)))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) 1224976319U);
                    var_32 = (+(((arr_25 [i_8] [i_9] [i_10]) - (arr_25 [i_10] [18ULL] [i_8]))));
                    arr_33 [i_10] = ((/* implicit */unsigned short) arr_28 [i_8] [i_9] [(_Bool)1] [i_8]);
                    var_33 = ((/* implicit */unsigned int) ((min((160928127933267018LL), (((/* implicit */long long int) (_Bool)0)))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_8] [(unsigned short)13] [(unsigned short)13] [i_10] [16U]) == (((((/* implicit */_Bool) arr_31 [i_8] [2ULL] [(unsigned char)13] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) : (var_3)))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */short) max((0), (min((arr_27 [12LL] [12U]), (((/* implicit */int) max(((short)0), ((short)27244))))))));
    }
    var_35 = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) -160928127933267034LL)) ? (9ULL) : (6498640070602694281ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (var_12))))));
    /* LoopSeq 2 */
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        arr_38 [(short)2] = ((/* implicit */short) var_8);
        /* LoopNest 2 */
        for (unsigned short i_14 = 3; i_14 < 12; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                {
                    var_36 &= ((/* implicit */unsigned int) (((_Bool)1) ? (1083490221) : (((/* implicit */int) (unsigned char)241))));
                    var_37 = ((/* implicit */_Bool) arr_9 [i_15] [i_14] [(unsigned short)2] [i_15]);
                    var_38 *= ((/* implicit */_Bool) (+(min((var_4), (((/* implicit */int) arr_14 [(unsigned short)11] [i_13]))))));
                    var_39 ^= ((/* implicit */unsigned char) (~(var_11)));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned int) ((((_Bool) arr_14 [i_13] [(_Bool)1])) ? (((/* implicit */unsigned long long int) 1899946918)) : (max((((/* implicit */unsigned long long int) var_4)), (((arr_41 [i_13] [11ULL] [6]) + (var_1)))))));
    }
    for (unsigned short i_16 = 2; i_16 < 16; i_16 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_9)), (arr_45 [i_16]))) > (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        arr_47 [i_16] [8LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) 3069990940U)), (arr_30 [14LL] [10ULL] [4ULL] [10ULL] [4ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((arr_23 [i_16 - 1] [i_16]), (arr_23 [i_16 - 1] [i_16])))));
    }
    var_42 -= ((/* implicit */unsigned int) var_3);
}
