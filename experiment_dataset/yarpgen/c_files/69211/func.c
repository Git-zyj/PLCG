/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69211
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1023U)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [(_Bool)1] [i_3 - 1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((arr_10 [i_4] [i_0 - 2] [i_4 + 1] [i_4 + 1] [i_3 - 1]) >= (arr_10 [i_2] [i_0 + 1] [i_2] [i_4 + 2] [i_3 + 2]))) ? (((((arr_10 [i_4] [i_0 - 3] [i_4] [i_4 + 1] [i_3 + 1]) + (2147483647))) >> (((arr_10 [i_0] [i_0 - 3] [i_4] [i_4 + 2] [i_3 + 3]) + (698097757))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294966273U)))))));
                                var_18 = ((/* implicit */long long int) (+((-(((/* implicit */int) ((signed char) arr_10 [i_4] [i_1] [i_2] [(unsigned short)10] [i_4 + 1])))))));
                                arr_14 [i_0 - 1] [i_1] [(short)12] [i_4] [i_3 - 2] [i_0 - 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_3] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))))) : (((/* implicit */long long int) ((var_6) >> (((((/* implicit */int) (unsigned char)165)) - (159)))))))) : (((/* implicit */long long int) min((arr_12 [i_3] [i_0] [i_4 + 3] [i_0 + 1] [(unsigned short)9] [i_0]), (arr_7 [i_3 + 3] [i_3 + 2] [i_3 + 2]))))));
                                var_19 -= ((/* implicit */unsigned char) ((max((4294966271U), (arr_2 [i_0 - 1] [i_3 + 3] [i_0 + 1]))) < (min((arr_2 [i_4] [i_3 - 2] [i_0 - 3]), (((/* implicit */unsigned int) arr_6 [i_1] [i_3 - 1] [i_0 - 2]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2] [i_0 - 2] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_1])))) / (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (unsigned char)91)) : (0)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_23 [i_5] = ((/* implicit */_Bool) ((1212497992276937882LL) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_8 [i_7] [9LL])) >> (((/* implicit */int) var_0)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) arr_20 [i_8] [i_5] [i_6] [i_8]);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (arr_9 [i_7 + 2] [i_7 + 2] [i_0 - 3] [i_0]) : (((((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_6] [i_5])) ? (arr_9 [i_0] [(short)17] [i_6] [(_Bool)0]) : (-909133478)))));
                            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0 - 3])) ? (((/* implicit */int) arr_26 [i_0 - 3] [i_0] [i_0] [12] [i_0 - 3] [i_6])) : (((/* implicit */int) arr_26 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_6]))));
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [(unsigned char)8])) && (((/* implicit */_Bool) arr_18 [i_8] [i_7] [i_6] [i_5])))))) >= (arr_5 [i_0 + 1])));
                        }
                        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_18 [i_0 - 3] [i_7 + 1] [i_7 + 1] [i_9 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_0 - 3] [i_7 + 3] [i_7 + 2] [i_9 - 1]))))));
                            arr_31 [i_0 - 3] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) var_3);
                            var_26 &= ((/* implicit */unsigned char) 1212497992276937875LL);
                            var_27 &= ((/* implicit */long long int) var_10);
                            arr_32 [i_0 - 1] [i_6] [i_6] [i_7 - 1] [i_7] [i_9] &= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_15 [i_6] [i_7 + 1])), (5508398815519966365LL))) >> (((max(((+(2965643723U))), (((/* implicit */unsigned int) min((arr_10 [i_0 + 1] [i_5] [i_6] [1U] [i_0 + 1]), (var_3)))))) - (3596869533U)))));
                        }
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) arr_16 [i_6] [i_7 + 2])) >= (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_6]))) : (var_5)))))), (((((/* implicit */_Bool) 4294966261U)) ? (arr_9 [i_7] [i_7] [i_6] [i_0 - 2]) : (arr_9 [19] [i_6] [i_7] [i_0 - 2]))))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_5] [i_6] [i_6])), ((+(((((/* implicit */_Bool) -941354414657992825LL)) ? (arr_10 [i_7] [11ULL] [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_30 [i_6])))))))))));
                    }
                } 
            } 
            arr_33 [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-113);
            var_30 -= ((/* implicit */unsigned char) arr_25 [i_5] [(_Bool)1] [16U] [i_5] [16U] [i_0 - 2] [i_0 - 2]);
            var_31 = ((/* implicit */_Bool) ((((941354414657992833LL) >= (1212497992276937896LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1448673998201183391LL)));
        }
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            arr_36 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */int) (short)2553);
            arr_37 [i_0] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_9 [i_0] [i_0 - 2] [i_0 + 1] [i_0])) ^ (1010U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_18 [i_0] [11U] [i_0] [11U])))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_10] [i_10]))), (min((((((/* implicit */int) arr_34 [i_0] [i_0])) - (arr_16 [(_Bool)1] [(_Bool)1]))), (((((/* implicit */int) arr_17 [i_0] [i_10] [14LL])) * (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 3]))))))));
        }
    }
    for (signed char i_11 = 3; i_11 < 19; i_11 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((min((((/* implicit */int) max(((unsigned short)44361), (((/* implicit */unsigned short) arr_40 [i_11]))))), (arr_10 [(unsigned char)5] [(unsigned char)5] [i_11] [i_11] [i_11]))), (((/* implicit */int) arr_39 [i_11])))))));
        arr_42 [i_11 - 1] = ((/* implicit */unsigned long long int) ((int) (~(arr_15 [(unsigned short)0] [i_11 - 1]))));
    }
    for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned char) arr_8 [i_12 - 2] [i_12 + 2]);
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 13; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_53 [i_12 + 1] [i_13] [i_14] [i_13] &= ((/* implicit */_Bool) max((((/* implicit */int) arr_38 [i_12])), (((((/* implicit */_Bool) 252U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [(short)1] [(short)1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            {
                                arr_60 [i_12 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_16] [i_15] [i_14] [i_13] [i_12])) ? (min((((/* implicit */long long int) (unsigned short)60588)), (arr_48 [i_13 + 2] [i_13 + 1] [i_12 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                var_33 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (min((var_8), (((/* implicit */long long int) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))))));
                                var_34 = ((/* implicit */int) arr_40 [i_12 - 1]);
                                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((1448673998201183420LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) < (((((/* implicit */_Bool) arr_57 [i_12] [i_13 + 2] [i_14] [i_15] [i_16])) ? (var_8) : (((/* implicit */long long int) arr_57 [i_12 - 2] [i_13 - 1] [i_14] [i_15] [i_16])))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */_Bool) (signed char)15);
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (((+(((/* implicit */int) ((unsigned char) 281474976709632LL))))) / (((/* implicit */int) arr_18 [i_12 - 2] [i_13 - 1] [(unsigned char)4] [i_14])))))));
                }
            } 
        } 
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((unsigned char) max((arr_54 [i_12] [i_12] [i_12] [i_12 + 1]), (((/* implicit */int) (short)-24756))))))));
    }
    for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 4) 
    {
        var_39 &= ((/* implicit */int) max(((signed char)-72), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_40 [i_17])), (var_8)))) && (((/* implicit */_Bool) arr_19 [i_17])))))));
        var_40 = (unsigned short)65535;
        arr_64 [i_17] = ((/* implicit */unsigned int) max(((+(arr_41 [i_17 + 2]))), (((/* implicit */long long int) ((_Bool) arr_11 [8])))));
        var_41 = ((/* implicit */unsigned long long int) var_8);
    }
}
