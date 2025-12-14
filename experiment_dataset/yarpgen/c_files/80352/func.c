/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80352
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
    var_14 = ((var_11) != (((/* implicit */unsigned int) var_3)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 2]))) ? (((/* implicit */int) max((arr_1 [i_0 + 1]), (var_5)))) : (arr_5 [i_1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((((long long int) arr_0 [i_2 + 1])), (((/* implicit */long long int) (_Bool)1))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) > (((unsigned int) (signed char)108)))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_4))), (min((var_7), (((/* implicit */unsigned long long int) (short)-9228)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_0] [i_3] [i_2 + 1] [i_3] [i_4])))))))));
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) (~(-7145278196022878732LL))))), (max((arr_6 [i_2 + 1] [i_1] [i_0 - 1]), (((/* implicit */long long int) (short)-1))))));
                            var_18 = ((/* implicit */unsigned int) ((((long long int) (_Bool)1)) - (((/* implicit */long long int) arr_4 [i_1]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_18 [i_1] = (+(18446744073709551615ULL));
                            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8191))));
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            arr_23 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [i_3] [3U])) ? (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_1] [0LL] [(_Bool)1] [i_6] [i_1])) : ((-(13203532859128281076ULL))))));
                            arr_24 [i_1] [i_3] [i_2] [i_2] [i_2] [i_1] [i_1] = (+((+(((int) (_Bool)1)))));
                            var_21 |= ((/* implicit */short) min((max((arr_13 [i_3] [i_3]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_3] [i_3] [i_6])))))));
                            arr_25 [i_1] [i_6] [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)8210))));
                            arr_26 [i_1] = ((/* implicit */unsigned long long int) arr_15 [i_0] [10U] [i_1] [i_2 + 1] [i_3] [i_3] [i_6]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)24880))));
                            var_23 = ((/* implicit */unsigned char) arr_8 [i_1]);
                        }
                        var_24 = ((/* implicit */unsigned short) (unsigned char)117);
                        arr_31 [(short)7] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1336435836)), ((+(arr_19 [i_0] [i_1] [i_2] [11] [i_3] [i_0 - 1] [i_1])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_21 [(unsigned char)8] [i_0 - 2] [i_0] [i_0 + 1] [(unsigned char)8])) >> (((/* implicit */int) arr_21 [(short)0] [i_0 - 1] [i_0] [i_0 - 1] [(short)0]))))));
        var_26 *= max((((((/* implicit */_Bool) arr_29 [i_0 - 1] [8U])) || (((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) arr_29 [i_0 + 1] [2LL])))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            arr_36 [i_8] [i_9] = ((/* implicit */unsigned int) max(((-(max((((/* implicit */unsigned long long int) (short)1984)), (13203532859128281076ULL))))), (((/* implicit */unsigned long long int) (unsigned short)58410))));
            arr_37 [i_9] = ((/* implicit */unsigned char) (+(arr_30 [i_8 - 2] [i_8 - 1] [i_8] [i_8 - 2] [0U])));
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-6795757619560716119LL), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)158))))) : ((-(max((3364007049U), (((/* implicit */unsigned int) arr_0 [i_8]))))))));
        arr_38 [i_8 - 2] = ((/* implicit */short) arr_6 [i_8 + 1] [(unsigned char)4] [i_8 + 1]);
    }
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_28 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)8178))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) 
            {
                for (long long int i_13 = 4; i_13 < 11; i_13 += 1) 
                {
                    {
                        arr_52 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) max((((long long int) var_5)), (((/* implicit */long long int) var_12)))));
                        arr_53 [i_10] [i_10] = ((/* implicit */unsigned char) var_12);
                        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)30824)))))) >> (((((min((((/* implicit */unsigned int) arr_8 [2LL])), (arr_45 [i_12] [i_11] [i_12]))) << (((arr_42 [(_Bool)1] [i_10]) - (1322777408U))))) - (1614938089U)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_58 [i_10] [i_11] [i_12 + 1] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 4010871391647876404LL))) ? (var_6) : (((/* implicit */unsigned long long int) arr_6 [i_12] [4LL] [i_12]))));
                            var_30 = ((/* implicit */unsigned long long int) var_2);
                            arr_59 [i_10] [i_10] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_13] [i_11] = ((/* implicit */unsigned short) var_4);
                            arr_60 [i_10] [i_14] [i_12 - 1] [i_13 - 1] [i_13] = ((/* implicit */unsigned short) ((((2014458182) >= (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */int) arr_33 [i_10] [i_10])) << (0))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (arr_32 [i_13]))))));
                        }
                        for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */int) (-(((arr_46 [i_10] [i_10]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_7)))));
                            arr_63 [1] [i_12] [i_13 - 3] [i_15] = ((/* implicit */short) (~(min((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)202)))))))));
                            var_32 -= ((/* implicit */unsigned char) (-(((/* implicit */int) max(((short)-1), ((short)-8650))))));
                        }
                        arr_64 [i_10] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_28 [i_12 - 2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0))))))))));
                    }
                } 
            } 
        } 
    }
    var_33 = (unsigned short)128;
    var_34 = var_0;
    var_35 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) 9312933297915490300ULL)) || (((/* implicit */_Bool) (unsigned char)74))))) : (((/* implicit */int) var_10)))));
}
