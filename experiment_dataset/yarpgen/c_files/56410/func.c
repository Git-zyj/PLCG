/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56410
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (+(max((((long long int) var_19)), ((-(var_16)))))));
                var_21 = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15816))))) ? (var_7) : (((/* implicit */unsigned int) (-(((((/* implicit */int) var_2)) & (((/* implicit */int) var_9)))))))));
                    var_23 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 596483388964945633LL)) ? (((/* implicit */unsigned long long int) 246004418)) : (15971101258978681547ULL))));
                }
                for (signed char i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    var_24 = ((/* implicit */signed char) var_4);
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((signed char) arr_10 [i_3 + 1] [7ULL] [7ULL] [(_Bool)1])))));
                }
                var_26 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1] [9LL] [(signed char)1] [i_0])) : ((-(((/* implicit */int) (unsigned short)64159)))))));
                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) min((arr_6 [11ULL] [i_1 - 1]), (arr_6 [i_0] [(signed char)3])))) : (var_10))) << (((min((((var_17) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) << (((arr_6 [i_0] [i_1 - 1]) - (114193643U)))))))) - (35559ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        for (long long int i_5 = 3; i_5 < 13; i_5 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((unsigned long long int) var_9)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 1] [i_5 - 3] [i_5])))))) << (((var_6) - (18007331354322508862ULL)))));
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_16))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                var_30 *= ((/* implicit */unsigned long long int) var_16);
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (long long int i_9 = 4; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((max((arr_16 [i_6]), (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_11))))))) + ((+(min((arr_16 [i_9]), (((/* implicit */long long int) arr_19 [i_6]))))))))));
                            var_32 |= ((/* implicit */unsigned short) ((11662393459945406087ULL) % (2475642814730870069ULL)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_33 = ((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(unsigned char)3] [7LL]))))) : (var_10));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(1393251174U))))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) var_10);
                            var_36 = ((/* implicit */signed char) var_5);
                        }
                        var_37 = (+(arr_27 [i_7] [i_10] [i_7]));
                    }
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1037995298U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_40 [i_10 + 2])))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_26 [i_6] [i_7] [i_14] [(unsigned short)5])) == (((max((((/* implicit */unsigned long long int) (_Bool)1)), (453845675409042483ULL))) + (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                            var_40 = ((/* implicit */unsigned long long int) var_8);
                            var_41 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))))));
                        }
                        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */long long int) (+(min(((+(0))), ((+(((/* implicit */int) var_12))))))));
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) min(((+(((long long int) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]))) < (35115652612096LL)))) & (((/* implicit */int) var_2))))))))));
                        }
                        for (unsigned int i_17 = 1; i_17 < 17; i_17 += 3) /* same iter space */
                        {
                            var_44 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) (+(((/* implicit */int) arr_41 [i_6] [i_7] [i_10 + 1] [i_10 - 1] [i_14] [i_14] [i_17])))))));
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + ((-(var_0))))))));
                            var_46 = ((/* implicit */short) ((((long long int) (!(((/* implicit */_Bool) var_1))))) << (((((((_Bool) arr_22 [(unsigned char)6] [i_7] [(unsigned char)6] [i_7])) ? ((-(126U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (4294967142U)))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_37 [i_6] [i_7] [i_10 + 2] [i_10 + 2] [i_17]))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) var_14))))))) : (var_6)));
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_33 [i_17 - 1] [i_6] [i_10] [i_10] [i_6] [i_6])))), (max((((/* implicit */unsigned long long int) arr_18 [i_17])), (arr_36 [i_6] [i_6] [(signed char)18] [i_6] [i_6])))))) ? (((unsigned long long int) var_18)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_17] [10ULL] [i_14] [i_14] [i_10] [0LL] [i_6]))))))));
                        }
                        var_49 += ((/* implicit */unsigned short) min((min((arr_42 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2]), (((/* implicit */unsigned long long int) var_12)))), (min((arr_42 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]), (arr_42 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                        var_50 = ((/* implicit */int) ((unsigned long long int) var_13));
                    }
                    var_51 |= (~((((~(453845675409042484ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6]))))))));
                }
                for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        var_52 = ((unsigned short) var_9);
                        var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        var_54 = ((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_6] [i_6] [i_18] [i_19]);
                        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (~(((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (66))))))))));
                    }
                    for (long long int i_20 = 4; i_20 < 17; i_20 += 1) 
                    {
                        var_56 = ((/* implicit */short) (((!(((/* implicit */_Bool) 17ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : ((~(arr_45 [i_18] [i_20 + 2] [i_20] [i_7] [i_20 - 3])))));
                        var_57 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (signed char)-123)))))) ? (((/* implicit */int) ((_Bool) ((signed char) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_6] [i_7] [i_18] [i_6])))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned int) var_6);
                        var_59 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) arr_34 [i_6] [i_6] [i_18] [i_21])))));
                    }
                    for (signed char i_22 = 2; i_22 < 16; i_22 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_23 = 1; i_23 < 17; i_23 += 1) 
                        {
                            var_60 *= ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_8), ((short)-22820))))));
                            var_61 = ((/* implicit */signed char) (-(((arr_28 [i_23] [i_23 + 1] [i_23 + 2] [i_23] [i_23 + 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4))))))));
                        }
                        for (signed char i_24 = 0; i_24 < 19; i_24 += 2) 
                        {
                            var_62 = ((/* implicit */unsigned char) max((17992898398300509122ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_63 = ((/* implicit */short) (-(min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_13))))))));
                        }
                        var_64 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_2)))), ((+(((/* implicit */int) arr_38 [i_22 + 2] [i_22 + 1] [i_22] [i_22 + 3] [i_22 - 1] [i_22 + 1]))))));
                    }
                    var_65 = ((/* implicit */long long int) min((var_65), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_61 [i_7] [i_7] [i_7] [15ULL]))))) == (((((/* implicit */_Bool) (+(arr_32 [i_6] [i_7] [i_6])))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                }
                for (unsigned char i_25 = 0; i_25 < 19; i_25 += 3) 
                {
                    var_66 = ((((var_17) * (var_6))) / (max((arr_39 [i_6] [i_6] [i_6] [i_25] [i_25]), (((/* implicit */unsigned long long int) var_0)))));
                    var_67 -= ((/* implicit */unsigned short) ((signed char) var_17));
                }
            }
        } 
    } 
}
