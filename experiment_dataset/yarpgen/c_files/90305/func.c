/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90305
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
    var_17 = ((/* implicit */int) 15251175554893797963ULL);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0])) != (((((/* implicit */_Bool) 14878378485226425646ULL)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) << (((((((/* implicit */_Bool) 14197664529916642937ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (arr_5 [i_2] [i_1] [i_0] [i_0]))) - (9370)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0] [i_1])), (arr_5 [i_2] [i_2] [i_1] [i_0])))) : (var_11)));
                arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (((4329764837933158177ULL) << (((((/* implicit */int) ((unsigned char) 9124852543678596961ULL))) - (50)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? ((-(var_11))) : (4329764837933158183ULL)));
                    var_21 -= ((((/* implicit */_Bool) arr_9 [i_0] [i_3 + 1] [i_3 - 2] [i_3 + 1])) ? ((~(arr_2 [i_0] [(short)4] [i_2]))) : (3568365588483125969ULL));
                }
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_0] [4])) : (4329764837933158177ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4 - 1] [i_2])) != (((/* implicit */int) (unsigned short)65535))))) : (min((-1978331932), (arr_16 [i_0] [i_4 + 1] [i_2] [i_2] [i_5] [i_4 + 1])))));
                        var_23 += (+(14878378485226425646ULL));
                        var_24 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [(short)2] [i_5]);
                        arr_17 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)240);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) | (14878378485226425662ULL))))));
                        var_26 = ((/* implicit */short) 0ULL);
                        var_27 = ((signed char) arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_2] [i_6 - 1] [i_6 - 1]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1099511627775LL)), (0ULL)))) ? ((+(((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])))))));
                        var_29 *= ((((/* implicit */unsigned long long int) 436462856U)) & (14878378485226425662ULL));
                        var_30 = ((/* implicit */unsigned char) (+((-((~(((/* implicit */int) arr_18 [i_0] [i_1] [i_2]))))))));
                        arr_23 [i_0] [i_1] [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -2LL)) ? ((+((+(((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_7])))))) : ((+(arr_16 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_2] [i_4] [i_4 + 1])))));
                        arr_24 [i_0] [i_2] = ((/* implicit */signed char) ((long long int) min((((/* implicit */short) (unsigned char)162)), ((short)-32756))));
                    }
                    arr_25 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_1] [i_0] [i_4 + 1])) ? (arr_13 [i_0] [i_2] [i_0] [i_2] [i_4] [i_4 - 1]) : (arr_13 [i_0] [i_1] [i_1] [i_2] [i_4 + 1] [i_4 + 1]))), (((/* implicit */int) min((arr_12 [i_4 - 1] [i_2]), (arr_12 [i_4 + 1] [i_2]))))));
                }
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_31 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) 3568365588483125970ULL)))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_8] [i_2] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [0ULL] [i_1] [i_1] [0ULL] [i_1] [i_1] [i_1]))) / (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned char)1] [i_1] [(short)9] [(unsigned char)10])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1845880858)) ? (arr_20 [i_0] [i_1] [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_28 [i_0] [i_1] [i_0] [i_8])))) : ((-(var_15))))))))));
                }
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) max((14878378485226425662ULL), (((/* implicit */unsigned long long int) (unsigned char)162))));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30688))) : (2409483955947878286ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7423))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_13)) ? (15527192297836668566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */unsigned long long int) var_13)))), (var_0)));
                    var_36 *= arr_12 [i_0] [i_11];
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    arr_41 [i_12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((-1845880847), (((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [6]))))) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) min((((/* implicit */short) (signed char)73)), (var_12)))))), (((/* implicit */int) (unsigned char)149))));
                    var_37 = arr_12 [i_1] [i_12];
                    var_38 = (!(((/* implicit */_Bool) (~(14116979235776393439ULL)))));
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) -536870912);
                    arr_44 [i_0] [i_1] [i_9] [i_13] = (~((~(((/* implicit */int) arr_31 [i_1])))));
                    arr_45 [i_0] [i_1] [i_9] [i_0] [i_1] [i_13] = ((/* implicit */unsigned char) arr_3 [i_13] [i_9]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        arr_48 [i_0] [i_14] [i_14 - 1] = ((/* implicit */unsigned int) var_3);
                        var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]) : (arr_20 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 - 1])))) ? (((arr_22 [i_14 - 1] [i_13] [6]) >> (((536870911) - (536870858))))) : (((((/* implicit */_Bool) var_2)) ? (arr_20 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]) : (arr_20 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1])))));
                        var_41 += ((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), ((~(((/* implicit */int) ((_Bool) arr_27 [i_0] [i_1] [i_9] [i_9] [i_13] [i_14])))))));
                        arr_49 [i_14] [i_14] = ((/* implicit */short) 4830145626229062048ULL);
                    }
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)6)), ((-(min((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_1] [(_Bool)1] [i_9] [(_Bool)1] [i_15])), (arr_7 [10LL] [i_13] [i_13])))))));
                        var_43 |= ((/* implicit */unsigned char) (~(3568365588483125953ULL)));
                        arr_52 [i_0] [i_0] [i_9] [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_21 [i_15] [i_13] [i_9] [i_9] [i_1] [i_0] [i_0]);
                    }
                }
                arr_53 [i_0] = ((var_10) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)57624))))), (arr_37 [i_0] [i_1] [i_1] [i_9])))));
            }
        }
        var_44 = ((/* implicit */unsigned int) arr_26 [i_0] [8] [(unsigned short)0] [i_0] [i_0]);
    }
    for (signed char i_16 = 1; i_16 < 11; i_16 += 3) 
    {
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_16 - 1])) ? (((/* implicit */int) arr_56 [i_16 - 1])) : (((/* implicit */int) (signed char)24))))) ? (max((((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (unsigned short)23463))))), (min((70368743915520ULL), (((/* implicit */unsigned long long int) 3249268826U)))))) : (((/* implicit */unsigned long long int) var_2)))))));
        var_46 = ((/* implicit */int) arr_56 [i_16 + 2]);
    }
    for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
    {
        arr_59 [i_17] = (+(max(((~(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)158))))))));
        var_47 = ((/* implicit */unsigned char) (short)9981);
    }
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        for (signed char i_19 = 2; i_19 < 10; i_19 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_74 [i_18] [i_18] [i_18] [(unsigned short)7] = ((/* implicit */unsigned long long int) (+(arr_14 [i_20 - 1] [i_19] [i_19] [i_19 + 1])));
                        arr_75 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) arr_33 [i_18] [i_19] [i_18]);
                        var_48 = ((/* implicit */long long int) (unsigned short)7911);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned char) var_8);
                        var_50 = ((/* implicit */int) ((arr_35 [i_20 - 1] [i_20 - 1] [i_20] [9LL] [i_22]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_22] [i_19 + 1] [0ULL])) ? (89966673) : (((/* implicit */int) (unsigned char)0)))))));
                        arr_79 [i_18] = ((((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_55 [i_20 - 1] [i_22]))) ? ((+(17430529676330480238ULL))) : ((~(var_0))));
                    }
                    arr_80 [i_18] [0] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2608155337741236767ULL)) ? (arr_20 [i_19] [2LL] [i_20] [i_20 - 1]) : (arr_20 [i_18] [i_19 + 1] [i_19] [i_20 - 1])));
                    var_51 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_47 [i_20 - 1] [i_20 - 1] [i_18] [i_19] [i_18])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-106))))) : ((-(2108286538U)))));
                    arr_81 [i_18] [i_18] = ((/* implicit */_Bool) var_15);
                    arr_82 [i_18] [i_20 - 1] [i_20 - 1] [i_20] |= ((/* implicit */unsigned short) (unsigned char)255);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
                {
                    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))));
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        for (short i_25 = 3; i_25 < 10; i_25 += 3) 
                        {
                            {
                                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) var_1))));
                                var_54 = ((/* implicit */unsigned char) arr_62 [i_19]);
                            }
                        } 
                    } 
                }
                for (signed char i_26 = 0; i_26 < 12; i_26 += 1) /* same iter space */
                {
                    var_55 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)36910))))), ((unsigned char)255)));
                    arr_94 [i_18] [i_19] [i_19] [i_26] = ((/* implicit */long long int) (-((-(arr_39 [i_18] [i_19 - 1] [i_19 + 1] [i_19 - 1])))));
                    var_56 = ((/* implicit */short) arr_42 [i_19] [i_19] [i_19] [i_19] [i_19]);
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        arr_98 [i_18] [2] [i_19 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                        arr_99 [i_18] [i_19] [i_26] [i_27] = (+(((/* implicit */int) var_14)));
                    }
                }
            }
        } 
    } 
}
