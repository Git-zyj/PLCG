/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73529
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_19 = ((((/* implicit */_Bool) (signed char)-91)) ? (-285450494) : (((/* implicit */int) (signed char)-84)));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        arr_10 [i_0] [(unsigned short)3] [i_1] [(unsigned short)3] [i_2] [i_3 + 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((8U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))))));
                    }
                    for (short i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_8 [i_4]))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (arr_12 [i_0] [i_1 + 2] [i_4 + 1] [i_4] [i_4])));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(((arr_5 [i_0] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        var_22 = ((/* implicit */long long int) (-(arr_12 [i_0] [(unsigned short)6] [i_2] [i_4 - 4] [i_1 - 2])));
                        var_23 = ((/* implicit */long long int) max((var_23), (arr_13 [i_4] [i_1 + 1] [i_4 - 2] [i_4])));
                    }
                    var_24 = ((/* implicit */long long int) max((var_24), (var_17)));
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_18))));
                    var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)112)))) : (arr_5 [i_0] [i_0] [i_2])));
                    arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) <= (4007779403U)));
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned int) ((long long int) (short)-29913));
    }
    for (int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) -1);
        var_28 = ((/* implicit */unsigned char) ((((_Bool) (signed char)87)) ? ((+(-1007297617))) : ((-2147483647 - 1))));
        var_29 ^= ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), (var_2)));
        var_30 = ((/* implicit */unsigned short) 9223372036854775807LL);
        var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (short)-32750)))) && ((!(((/* implicit */_Bool) 285450475))))));
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_32 *= ((/* implicit */short) arr_21 [i_6]);
        var_33 = ((/* implicit */unsigned char) arr_21 [i_6]);
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (unsigned char)169))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (287187892U) : (((/* implicit */unsigned int) 0)))))));
        var_34 |= ((/* implicit */unsigned long long int) (~(((arr_17 [i_6]) & (arr_17 [i_6])))));
        var_35 = ((/* implicit */unsigned int) ((short) max((arr_16 [i_6] [i_6]), (arr_16 [i_6] [i_6]))));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13606)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */long long int) var_3)) - (var_10)))));
    var_37 = var_16;
    /* LoopSeq 3 */
    for (int i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_38 &= ((/* implicit */long long int) ((int) (~(min((1007297642), (var_15))))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_39 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_26 [i_7 - 1] [i_7 + 1] [i_9 - 2])))));
                        var_40 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_24 [i_10])))), (((((/* implicit */int) arr_29 [i_8] [i_9] [i_8] [i_8])) + (((/* implicit */int) arr_31 [i_8]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (-1)))) ? (min((2983360397359856019LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) arr_27 [i_7 + 3] [i_7 + 3] [i_9 - 1]))))));
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -285450494)) ? (((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_7])) ? (((/* implicit */int) arr_23 [i_9] [i_10])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_32 [i_7] [i_7 + 2] [(unsigned char)20] [i_9 + 1]))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) arr_32 [i_9 - 2] [i_8] [i_8] [i_7 + 2]))))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((short) min((arr_30 [i_9 - 2] [i_8] [i_8]), (arr_30 [i_9 + 1] [i_8] [i_9])))))));
                        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((short) max((((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7]))) | (var_5))), (((/* implicit */long long int) arr_25 [i_7]))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 1; i_11 < 21; i_11 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned char) min((((/* implicit */long long int) -1)), (((((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [14ULL]))) <= (24LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (-53LL)))));
        /* LoopNest 2 */
        for (short i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 22; i_14 += 4) 
                    {
                        for (signed char i_15 = 2; i_15 < 23; i_15 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */long long int) (~(((arr_31 [i_14]) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1))))))))));
                                var_46 = arr_23 [i_11 + 2] [i_13];
                                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (0LL))))))) : (max((((/* implicit */int) (unsigned char)127)), (min((-1180969189), (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        arr_46 [i_11] [i_11 - 1] = ((/* implicit */unsigned long long int) arr_42 [i_11 + 2] [i_11 + 3] [i_11 + 3] [13LL] [i_11 + 3]);
        var_49 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_11 + 3] [i_11] [i_11 - 1]))));
    }
    for (int i_16 = 1; i_16 < 21; i_16 += 3) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned short) min((8092811781682199843ULL), (((/* implicit */unsigned long long int) ((((unsigned int) arr_40 [i_16] [i_16] [i_16 + 1])) >> (((((((/* implicit */int) (signed char)127)) * (((/* implicit */int) var_2)))) + (11322))))))));
        arr_49 [i_16] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23614))) < (((((/* implicit */_Bool) 1007297617)) ? (((/* implicit */unsigned long long int) min((3844436048U), (((/* implicit */unsigned int) arr_29 [i_16] [i_16] [i_16] [i_16]))))) : (10353932292027351773ULL)))));
        var_51 = ((/* implicit */short) ((var_14) + (((unsigned int) max((((/* implicit */unsigned int) (signed char)-91)), (arr_27 [12U] [10] [i_16]))))));
    }
    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) + (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (450531248U)))))) ? (-1180969189) : ((+(-1007297617))))))));
}
