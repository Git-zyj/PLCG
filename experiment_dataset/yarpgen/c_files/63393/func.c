/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63393
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_1 + 3] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_5 [i_2] [i_1 - 2] [i_1 - 1] [i_2])) && (((/* implicit */_Bool) arr_5 [i_2] [i_1 - 2] [i_1 + 4] [i_2]))))));
                    arr_8 [i_1] [8U] |= ((/* implicit */short) arr_1 [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_3] [i_1]);
                        var_13 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_2] [i_2] [i_1 + 1] [i_2] [i_0])))));
                    }
                    for (signed char i_4 = 3; i_4 < 12; i_4 += 2) 
                    {
                        arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)174)), ((unsigned short)65535)))) ? (((/* implicit */int) ((unsigned char) max(((unsigned short)65522), (((/* implicit */unsigned short) (unsigned char)174)))))) : (((((/* implicit */int) arr_5 [i_0] [i_4 + 1] [i_2] [i_2])) ^ ((~(((/* implicit */int) arr_3 [(unsigned short)2] [i_4 - 1]))))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((((((/* implicit */_Bool) (unsigned short)12796)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 + 1]))))) - (17270490142684862104ULL))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (var_11)));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)82)) || (((/* implicit */_Bool) arr_15 [i_5 - 1]))));
        arr_18 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 1]))));
    }
    for (short i_6 = 4; i_6 < 15; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6 + 2] [i_6] [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_33 [i_6 - 3] [i_6 - 1] [i_6] [12U] [i_6 - 4] [i_6 + 2] [i_6 + 1])) : (((/* implicit */int) arr_33 [i_6 - 4] [i_6] [i_6] [(_Bool)1] [i_6 - 1] [i_6 + 2] [(_Bool)1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_33 [i_6 - 2] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6])))) : ((+(((/* implicit */int) arr_33 [i_6 - 3] [0ULL] [i_6 - 2] [8LL] [i_6 - 2] [i_6 - 2] [i_6 - 4])))))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12784))))) && (((/* implicit */_Bool) ((arr_23 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((max((524287LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) | (1893660326U)))))) != (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_29 [i_11])) != (((/* implicit */int) (unsigned short)12787)))))))))))));
                        var_20 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [(short)11] [12U] [12U] [i_6 - 4] [i_6 - 2] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_33 [i_6 - 4] [i_7 - 1] [i_8] [i_11] [i_8] [i_6 - 4] [i_7 + 1])) : (((/* implicit */int) arr_33 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 2] [(unsigned short)5] [i_6 - 2] [i_6 + 1]))))) : (min((8849145185183990401ULL), (var_11))));
                        var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_35 [i_7 - 1] [i_11] [(unsigned short)10] [(short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (_Bool)1))));
                    }
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        arr_41 [i_6] [i_7 - 2] [i_8] [i_8] = ((/* implicit */unsigned short) arr_27 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6 + 2])) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_39 [i_6] [i_6] [i_6] [i_6] [i_6 - 2] [i_6])))))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_26 [i_6 - 2]), (arr_26 [i_6 - 1])))), (((var_7) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1428224672U))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_14 = 1; i_14 < 14; i_14 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)12778)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)12782))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) > (arr_34 [i_6] [i_7 + 1] [i_8] [i_13] [i_14 - 1]))))) < (var_3)));
                        }
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) arr_27 [i_7 + 4] [(short)11] [i_7 + 4])))) : (((/* implicit */int) min((arr_27 [i_7 + 2] [i_8] [i_8]), (arr_27 [i_7 + 3] [i_7 + 3] [i_7 + 3])))))))));
                    }
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) arr_16 [i_6] [i_7]);
                        arr_51 [i_6 - 2] [i_8] [i_8] [i_15] [i_6 - 2] = (~(3479720952U));
                        var_29 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) max(((unsigned char)204), (((/* implicit */unsigned char) (signed char)68))))) >> (((arr_45 [i_6 + 2]) - (1888952978U))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((+((-(((/* implicit */int) (unsigned char)120)))))) > (((/* implicit */int) ((signed char) max((arr_26 [i_8]), (((/* implicit */unsigned char) arr_32 [i_6] [(signed char)13] [(short)13] [(short)13])))))))))));
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_15] [i_15] [i_8] [12LL] [i_6]))));
                    }
                }
            } 
        } 
        arr_52 [i_6] = ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_45 [i_6 - 4])), (7303208330586752902ULL)));
        arr_53 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16556)))))))) + (((((/* implicit */int) (signed char)127)) + (((((/* implicit */int) (signed char)108)) - (((/* implicit */int) arr_42 [i_6 - 3] [i_6] [i_6] [i_6]))))))));
    }
    var_32 -= ((/* implicit */_Bool) var_7);
    var_33 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (+(var_3)))))));
}
