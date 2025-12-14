/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9518
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) var_12);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2 - 1] [i_3 - 1] [i_3] [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1]))))));
                        var_14 *= ((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_2 + 1] [i_3 + 2] [i_3])));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned char) (+(var_8)));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 ^= ((/* implicit */long long int) 16320);
                            arr_19 [i_6] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */int) var_9);
                            arr_20 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2099486274U)) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_11 [i_0] [i_1] [i_2] [i_5 + 2] [i_5] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            var_17 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                        }
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2 - 2] [i_1] [i_5 + 2] [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_21 [i_0] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) var_1);
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483631)) || (((/* implicit */_Bool) var_4))));
                        arr_24 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2]))));
                        arr_25 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        arr_29 [i_1] [i_1] = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_30 [i_1] = ((/* implicit */unsigned short) (~((~(((long long int) (unsigned char)255))))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) << (((/* implicit */int) ((arr_26 [5U] [5U] [i_2 - 1] [i_9] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_2] [i_9] [i_1]))))))))) ? (((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) (unsigned char)255))))) % (min((var_11), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2 + 1] [i_0])))))) : (((/* implicit */unsigned long long int) max((2289135713U), (((/* implicit */unsigned int) (unsigned short)25241)))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 2289135713U))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        arr_38 [i_1] [i_1] [i_10] = ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2005831575U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_1]))) : (0ULL))))) == ((((_Bool)1) ? (((/* implicit */int) (unsigned short)54668)) : (((/* implicit */int) (unsigned char)105)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */short) arr_34 [i_1] [i_2 - 1] [i_1] [i_11] [i_1] [i_11]);
                            arr_41 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)151))));
                            arr_45 [i_0] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) <= (((/* implicit */int) (unsigned char)12))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_1] [i_2] [i_10] [i_13] = ((/* implicit */short) arr_23 [i_2] [i_10] [i_13 - 1]);
                            arr_49 [i_0] [i_1] [i_2 + 1] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? (min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) - (92))))), ((~(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned short) (unsigned char)170)), ((unsigned short)54668)))))));
                        }
                        arr_50 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)104)))), (arr_22 [i_2 + 1] [i_2 - 1] [i_10] [i_10] [i_10]))));
                    }
                }
            } 
        } 
        arr_51 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)39536);
        arr_52 [i_0] = ((/* implicit */unsigned int) 9223372036854775807LL);
        var_24 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_1)))))), (min((((/* implicit */int) (signed char)-29)), ((+(((/* implicit */int) (short)-21848))))))));
    }
    for (int i_14 = 2; i_14 < 21; i_14 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) arr_53 [i_14]);
        arr_56 [i_14 + 1] [i_14] = ((/* implicit */unsigned short) ((_Bool) var_8));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            for (unsigned char i_16 = 3; i_16 < 19; i_16 += 1) 
            {
                for (unsigned short i_17 = 4; i_17 < 21; i_17 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) var_3);
                        arr_65 [i_14 + 1] [i_15] [i_14 - 1] [5] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 2684658606U)))) - ((+(((arr_58 [i_17] [i_15]) ? (1798393991U) : (2289135713U)))))));
                        arr_66 [i_14] [i_15] [(short)12] [i_15] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30002)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_14] [i_14]))) : (arr_55 [i_15])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -16346)) && (((/* implicit */_Bool) arr_64 [i_14] [i_15] [i_16] [i_17]))))) : (((/* implicit */int) ((((/* implicit */int) arr_64 [i_14] [i_15] [i_16] [i_17])) <= (((/* implicit */int) arr_60 [i_14] [i_15] [i_16 + 2])))))))) <= (-5569142292770039242LL)));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) var_2);
    var_28 = ((/* implicit */unsigned short) ((signed char) var_5));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (short i_20 = 1; i_20 < 7; i_20 += 4) 
            {
                {
                    var_29 = ((/* implicit */short) (+((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 3; i_21 < 7; i_21 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (short)-2189))));
                        var_31 = var_3;
                        var_32 = (unsigned char)118;
                    }
                    for (unsigned int i_22 = 3; i_22 < 7; i_22 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_33 [i_19] [i_19] [i_19] [i_20 + 1])));
                        var_34 = arr_8 [i_18] [i_19] [i_19] [i_19] [i_20] [i_22];
                        arr_82 [i_18] [i_19] [i_20] [i_20] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_20 - 1] [i_22] [i_22 + 2] [i_22] [i_22]))));
                        var_35 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) >> (0LL)))));
                    }
                    for (unsigned int i_23 = 3; i_23 < 7; i_23 += 1) /* same iter space */
                    {
                        arr_85 [i_18] [i_19] [i_18] [i_23] = ((/* implicit */signed char) (-(((/* implicit */int) arr_81 [i_20] [i_19]))));
                        arr_86 [i_18] [i_19] [i_19] [i_19] [i_19] [i_23 - 2] = ((/* implicit */short) 1126196704U);
                    }
                    arr_87 [i_19] [i_19] [i_20] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -158385562)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_18] [14U] [14U]))))));
                }
            } 
        } 
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-(((/* implicit */int) var_0)))))));
        arr_88 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((1820432528U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_18] [(_Bool)1] [(_Bool)1] [i_18] [i_18])))))) && (((/* implicit */_Bool) (signed char)110))));
        arr_89 [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_18] [i_18]))));
        arr_90 [i_18] = ((/* implicit */unsigned char) (-(((long long int) 524287U))));
    }
    for (long long int i_24 = 0; i_24 < 10; i_24 += 2) /* same iter space */
    {
        var_37 ^= ((/* implicit */signed char) (((+(arr_84 [i_24] [i_24] [i_24] [i_24]))) % ((-(((((/* implicit */_Bool) arr_3 [i_24])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_37 [i_24] [i_24] [i_24] [i_24] [i_24]))))))));
        /* LoopSeq 1 */
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            var_38 = ((/* implicit */unsigned int) var_2);
            /* LoopSeq 2 */
            for (unsigned int i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                arr_98 [i_25] [i_25] [i_25] = ((/* implicit */int) arr_68 [i_24]);
                arr_99 [i_25] = ((/* implicit */int) arr_81 [i_25] [i_26]);
                var_39 = ((/* implicit */unsigned char) ((arr_97 [i_25]) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) <= (2474534757U))))));
            }
            for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
            {
                var_40 = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (short)-1538)))));
                arr_102 [i_24] [i_25 - 1] [i_25] = ((/* implicit */signed char) (-((-(var_3)))));
                var_41 = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)39833))))));
            }
        }
        var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)2))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) || (((/* implicit */_Bool) var_12)))))))) || (((/* implicit */_Bool) min((((((/* implicit */int) arr_78 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) - (((/* implicit */int) arr_81 [i_24] [i_24])))), (((((/* implicit */int) var_9)) << (((var_5) - (10239996812996883103ULL))))))))));
    }
    for (long long int i_28 = 0; i_28 < 10; i_28 += 2) /* same iter space */
    {
        var_43 -= ((/* implicit */unsigned char) ((max((arr_54 [i_28]), (((/* implicit */unsigned long long int) arr_105 [i_28])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_28])))));
        arr_106 [i_28] = ((/* implicit */unsigned long long int) max((-10), ((-(((/* implicit */int) min((arr_70 [i_28] [3U] [i_28]), (((/* implicit */signed char) var_0)))))))));
    }
}
