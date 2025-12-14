/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90590
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)13] [i_1]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((10423900247108717455ULL), (((/* implicit */unsigned long long int) arr_5 [i_0]))))) ? (((8022843826600834161ULL) >> (((arr_5 [i_1]) - (369584648))))) : (((/* implicit */unsigned long long int) -1))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 8022843826600834160ULL))) ? (((1048575) >> (((((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) - (5090))))) : ((~(((/* implicit */int) var_1))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned short) ((_Bool) var_6));
                            arr_16 [i_0] [i_3] [(unsigned short)21] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) || (((/* implicit */_Bool) max(((+(var_8))), (((/* implicit */unsigned long long int) ((-28) / (((/* implicit */int) arr_7 [i_4] [i_0] [(_Bool)1] [i_0]))))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) (~(arr_5 [i_0])));
                            var_17 = ((/* implicit */long long int) (+(((var_8) & (10423900247108717464ULL)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_18 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3] [i_6])) ? (var_4) : (arr_8 [i_0] [i_1] [i_6])))), (((unsigned long long int) ((((/* implicit */_Bool) -1048578)) ? (524287LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) -12)) && (arr_2 [i_0] [i_0]))))))));
                            var_20 = ((/* implicit */short) 8ULL);
                        }
                        arr_22 [i_3] [i_0] [23] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                        var_21 = ((/* implicit */_Bool) ((11) ^ ((~(((var_4) & (((/* implicit */int) arr_17 [i_0] [i_1] [(short)18] [i_3]))))))));
                        var_22 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_7)))));
                    }
                    var_23 = var_9;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_25 [i_7] [11] [17U] [17U] [i_0] = ((/* implicit */_Bool) (+(((var_4) - (0)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_28 [i_8] [12LL] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (((~(((10423900247108717456ULL) ^ (((/* implicit */unsigned long long int) arr_0 [i_8])))))) ^ (8022843826600834167ULL)));
                            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(-1)))) - (var_8)));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) -1)) ? (var_5) : (((/* implicit */unsigned int) var_6)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_35 [i_0] [i_1] [2ULL] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) var_4);
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_13 [i_9])))) ^ (((/* implicit */int) ((unsigned short) var_10)))));
                        }
                    }
                    for (int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        arr_38 [7LL] [i_2] [i_2] [i_2] = max((((((((/* implicit */_Bool) 78049439)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_10 + 1] [i_0]))))) - (min((((/* implicit */unsigned int) -1116732647)), (4294967279U))))), (max((((((/* implicit */_Bool) arr_18 [i_10 - 1] [(short)11] [i_1] [(short)11] [i_0] [i_0] [7])) ? (((/* implicit */unsigned int) var_4)) : (4187183458U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_0 [i_2])) >= (4294967295U)))))));
                        var_25 = ((/* implicit */unsigned int) 16380ULL);
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19267))) / (8022843826600834139ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_13 [i_10 - 1])))) : ((+(-9223372036854775789LL))));
                    }
                    arr_39 [i_2] [i_1] [i_0] = ((/* implicit */int) ((8022843826600834158ULL) > (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [21U])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_10)))))))));
                }
                var_27 = (~(((((/* implicit */_Bool) ((arr_18 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_1])))))) ? (min((((/* implicit */long long int) (_Bool)0)), (-5633206751954282301LL))) : (var_7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            {
                arr_44 [i_11] [i_12] = ((/* implicit */unsigned int) (short)-19374);
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 3; i_13 < 24; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_53 [i_13] [i_12] [i_13 - 2] [i_14] [i_13] = ((/* implicit */unsigned short) var_13);
                                arr_54 [i_11] [i_13] [4LL] [i_14] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((6810155869581351414ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13 - 1])))))) ? (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7018))) : (arr_52 [i_13 + 1] [i_13 - 1] [i_13 + 1]))) : (((/* implicit */unsigned long long int) ((1655757344U) * (((/* implicit */unsigned int) arr_0 [i_13 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) var_4);
                                var_29 = ((/* implicit */unsigned int) 10423900247108717449ULL);
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483639)) ? (((((/* implicit */_Bool) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((((/* implicit */unsigned long long int) 2047146165)) ^ (10423900247108717449ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2259))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_18 [i_17] [i_16] [i_16] [i_13] [i_11] [i_11] [i_11])) ? (arr_57 [i_16] [i_13] [i_13] [i_11]) : (-3))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (((+(((var_9) - (var_10))))) - ((+(((/* implicit */int) (short)1)))))))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_46 [i_13 - 3]) : (arr_46 [i_13 - 2])))) ? (((unsigned long long int) ((((/* implicit */long long int) 2482222770U)) | (511LL)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_13 + 1] [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 2])))));
                                arr_66 [i_11] [i_13] [i_11] = ((/* implicit */long long int) (short)-32742);
                                var_33 = ((/* implicit */unsigned int) ((unsigned short) ((arr_36 [i_11] [i_13 - 1] [i_18] [i_18]) - (arr_36 [i_11] [i_13 + 1] [i_13 + 1] [i_18]))));
                            }
                        } 
                    } 
                }
                for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    var_34 = ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_11])) / (var_10))) >= (((/* implicit */int) (signed char)87))));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (-6)))) ? (((((/* implicit */_Bool) (+(-521LL)))) ? (arr_64 [i_20] [i_12] [i_11]) : (((/* implicit */int) ((_Bool) 4187183450U))))) : ((~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_3)))))))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((/* implicit */unsigned int) arr_17 [i_11] [i_11] [i_11] [i_11])), (1106306009U))))));
                }
                for (unsigned int i_21 = 1; i_21 < 22; i_21 += 4) 
                {
                    var_37 |= var_5;
                    var_38 = ((/* implicit */int) arr_2 [i_21 - 1] [i_21 + 2]);
                }
                for (int i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (((~((-2147483647 - 1)))) >> (((2147483622) - (2147483619)))))) : (max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_0)) ? (var_5) : (2673144391U))))))))));
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 24; i_23 += 4) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            {
                                var_40 = min((((/* implicit */long long int) arr_81 [i_24] [i_11] [i_23] [i_22] [i_12] [i_11] [i_11])), (max((((/* implicit */long long int) arr_5 [i_23 - 2])), (-5797170293430130382LL))));
                                arr_83 [(_Bool)1] [i_12] [1LL] [i_12] [i_24] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) 3)), (72057594037927935ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_23])) ? (var_5) : (((/* implicit */unsigned int) var_14)))))));
                                var_41 = ((/* implicit */long long int) max(((~(((((/* implicit */unsigned int) 30)) ^ (3893726553U))))), (4187183450U)));
                            }
                        } 
                    } 
                }
                var_42 = ((/* implicit */int) 562949953388544LL);
                arr_84 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (6145149489142524900ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_11])) ? (-562949953388545LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))) < (min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (var_7)))));
            }
        } 
    } 
    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3794)) ? (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) (short)-16047)) : (var_4))) : ((((((_Bool)1) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_12)) : (var_14))))))));
    /* LoopNest 3 */
    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 1) 
    {
        for (unsigned int i_26 = 2; i_26 < 24; i_26 += 1) 
        {
            for (unsigned short i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                {
                    var_44 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967271U)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) -11)) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_56 [i_27] [i_26] [i_27] [i_26] [i_25] [i_26]) != (((/* implicit */unsigned int) var_6)))))))) > (((/* implicit */unsigned int) var_9))));
                    arr_91 [i_25] [i_26] [i_27] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_69 [i_25] [i_26] [i_27]))));
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 130023424)) ? (((/* implicit */int) arr_13 [i_26 + 1])) : (min((((/* implicit */int) arr_40 [i_25] [i_25])), (var_10)))))) ? ((+(4294967270U))) : (((((/* implicit */_Bool) arr_56 [i_26 - 1] [i_26] [i_26] [12LL] [i_26 - 1] [i_25])) ? ((+(var_5))) : (((/* implicit */unsigned int) max((arr_51 [i_25] [i_26] [i_27] [i_27] [i_26 - 2] [i_26] [i_26]), (var_6))))))));
                }
            } 
        } 
    } 
}
