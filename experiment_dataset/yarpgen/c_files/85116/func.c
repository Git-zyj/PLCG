/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85116
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
    var_12 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_8)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) * ((+(((unsigned int) var_7))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            arr_7 [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(_Bool)0] [i_1 + 1])) && (((/* implicit */_Bool) var_5)))))))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (16532)))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_10 [i_0] [(_Bool)0] [0ULL] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)3072))))))), ((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)3072))))))));
                arr_11 [i_1] [i_2] = arr_1 [(short)3] [(short)3];
                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 3542361908U))) ? (((((((/* implicit */int) (unsigned short)14577)) & (((/* implicit */int) (unsigned short)3618)))) >> ((~(18446744073709551615ULL))))) : (((((/* implicit */int) (unsigned short)62459)) & (((/* implicit */int) (unsigned short)62474))))));
            }
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_7))));
                            arr_23 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4] [1ULL] [(unsigned char)5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_28 [(unsigned char)7] [(unsigned char)2] [i_3] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */long long int) arr_21 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0]);
                    arr_29 [i_0] [i_0] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_21 [i_0] [i_0] [i_1] [4LL] [i_6] [i_6]) % (((/* implicit */unsigned long long int) var_8))))))) % (((((/* implicit */unsigned long long int) var_8)) & (var_4)))));
                }
                arr_30 [i_3] [i_1 - 3] [(short)0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_1 + 1] [i_1 + 1])), (((var_3) - (var_10))))))));
            }
            arr_31 [i_0] [i_1 - 4] = ((((/* implicit */_Bool) (-(arr_21 [i_1 - 3] [i_1 - 4] [i_1 - 4] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? (arr_21 [(unsigned short)10] [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) / (var_3)))));
            arr_32 [i_1] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_36 [i_7] [i_0] [i_7] |= ((/* implicit */_Bool) arr_35 [i_7] [0U] [i_0]);
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_0] [i_0] [i_0] [i_7] [i_0] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_0])))) : (((arr_21 [(_Bool)1] [(_Bool)1] [i_0] [i_7] [i_7] [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 10; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
            {
                for (short i_10 = 2; i_10 < 9; i_10 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_16 = (_Bool)1;
                            arr_46 [i_0] [7U] [7U] [7U] [(unsigned short)2] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)62453)) / (((/* implicit */int) (unsigned short)58258))));
                        }
                        for (unsigned char i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 591479920)) || ((_Bool)1))) || (((/* implicit */_Bool) var_11))))) << (((arr_49 [i_0] [i_0] [i_0] [i_0] [i_0]) - (4396741588763984488ULL))))))));
                            var_18 += ((/* implicit */unsigned char) arr_1 [i_12] [i_9]);
                            arr_50 [i_12] [i_12] [i_12] [i_10] [i_12] = ((unsigned short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_8] [i_8])) || ((_Bool)1))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            arr_55 [i_0] [i_8] [i_10] [i_10 - 1] [i_13] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_0] [(unsigned char)4] [10]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10)))))))) ? ((+(((int) 1628741064U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
                            arr_56 [i_0] [(short)8] [i_13] [i_9] [(short)8] [i_9] [i_13] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) arr_16 [i_0] [i_9] [i_13] [i_10])) ? (arr_52 [2U] [2U] [(short)9] [i_9] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                            var_19 = ((/* implicit */unsigned char) arr_12 [i_13]);
                        }
                        var_20 = ((/* implicit */int) var_10);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_47 [i_0] [i_8 - 1] [i_0] [i_9] [i_10] [i_0])))), (((((/* implicit */_Bool) 3754835635278611531ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))))));
                    }
                } 
            } 
            arr_57 [i_0] [i_0] [i_8] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) arr_24 [i_0] [(unsigned char)2] [(unsigned char)2])) & (((/* implicit */int) (unsigned char)152)))))), (((/* implicit */int) (!(((((/* implicit */int) arr_6 [i_0] [i_8] [i_8])) > (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [(unsigned short)2] [i_8 - 1])))))))));
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (short i_15 = 1; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_62 [i_16] [i_16] [i_14] [i_16] [i_0]))))));
                            arr_65 [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [(signed char)4] [i_8 - 2] [i_8] [i_8] [(unsigned char)9] [i_8])) & (((/* implicit */int) var_5))))), (var_2))) - (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)254)))))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_59 [i_0] [i_8] [i_0] [i_15])) ? (((/* implicit */int) arr_4 [i_16] [i_15 - 1] [(unsigned char)6])) : (((/* implicit */int) (unsigned short)14571)))) : (((/* implicit */int) ((((/* implicit */_Bool) -2147483636)) && (((/* implicit */_Bool) 3542361908U)))))))) || (((/* implicit */_Bool) var_7))));
                            var_24 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)16))));
                            arr_66 [i_0] [i_15] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) (~(((((var_6) * (arr_26 [i_0] [i_8] [i_14]))) << (((((/* implicit */_Bool) arr_24 [i_0] [i_16] [(unsigned char)2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        arr_69 [i_17] = ((/* implicit */unsigned int) arr_68 [i_17] [7]);
        arr_70 [i_17] [15ULL] = ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_68 [i_17] [i_17])) : (((/* implicit */int) arr_68 [i_17] [i_17])))))));
        arr_71 [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_17]))) / (var_6))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_67 [i_17])))))));
        arr_72 [1ULL] [(unsigned short)18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    }
    var_25 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) / ((~(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)121))))))));
    var_26 &= ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (short i_18 = 2; i_18 < 12; i_18 += 4) 
    {
        for (unsigned char i_19 = 2; i_19 < 12; i_19 += 4) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 2) 
            {
                {
                    arr_80 [i_20] = ((/* implicit */unsigned long long int) arr_74 [i_19] [i_20]);
                    var_27 = ((/* implicit */unsigned char) ((_Bool) ((var_1) << (((var_6) - (4971029222729851812ULL))))));
                    var_28 += ((/* implicit */short) ((unsigned short) (_Bool)1));
                    arr_81 [i_20] [i_20] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) var_8)) >= (var_7)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27)))))) ? ((~(0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned short)5338)) : (((/* implicit */int) (unsigned char)16)))))))));
                }
            } 
        } 
    } 
}
