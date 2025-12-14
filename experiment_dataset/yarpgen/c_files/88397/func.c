/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88397
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
    var_20 = -1339453072;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) 4283228409U);
        var_22 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_18)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (var_9)))) && (((/* implicit */_Bool) -1822963199374198874LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                {
                    var_23 -= ((/* implicit */unsigned short) (+(var_11)));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3263084468195638259LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)41027))));
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 12307375918018523771ULL))));
                    arr_10 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */int) min((arr_0 [i_2] [i_2]), (var_1)));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) var_17))))) : (((unsigned long long int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */int) arr_4 [i_4] [i_1]);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 4; i_6 < 17; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_24 [i_1] [i_4] [i_6 - 3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL))));
                            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_6 + 1] [i_5] [i_1])) ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((+(arr_22 [i_1] [i_4] [i_5] [i_1] [i_6] [i_7])))));
                            var_29 = (!(((/* implicit */_Bool) var_3)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) max((var_30), ((+(((-1891435960570070444LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))))));
            var_31 = ((long long int) arr_20 [i_1] [i_8] [i_1] [i_1] [i_8] [i_1]);
        }
        /* LoopSeq 4 */
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            arr_29 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2873182880192431730LL), (61572651155456LL)))) ? (((/* implicit */int) arr_5 [i_9] [i_9])) : (((/* implicit */int) var_17)))))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                arr_33 [i_10] [(_Bool)1] [i_10] = ((arr_14 [i_9] [i_10]) & (max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) arr_9 [i_1] [i_10] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))) : (12307375918018523766ULL))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)23))))), (arr_12 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (-(arr_20 [i_10] [i_10] [i_9] [i_9] [i_1] [i_10])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (1883030711)))) ^ (((((/* implicit */_Bool) arr_30 [i_10 + 1] [i_9] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (127ULL)))))));
            }
            for (signed char i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_42 [i_1] [3] [(unsigned short)16] [i_11] [3] [14LL] [(unsigned char)5] = ((/* implicit */unsigned short) var_16);
                            arr_43 [i_1] [i_1] [i_1] [i_11 + 1] [i_12] [i_12] [i_13] = ((/* implicit */int) ((((arr_17 [i_11 + 1]) + (arr_17 [i_11 - 1]))) / (((((/* implicit */_Bool) arr_8 [i_13 - 2] [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13 - 1] [i_13 - 2]))) : (arr_17 [i_11 - 1])))));
                            arr_44 [i_1] [5U] [i_11] [i_12] [i_11] = ((/* implicit */long long int) var_12);
                            var_33 -= ((/* implicit */signed char) min((var_18), (min(((+(var_16))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_12])) - (-1490005159))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (((-(var_19))) / (var_19)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)29238))));
                        var_35 ^= arr_32 [i_11] [i_11 + 2] [i_11] [i_14];
                        arr_53 [i_15] [i_15] [i_11] [i_11] = ((/* implicit */int) arr_30 [i_11 + 2] [i_11 - 1] [i_11 + 2]);
                        var_36 = ((/* implicit */long long int) 12307375918018523743ULL);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_1] [i_1] [i_11] [i_14] [i_16] = ((/* implicit */unsigned short) min((arr_14 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((arr_11 [i_14] [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_11 + 1] [i_1]))) : (9223372036854775807LL))))));
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) var_19))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) max(((+(arr_4 [i_11 + 2] [i_14]))), (min((arr_4 [i_11 + 1] [i_16]), (arr_4 [i_11 - 1] [i_16]))))))));
                        arr_58 [15ULL] [i_11 + 1] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_0)))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                    {
                        arr_62 [i_17] [i_17] = ((/* implicit */unsigned short) (+(min((var_18), (arr_20 [i_11 + 2] [i_11 - 1] [i_11 + 1] [15LL] [i_11 - 1] [i_17])))));
                        var_38 ^= ((/* implicit */unsigned short) ((long long int) (~((-(((/* implicit */int) var_17)))))));
                        var_39 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)62259)), (15872413567559654004ULL)));
                        arr_63 [i_1] [i_1] [i_11] [i_1] [i_17] = ((/* implicit */unsigned int) var_1);
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26046)))))) : (var_16)))) || (((/* implicit */_Bool) (signed char)-2)))))));
                    }
                    var_41 = ((/* implicit */_Bool) var_10);
                }
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
                {
                    arr_66 [i_1] [i_9] [i_9] [i_9] [i_11] [i_18] = ((/* implicit */signed char) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26046))) * (var_6)))))));
                    var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1] [17]))));
                    /* LoopSeq 1 */
                    for (int i_19 = 1; i_19 < 17; i_19 += 3) 
                    {
                        arr_70 [i_1] [13LL] [i_19] [4U] [5LL] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)26019);
                        var_43 = arr_21 [i_1] [i_1] [i_9] [i_11] [i_11 - 1] [i_18] [i_9];
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                        arr_73 [i_18] [i_1] = ((/* implicit */unsigned short) min((arr_49 [i_20] [i_18] [i_11] [6] [i_1] [i_1]), ((~(288230376151711744LL)))));
                        arr_74 [i_20] [i_18] [i_18] [i_11] [(signed char)2] [i_9] [i_1] = ((/* implicit */unsigned int) min((-3328541627986173069LL), (((/* implicit */long long int) var_0))));
                        arr_75 [i_1] [i_9] [i_11 - 1] [i_11 - 1] [i_20] = var_0;
                    }
                    arr_76 [i_18] &= var_7;
                }
            }
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) (_Bool)0))));
            arr_79 [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_69 [i_1] [i_21] [i_1] [i_1] [i_21]))));
        }
        for (unsigned int i_22 = 0; i_22 < 18; i_22 += 3) 
        {
            var_46 = 503316480;
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 61572651155456LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 134217728)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39505))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [(signed char)17] [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_22])) ? (arr_23 [i_1] [i_1] [i_1] [i_22] [i_22]) : (((/* implicit */unsigned long long int) arr_82 [1LL] [i_22])))))))));
            var_48 = ((/* implicit */unsigned int) var_4);
        }
        for (unsigned long long int i_23 = 1; i_23 < 17; i_23 += 4) 
        {
            var_49 -= ((/* implicit */signed char) (_Bool)0);
            arr_87 [i_23] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_23 - 1]))) > (var_14)))), (arr_30 [i_1] [i_1] [i_1]))))));
        }
    }
}
