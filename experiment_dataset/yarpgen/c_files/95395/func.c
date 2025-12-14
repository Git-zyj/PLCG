/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95395
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) (short)-5904)) : (((/* implicit */int) max((arr_0 [(signed char)4]), (arr_1 [i_0]))))))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0])))));
        arr_3 [i_0] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [(short)2] [(short)2] [(signed char)4] = ((/* implicit */unsigned short) -8366214279118735237LL);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_2] [i_2] [i_3] [i_3])))) - (((((/* implicit */_Bool) -8366214279118735225LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14512913761383295890ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_3] [i_4] [i_4])))))) : (12838544489108006160ULL)))));
                                var_15 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_1] [i_1])), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))) | (((((/* implicit */_Bool) (short)18677)) ? (9778765506143677029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_5 [i_1]))));
                    arr_19 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1152300875766709235ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9989))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)5889))) | (1400925359U)))))) ? (arr_9 [i_1] [i_6]) : (((((/* implicit */long long int) ((unsigned int) arr_5 [i_1]))) / (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (1988739060453733554LL)))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1]), (((/* implicit */long long int) (short)-10000))))) ? (((/* implicit */int) arr_16 [i_1] [(unsigned short)4] [i_6] [(signed char)1] [i_1] [10U] [i_6])) : (((/* implicit */int) ((short) 1920904399731250381ULL))))))));
        }
    }
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
    {
        var_19 |= ((/* implicit */short) (+(min((15180082449308921541ULL), (((/* implicit */unsigned long long int) arr_0 [i_7]))))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_33 [i_7] [i_8 + 1] [(short)5] [i_10] [i_11] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23445))) % (17294443197942842381ULL)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_7] [i_9] [i_10] [i_11]))))) ? (((6542496938177176168LL) / (((/* implicit */long long int) ((/* implicit */int) (short)635))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_9 [(short)12] [(short)12])))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), ((+(((unsigned long long int) (short)-5725))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((arr_25 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_20 [i_9]))))))) ? (((((((/* implicit */_Bool) arr_9 [i_7] [i_9])) ? (2446188856U) : (var_0))) << (((arr_26 [i_8 + 2] [i_8 + 2] [i_8] [i_8 - 1]) - (10699292836457506564ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_31 [i_7] [i_8 + 2] [i_9])), (arr_25 [i_7] [8U]))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_7] [i_8] [i_8 + 1] [i_8] [i_8 - 1])), (var_5)))), ((+(-8116042224368096466LL))))))));
                }
            } 
        } 
        arr_34 [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_7)));
        var_24 -= ((/* implicit */long long int) arr_1 [i_7]);
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((signed char) max((4037625025U), (((/* implicit */unsigned int) (unsigned short)54602)))))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    {
                        arr_43 [8] [i_13] = ((/* implicit */unsigned long long int) min(((-((+(((/* implicit */int) var_1)))))), (((/* implicit */int) (short)-4))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((var_7) < (var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_7] [i_12] [i_7] [i_12] [i_14] [i_15]))))) ? ((~(((/* implicit */int) arr_4 [i_13])))) : (((/* implicit */int) arr_16 [i_14 + 4] [11U] [i_14 - 1] [i_14] [i_14 + 3] [i_14] [i_14 + 4]))))) : (arr_26 [i_7] [i_7] [i_7] [i_7]))))));
                            arr_46 [i_7] [i_12] [i_13] [i_14] [i_13] = ((/* implicit */long long int) (_Bool)1);
                            arr_47 [i_13] [i_13] [11U] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2115))) & (9778765506143677029ULL)))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)-30000)), (7342939874493934772ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_7] [i_7] [(unsigned short)1] [i_7] [i_14 + 1] [i_14 + 4] [i_15])), (arr_29 [i_7] [i_12] [i_13] [(signed char)8] [i_12] [i_14])))))))));
                        }
                        arr_48 [(unsigned short)12] [i_13] [i_13] = ((/* implicit */signed char) 1017838204U);
                        var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_14] [8ULL]));
                    }
                } 
            } 
            arr_49 [10] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_27 [i_7] [i_7] [i_7])))) ? (max((((/* implicit */unsigned long long int) arr_35 [i_7])), (arr_10 [i_7] [i_7] [i_12] [0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)24905), (((/* implicit */unsigned short) (signed char)-103))))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned long long int) var_1)), (((arr_39 [i_7] [i_7]) ^ (arr_36 [(short)12])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (arr_6 [i_12] [i_12]) : (arr_6 [i_7] [i_7])))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024))) - (2894041936U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [5ULL])))))))));
            arr_50 [5U] = ((/* implicit */short) min((12838544489108006174ULL), (((/* implicit */unsigned long long int) ((-3419141408148598136LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11631735260912143893ULL)) && (((/* implicit */_Bool) arr_45 [i_7] [8ULL] [i_12] [(_Bool)1] [i_7])))))))))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
    {
        arr_53 [i_16] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_6 [i_16] [i_16]))), (((arr_6 [i_16] [i_16]) / (arr_6 [i_16] [i_16])))));
        arr_54 [i_16] = ((/* implicit */_Bool) arr_16 [i_16] [(short)4] [i_16] [i_16] [i_16] [i_16] [i_16]);
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_37 [i_16] [i_16]))));
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned int) (~(((arr_17 [i_16] [i_16]) ? (((/* implicit */int) arr_27 [i_16] [i_16] [i_16])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_16]))) <= (var_5))))))));
    }
    var_30 = ((/* implicit */unsigned int) ((signed char) (~(var_3))));
    var_31 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6))))));
    var_32 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_8) % (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) % (((long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (-5490757965890010566LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
