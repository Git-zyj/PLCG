/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/763
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_1 [i_2 - 2]))));
                    var_17 &= ((/* implicit */int) var_13);
                    arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_2 - 2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2 + 2] [i_2]))))) ^ ((~(var_13)))));
                    var_18 = ((/* implicit */unsigned char) (~(658365511)));
                    var_19 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [5] [i_1] [i_1])))) : ((-(var_15))))), (((/* implicit */unsigned int) 1015808))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max(((~(-8051243747697021602LL))), (((/* implicit */long long int) ((_Bool) (-2147483647 - 1))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8051243747697021602LL)) ? (3388807233752105286LL) : (((/* implicit */long long int) 1015799))))) ? (arr_7 [i_3] [i_3]) : (min((((/* implicit */int) (unsigned char)0)), (1015808))))) + (2147483647))) << (((min((var_8), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4])))) - (18204273588813935625ULL)))));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_13 [i_3] [i_4] [i_6])) > (var_1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (arr_13 [i_6] [i_5] [i_4])))) ? (min((max((-8051243747697021602LL), (((/* implicit */long long int) arr_10 [i_4] [i_5])))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (arr_9 [i_6 - 1] [i_6 - 1])))))));
                        var_23 = ((/* implicit */int) var_15);
                        var_24 = (((((!(((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_5))))))) || (((/* implicit */_Bool) var_8)));
                        arr_16 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_6);
                    }
                    for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        arr_20 [i_3] [i_4] = ((/* implicit */_Bool) max(((~(((((/* implicit */int) (unsigned char)66)) | (((/* implicit */int) var_4)))))), (((/* implicit */int) arr_18 [i_3]))));
                        var_25 = arr_8 [i_3];
                        var_26 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((1015808) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_4] [i_3])) : (((/* implicit */int) var_3))))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((min((max((var_0), (((/* implicit */unsigned long long int) arr_12 [i_3])))), (((/* implicit */unsigned long long int) -13LL)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_4])), ((unsigned short)65535)))))))));
                        arr_24 [i_8 + 2] [(short)4] [i_8] [(short)4] [(short)4] [(short)4] = ((((((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4])) - (min((arr_7 [i_3] [i_4]), (((/* implicit */int) arr_11 [(signed char)17] [i_3] [(signed char)17])))))) >= (((/* implicit */int) max((((/* implicit */short) var_10)), (var_7)))));
                        var_27 += ((/* implicit */unsigned long long int) var_6);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_28 -= ((/* implicit */_Bool) arr_9 [i_3] [i_3]);
                            var_29 = ((/* implicit */unsigned short) arr_13 [12] [11] [11]);
                            var_30 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_9 [i_9] [i_9 - 1])))));
                            var_31 ^= ((/* implicit */int) max((arr_21 [i_9] [i_9 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (((/* implicit */short) (_Bool)0))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_10] [i_8 + 1] [i_5] [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3]))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))), (((/* implicit */unsigned long long int) var_10))));
                            arr_30 [i_3] = ((/* implicit */unsigned int) ((long long int) var_10));
                            var_34 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_10])), (((long long int) min((arr_17 [(_Bool)1]), (arr_18 [i_5]))))));
                            arr_31 [i_3] [i_3] [i_4] [i_5] [i_8 + 2] [i_10] &= ((/* implicit */_Bool) ((((arr_26 [i_10] [i_8 - 1] [i_5] [i_4] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) var_12)))))))));
                        }
                        var_35 ^= ((/* implicit */_Bool) var_1);
                    }
                    var_36 = (~(((/* implicit */int) ((short) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6911)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)55587))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) ((arr_29 [i_4] [i_4]) % (((/* implicit */int) var_5))));
                    arr_36 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)66))));
                    var_39 = ((/* implicit */_Bool) ((unsigned int) var_15));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_39 [(short)18] [(_Bool)1] [i_3] [i_12] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)185))));
                        var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [17LL])) ? (((/* implicit */int) arr_12 [i_12])) : (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(arr_32 [i_4] [(unsigned char)14] [(unsigned char)14])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_40 [i_3] [i_4] [4LL])))))))))));
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) arr_29 [i_3] [i_4]))));
                    var_43 = ((/* implicit */unsigned short) var_14);
                    var_44 = (+(((/* implicit */int) (_Bool)1)));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) 1634463775);
                        var_46 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
                        arr_46 [i_3] [19ULL] [19ULL] [i_14] [i_3] [i_13] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1293338879)) ? (arr_7 [i_3] [i_14]) : (((/* implicit */int) arr_35 [i_3] [i_4])))), (((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned short)1422)))) : (((/* implicit */int) var_10))))));
                        var_47 = ((/* implicit */unsigned long long int) (~(-1015802)));
                    }
                }
                var_48 = ((/* implicit */_Bool) min((((min((var_1), (((/* implicit */unsigned long long int) var_15)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_0)))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_49 = var_6;
        var_50 &= ((/* implicit */signed char) ((((arr_47 [i_15]) ? (((/* implicit */int) arr_48 [i_15])) : (((/* implicit */int) var_3)))) + (((arr_47 [i_15]) ? (((/* implicit */int) arr_47 [i_15])) : (((/* implicit */int) var_4))))));
        arr_49 [1LL] [i_15] = var_10;
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] [i_16] = ((/* implicit */unsigned char) (+(max((arr_50 [i_16]), (((/* implicit */int) arr_48 [i_16]))))));
        arr_53 [i_16] = ((/* implicit */int) min(((short)-14389), ((short)12891)));
        var_51 = ((/* implicit */unsigned int) var_3);
        /* LoopNest 2 */
        for (signed char i_17 = 1; i_17 < 22; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) min((((/* implicit */int) (signed char)86)), (-1634463776))))));
                    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) arr_51 [i_17 - 1] [i_17 + 2]))));
                    arr_60 [i_18] [(unsigned char)9] [i_16] = ((/* implicit */short) ((((((/* implicit */long long int) var_13)) ^ ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8974569207981851362LL))))) | (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_55 [i_16] [i_17] [i_18]))), (((/* implicit */unsigned short) var_3))))))));
                }
            } 
        } 
        var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (((((/* implicit */_Bool) (unsigned short)64114)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_16]))))))))) : (max((max((((/* implicit */long long int) -712628324)), (arr_54 [i_16]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)45035)))))))));
    }
    for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
    {
        var_55 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_15)) % (var_0)));
        var_56 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((unsigned short) var_2)), (((/* implicit */unsigned short) ((unsigned char) arr_56 [i_19] [i_19] [i_19])))))), ((~(3767633508U)))));
        var_57 = ((/* implicit */_Bool) var_15);
    }
    for (int i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        var_58 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) (short)-11)), (max((((/* implicit */unsigned long long int) arr_51 [i_20] [(_Bool)1])), (var_0)))))));
        arr_67 [i_20] &= (~(max((((/* implicit */unsigned long long int) min(((short)-1), (arr_9 [i_20] [i_20])))), (((unsigned long long int) var_9)))));
        var_59 += ((/* implicit */short) ((((/* implicit */_Bool) 2582039685287956901LL)) ? (((((/* implicit */_Bool) arr_51 [(unsigned char)18] [i_20])) ? (arr_32 [i_20] [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_20]))))) : (var_0)));
        var_60 &= ((/* implicit */unsigned long long int) arr_37 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    var_61 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((var_2) ? (var_8) : (((/* implicit */unsigned long long int) var_6))))))));
}
