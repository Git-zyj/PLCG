/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96582
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_3]);
                        arr_8 [i_0] [i_0] = (-9223372036854775807LL - 1LL);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_18 = ((((/* implicit */_Bool) (signed char)-18)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)33493)) < (((/* implicit */int) var_1))))));
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */long long int) ((signed char) var_11));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_5] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_1] [i_4]))))));
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_5]);
                            var_21 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_2]))));
                            arr_18 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)38853))));
                            arr_19 [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_4);
                            var_24 = ((/* implicit */unsigned char) arr_5 [i_6] [11LL] [11LL] [i_6]);
                        }
                        var_25 = ((/* implicit */unsigned short) arr_5 [(unsigned char)10] [(unsigned char)8] [i_2] [i_2]);
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) var_3);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_1] [i_2] [i_7] [i_7] [i_1] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (min((arr_17 [i_7] [i_7] [i_7] [i_0] [i_2] [i_1] [i_0]), (var_9))) : (arr_17 [i_0] [i_1] [i_1] [i_2] [i_7] [i_7] [i_7])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_12)))));
                        var_28 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) 179734769)) : (var_8)));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_2]))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_9))) * (((arr_10 [i_1] [i_8]) ? (((/* implicit */int) arr_2 [i_1] [i_8])) : (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)3]))))));
                    }
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) var_5))), (var_2)))), (((long long int) arr_6 [i_0] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)153)), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)41657)) : (-382774757)))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) var_14))), (((((/* implicit */_Bool) arr_29 [i_12])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_29 [i_10])))))))));
                        arr_40 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_9] [i_11] [i_12]))))) ? (((((/* implicit */_Bool) arr_29 [i_10])) ? (1190912772039059783LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8887064138025374464LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14)))))))))));
                    }
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_32 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-124))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            arr_48 [i_14] [i_10] [i_13] [i_11] [i_10] [i_10] [i_9] = (signed char)-77;
                            var_33 -= ((/* implicit */int) var_4);
                            var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)));
                            arr_49 [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) < (((/* implicit */int) arr_33 [i_10] [(unsigned short)4] [i_10]))));
                        }
                        var_35 = (signed char)72;
                        var_36 &= ((/* implicit */int) var_3);
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        arr_54 [i_15] [i_15] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((arr_36 [i_9] [i_9] [i_15]), (var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (unsigned short)26683)))))), (179734769)));
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9] [i_16])) ? (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_31 [i_16] [i_16])))) : (((/* implicit */int) arr_51 [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((~(var_8)))));
                            arr_59 [i_9] [i_9] [i_11] [i_11] [i_10] = (((~(((/* implicit */int) (unsigned short)61308)))) != (((179734769) / (18))));
                            arr_60 [i_15] [i_15] [i_10] [i_15] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)28820))));
                            arr_61 [i_10] [i_10] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)60983), (((/* implicit */unsigned short) (unsigned char)128))))) ? (6205989534851491778ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            arr_65 [i_17] [i_15] [i_11] [i_15] [i_9] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)31381))));
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) 179734769))));
                            var_39 = ((/* implicit */long long int) ((unsigned short) var_14));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) - (185)))));
                        }
                        arr_66 [i_15] [i_10] [(_Bool)0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)13386)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)138)))) : ((+(1524149581)))));
                        var_41 = ((/* implicit */_Bool) (~((-(var_13)))));
                        var_42 ^= ((/* implicit */_Bool) (~(min((var_9), (((/* implicit */long long int) arr_35 [i_15] [i_9] [i_11]))))));
                    }
                    arr_67 [i_9] [(_Bool)1] [i_9] [i_10] = ((/* implicit */unsigned short) ((unsigned int) arr_30 [i_9] [i_9]));
                }
                /* LoopNest 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-1304331009742951466LL), (((/* implicit */long long int) var_3)))))));
                                var_44 = max((((/* implicit */long long int) arr_56 [i_9] [i_10] [i_18] [i_19] [i_20] [i_20])), (max((min((549755813887LL), (((/* implicit */long long int) (unsigned char)144)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned char)23))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    arr_77 [i_9] [i_9] [i_21] [i_10] = ((/* implicit */long long int) var_2);
                    var_45 = ((/* implicit */int) arr_29 [i_21]);
                    var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10] [i_10]))));
                }
            }
        } 
    } 
}
