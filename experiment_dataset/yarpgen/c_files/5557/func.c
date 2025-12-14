/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5557
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) min((((/* implicit */long long int) var_9)), ((~(((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [(short)20] [14LL]))))))));
            var_21 = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1]))))));
            arr_4 [(short)14] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((short) var_7)), (((/* implicit */short) (unsigned char)27)))))));
        }
        arr_5 [i_0] = max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (signed char)64))))));
    }
    var_22 = ((/* implicit */long long int) ((min(((-(((/* implicit */int) var_19)))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_16))))))) > (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                arr_14 [i_2] [(signed char)11] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (signed char)64)))))))) ? (((/* implicit */int) var_18)) : ((~(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_0)))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [13LL] [i_3] [i_5 - 2] [i_6])) ? (((/* implicit */int) ((unsigned char) arr_17 [i_2] [i_4]))) : (((/* implicit */int) arr_10 [i_2] [i_4] [i_6 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_5 + 1] [i_2] [i_6] [i_6])) <= (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_5 + 1] [i_2] [i_6 - 2] [i_6]))))) : ((~(((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (_Bool)1)))))))));
                            var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)-65)) < (((/* implicit */int) (short)-20450)))));
                            arr_21 [i_2 + 2] [i_2] [i_4] [i_5] [(short)9] [10LL] = ((/* implicit */signed char) ((((/* implicit */int) ((((var_16) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255)))) > (((/* implicit */int) ((signed char) var_7)))))) / (((/* implicit */int) var_17))));
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */signed char) var_15)), (arr_16 [(unsigned short)8] [(short)5] [7LL] [i_2 + 1] [i_5 - 3] [i_6 - 1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2 - 1] [i_5 - 1] [i_6 - 1]))) + (arr_0 [i_2])))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */short) ((long long int) max((var_6), (((/* implicit */long long int) var_2)))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                var_26 = ((/* implicit */short) ((3053886700U) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_24 [i_2] [i_2] [5ULL] = ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_2 + 2] [i_3] [(short)14]))));
                arr_25 [i_2] [(signed char)12] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
            }
            for (short i_8 = 3; i_8 < 13; i_8 += 1) 
            {
                var_27 |= ((/* implicit */_Bool) arr_1 [i_2 + 2] [(short)10]);
                /* LoopSeq 1 */
                for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    var_28 = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (unsigned char)255)))), ((-(((((/* implicit */_Bool) 3472394988U)) ? (((/* implicit */int) (short)14102)) : (((/* implicit */int) (signed char)-1))))))));
                    var_29 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min((var_15), (var_17)))), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_3] [i_2]))) ? ((-(((/* implicit */int) arr_11 [(short)14] [(short)11] [i_8] [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) (signed char)0)))))))));
                    var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-118)), ((unsigned char)248)));
                    var_31 += ((/* implicit */unsigned int) min((min((max((var_12), (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_1))))))), ((~(((/* implicit */int) arr_13 [(signed char)12] [i_2] [1LL] [i_9 + 2]))))));
                }
                var_32 = ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */int) var_14)) + (((/* implicit */int) var_1)))), (((/* implicit */int) ((short) arr_12 [i_2] [i_3] [i_2]))))));
                var_33 = (~(max((((/* implicit */int) var_17)), ((+(((/* implicit */int) (short)0)))))));
            }
            for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_10])) != (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))))))));
                var_35 = min((((/* implicit */long long int) arr_29 [11LL] [(signed char)7] [i_3] [i_2])), (((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2 + 2] [i_2])) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_19))))))));
                var_36 = ((/* implicit */signed char) arr_2 [i_2] [i_2 + 1] [i_2 - 1]);
                arr_32 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_30 [i_2] [i_2 - 1] [i_3] [i_10])) ? (((/* implicit */int) arr_30 [i_2] [i_2 + 1] [i_2 + 2] [i_2])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_5)), (arr_17 [i_2] [11])))))));
            }
            var_37 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_5)) ? (var_11) : (arr_19 [i_2] [i_2] [i_2] [i_3])))))));
            arr_33 [(short)1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_16))));
            arr_34 [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_23 [i_2 + 2] [i_3] [i_2 + 2] [i_2]))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_38 = ((/* implicit */_Bool) min(((-(arr_2 [i_2] [i_2 + 2] [i_2 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_31 [i_2]))))))));
            arr_37 [i_2 - 1] [i_2] [i_11] = ((/* implicit */unsigned char) arr_22 [i_2] [i_11] [i_11]);
        }
        /* LoopSeq 4 */
        for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_46 [i_2] [i_2] [i_2] [i_14] = ((/* implicit */_Bool) ((short) (signed char)64));
                        var_39 -= ((/* implicit */long long int) (~((~(((/* implicit */int) var_17))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */short) var_17);
            arr_47 [(signed char)3] [(unsigned char)13] [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) arr_22 [i_2 - 1] [i_12 + 2] [i_12 + 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2716078380U)) : (var_4))))));
        }
        for (short i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_41 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_18))))), (((arr_50 [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_50 [(short)2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_50 [i_2] [(unsigned char)5] [i_2]))))));
                arr_55 [i_2 + 1] [(unsigned char)8] [i_2] [i_16] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_39 [i_2])))), ((~(arr_38 [(signed char)14])))))));
            }
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 12; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            arr_63 [(unsigned char)2] [(unsigned short)11] [i_15] [14U] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (((+(1125625028935680LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_2]))))))))));
                            var_42 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((max((var_7), (var_9))), (((/* implicit */unsigned char) ((signed char) var_19)))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_51 [i_2] [i_17 - 1] [i_18]))))) ? (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_2)))))))));
                        }
                    } 
                } 
            } 
            arr_64 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(arr_58 [(signed char)14] [i_15 + 3] [0LL] [i_15] [i_15])))) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) var_16))));
            var_43 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_12 [8U] [i_15 - 2] [i_2])) : (((/* implicit */int) arr_11 [(short)1] [(unsigned char)14] [1ULL] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_15]))) : (arr_6 [i_2 + 2] [i_15])))), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_2 + 1] [i_15 - 2] [i_15 + 2])))) ? (var_4) : (arr_52 [i_15 + 1] [i_15 + 3] [i_15 + 3] [(unsigned char)12])))));
        }
        for (signed char i_20 = 3; i_20 < 12; i_20 += 1) 
        {
            var_44 |= ((/* implicit */signed char) var_5);
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_2 - 1] [i_20 - 3] [i_20 - 3]))))) ? (((/* implicit */int) min((arr_35 [i_2 + 1] [i_20 - 3] [i_20 + 2]), (((/* implicit */unsigned char) var_15))))) : (((/* implicit */int) max((arr_35 [i_2 + 1] [i_20 + 2] [i_20 + 2]), (var_5))))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_69 [i_2] = ((signed char) ((unsigned int) ((arr_67 [i_2] [13U]) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
            arr_70 [i_2] = (((((-(max((((/* implicit */long long int) (unsigned char)237)), (arr_27 [i_2] [i_2] [i_21] [i_21]))))) + (9223372036854775807LL))) << (((var_8) - (2726848614700554668LL))));
        }
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 15; i_22 += 4) 
        {
            for (signed char i_23 = 3; i_23 < 13; i_23 += 1) 
            {
                {
                    var_46 = ((/* implicit */unsigned int) ((short) (~(((((/* implicit */_Bool) arr_3 [i_2] [(short)17] [(signed char)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))))));
                    var_47 = ((/* implicit */signed char) arr_0 [i_2]);
                }
            } 
        } 
        arr_79 [(_Bool)1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */int) (signed char)117)) / (((/* implicit */int) arr_31 [i_2])))) : (((var_12) * (((/* implicit */int) arr_51 [i_2] [i_2 + 1] [i_2])))))))));
    }
    for (unsigned char i_24 = 1; i_24 < 13; i_24 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_24] [i_24 + 1] [(short)6] [i_24]))) : (arr_59 [8] [(signed char)13] [(signed char)10] [i_24])))) ? (arr_59 [i_24 - 1] [i_24] [i_24 + 1] [i_24]) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_68 [i_24] [i_24 - 1] [i_24])))))))) || (((/* implicit */_Bool) arr_39 [i_24]))));
        var_49 = ((/* implicit */signed char) min((((((/* implicit */int) arr_18 [i_24 + 2] [13LL] [(_Bool)1] [i_24] [i_24 + 2] [i_24 + 2])) & (max((var_12), (((/* implicit */int) var_7)))))), (min((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_15 [i_24]))))), ((+(((/* implicit */int) arr_44 [(unsigned char)5] [(signed char)8] [i_24] [i_24] [i_24 + 2] [i_24]))))))));
    }
    var_50 = min((((/* implicit */unsigned int) max((((signed char) var_7)), (((signed char) var_16))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (822572307U))))));
    var_51 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (signed char)115)) - (111)))))));
}
