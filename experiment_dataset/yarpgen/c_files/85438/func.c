/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85438
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
    var_20 = ((/* implicit */int) ((long long int) max((((/* implicit */short) ((var_5) <= (var_7)))), (var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((-(var_5)))));
        var_22 = ((/* implicit */unsigned short) var_0);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((9200092078738969804ULL) > (9200092078738969804ULL)))) >> (((((/* implicit */int) ((unsigned short) arr_0 [(unsigned short)12]))) - (124)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) + (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (9246651994970581816ULL)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)25);
            var_24 = ((/* implicit */unsigned char) (unsigned short)56490);
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11697))))))) != (((9200092078738969800ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17609)))))));
            arr_13 [i_2] [i_0 - 1] [i_0 - 1] = ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3531268849U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (var_5)));
            arr_17 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) 17572062232439714098ULL));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
            var_27 = ((/* implicit */unsigned long long int) (unsigned char)162);
        }
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9246651994970581793ULL)) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
            var_29 = ((/* implicit */short) ((var_5) ^ (((/* implicit */long long int) (~(3531268847U))))));
        }
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        arr_26 [i_5] = ((/* implicit */_Bool) var_3);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            arr_29 [i_6] [i_6] = ((/* implicit */short) (+(var_2)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                arr_33 [i_6] = ((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_0 [i_7])) - (122)))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)31034)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_6]))))))));
            }
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    {
                        var_31 = var_15;
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                        {
                            arr_41 [i_6] [12ULL] [i_6] = ((/* implicit */unsigned short) var_2);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (short)3838)), (3531268849U))), (((/* implicit */unsigned int) arr_38 [i_9] [i_9] [i_9 + 2] [i_9] [i_6]))))) || (((/* implicit */_Bool) var_14))));
                        }
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : ((+(var_11)))))) ? (((unsigned long long int) 9246651994970581816ULL)) : (((arr_27 [i_6]) % (((/* implicit */unsigned long long int) var_5))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) | (((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_9 + 2] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_1)) | (var_7))) ^ (((((/* implicit */_Bool) var_4)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [(short)10])))))))) : (8796485935810917241ULL)));
                            var_35 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_42 [i_5] [i_6] [i_11] [i_6] [i_5])) | (3531268849U)));
                        }
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                        {
                            var_36 = ((_Bool) ((unsigned long long int) arr_21 [i_5] [i_5]));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12] [10U] [i_8] [i_5]))))))) || (((/* implicit */_Bool) ((short) ((unsigned long long int) 15362161615727788637ULL))))))));
                            var_38 -= ((/* implicit */unsigned short) ((min((1771235195664520709ULL), (((/* implicit */unsigned long long int) arr_45 [i_12] [i_6] [i_9 - 1] [i_9] [i_9 + 1])))) > (((/* implicit */unsigned long long int) arr_14 [i_12]))));
                            arr_48 [i_9] [i_6] [i_9] [i_6] [i_12] [i_12] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (max((((/* implicit */unsigned long long int) arr_46 [i_5] [(short)7] [i_9 + 1] [i_5] [(short)7] [i_6] [i_6])), (arr_36 [i_12] [i_9] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9 - 2] [i_9 - 2] [i_9 + 2] [i_9 - 2] [i_12]))))) - (3535ULL)))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                        {
                            arr_51 [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (396363530U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3838))))));
                            arr_52 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((unsigned char) arr_36 [i_9] [i_9 - 2] [i_9 - 1] [i_9 + 1])))));
                        }
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) min(((~(arr_35 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 2]))), (((/* implicit */unsigned long long int) var_8)))))));
                        arr_53 [i_9] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (unsigned char)120);
                    }
                } 
            } 
            arr_54 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) arr_40 [i_6] [i_5] [i_5] [i_5])), (arr_49 [i_6] [i_6] [i_5] [i_6] [i_5] [i_6] [i_5]))));
            arr_55 [i_6] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)33828)) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) arr_25 [i_5] [i_6]))))));
        }
    }
    var_41 = ((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) var_12))) - (27159)))));
    /* LoopNest 3 */
    for (short i_14 = 2; i_14 < 22; i_14 += 3) 
    {
        for (unsigned char i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                {
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) arr_57 [10U]))));
                    var_43 = ((/* implicit */_Bool) min((var_43), (((arr_58 [i_16] [i_16]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20767)))))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)17631)))) + (2147483647))) >> (((arr_57 [i_14]) - (10419590952538444227ULL)))))) : (((unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_7))))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 2; i_18 < 20; i_18 += 2) 
                        {
                            {
                                arr_70 [i_14] [i_15] [i_14] [i_15] [i_14] [i_14] [i_14] = ((((/* implicit */_Bool) ((unsigned short) ((arr_67 [i_16] [i_14 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_14]))))))) ? (((/* implicit */int) min((arr_63 [i_14] [i_17] [i_15]), ((short)11695)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)4521))))));
                                arr_71 [i_14] [i_14] [i_16] [i_14] [i_18 - 1] [i_15] [i_17] = ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_15)) - (24125)))))));
                                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) (short)-11706)), (var_17))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11715)))));
                                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((arr_65 [i_15 + 2]) ? (((/* implicit */int) (short)-31028)) : (((/* implicit */int) arr_65 [i_15 + 1])))) < (((arr_65 [i_15 - 2]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_65 [i_15 - 2])))))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */short) min((var_47), (arr_56 [i_14 - 2])));
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) var_1)))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)31)))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_8)), (var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_19)) < (((/* implicit */int) var_19))))))))))));
}
