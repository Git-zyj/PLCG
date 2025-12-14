/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81027
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)116)) ? (68719476735LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = var_1;
                    var_13 = ((/* implicit */int) ((((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
                for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_5 - 2] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_5 + 2] [i_0 - 2])))), (((var_6) / (((/* implicit */int) arr_2 [i_5 + 4] [i_0 - 1]))))));
                                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)116)) : (975888566)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)126))))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)11955)) >> (((/* implicit */int) (_Bool)1))))))) * (var_7)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_3] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_18 [i_0 - 1])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))))) << (((((/* implicit */int) max(((unsigned char)116), (((/* implicit */unsigned char) (_Bool)1))))) - (102)))));
                        var_18 = ((/* implicit */short) arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 1]);
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)115)))))));
                            arr_26 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) arr_1 [i_0] [i_6])) : (((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) -1885749838)))))))));
                            var_20 *= ((/* implicit */unsigned short) var_5);
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) -1885749837);
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_0 + 1] [i_1] [i_3] [i_6] [i_8]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_6] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_9))))) <= (var_10)))) : (((/* implicit */int) ((unsigned short) arr_25 [i_1] [i_0] [i_1] [i_3] [i_6] [i_6] [i_8])))));
                            var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3517))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 4294967295U))));
                        }
                        var_25 &= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)11956)) <= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [i_1])))) ? (((/* implicit */int) ((_Bool) (unsigned char)219))) : (((var_6) - (((/* implicit */int) arr_11 [i_0] [i_1] [i_0 - 1] [i_1]))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 ^= ((/* implicit */unsigned char) -1938073597);
                        var_27 = ((/* implicit */_Bool) max((var_27), (var_1)));
                    }
                }
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 4; i_12 < 17; i_12 += 2) 
                        {
                            {
                                var_28 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3828632457U)) ? (2802297123U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))))));
                                arr_40 [i_0 - 2] [i_1] [i_0] [i_11] [i_12] [i_12] = ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) != (min((var_10), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_12 + 1] [i_12] [i_12 - 4] [i_12] [i_12 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 2; i_13 < 12; i_13 += 2) 
    {
        for (short i_14 = 2; i_14 < 9; i_14 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_15 = 1; i_15 < 12; i_15 += 1) 
                {
                    for (short i_16 = 2; i_16 < 10; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) var_7)), (((/* implicit */int) (!(var_1))))))) ? (((/* implicit */unsigned int) arr_52 [i_13] [i_14] [i_13] [i_16] [i_17] [i_13])) : ((+(((3828632457U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                                var_30 = (unsigned char)0;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_20 = 1; i_20 < 10; i_20 += 2) 
                            {
                                arr_61 [i_18] [i_20] = ((/* implicit */signed char) (_Bool)1);
                                var_31 ^= ((/* implicit */unsigned long long int) max(((+(arr_31 [i_20 + 2] [i_18] [i_13] [i_13]))), (((/* implicit */unsigned int) arr_9 [i_14] [i_19] [i_14] [i_20]))));
                            }
                            var_32 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)156)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) & (140737487306752LL)))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_28 [i_14] [i_18] [i_14] [i_13] [i_13]) << (((((/* implicit */int) (unsigned char)139)) - (121))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)84))))))))) ? (-693292465) : (((/* implicit */int) var_5))));
                            /* LoopSeq 2 */
                            for (short i_21 = 0; i_21 < 13; i_21 += 1) 
                            {
                                arr_64 [i_18] = (-(((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (short)-17944)) : (((/* implicit */int) (unsigned char)33)))));
                                var_34 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_13]))))) ? (((/* implicit */unsigned long long int) arr_60 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13] [i_14 + 2] [i_21] [i_21])) : (((((/* implicit */_Bool) arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 - 1])) ? (((/* implicit */unsigned long long int) var_8)) : (var_7)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_53 [i_14] [i_14] [i_14] [i_14] [i_14])) : (((((/* implicit */_Bool) arr_20 [(short)18] [i_14] [i_18] [i_19] [i_21])) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)30))))))) : (((((70368744177663ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-512))))) / (((/* implicit */unsigned long long int) (+(var_3))))))));
                            }
                            for (short i_22 = 1; i_22 < 9; i_22 += 2) 
                            {
                                var_35 = ((/* implicit */signed char) (-((~(((/* implicit */int) (short)-284))))));
                                var_36 ^= ((/* implicit */unsigned char) arr_56 [i_13] [i_14] [i_18]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
