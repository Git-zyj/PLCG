/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83940
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) var_4);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (var_7)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 += var_8;
                                arr_16 [i_0 + 1] [i_4] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 4; i_5 < 8; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_5] [i_5])) ? ((~(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_9))))));
                        var_17 = var_12;
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (var_7)))));
                            arr_25 [i_0] [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 2]))));
                        }
                    }
                    var_18 = ((/* implicit */_Bool) (unsigned char)125);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_19 ^= ((/* implicit */signed char) (~((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)13624))))))));
                    var_20 -= (~((~(min((var_7), (((/* implicit */int) var_6)))))));
                    var_21 = var_3;
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) var_10)) : (var_11)));
                        arr_32 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9613)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_8] [i_9]))))) : (((/* implicit */int) arr_9 [i_9] [i_8] [i_7] [i_1] [i_1] [i_0 - 2]))));
                            arr_35 [i_7] [i_0] [i_1] [i_8] [i_8] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */unsigned int) -148808717)) % (4294967288U)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9] [i_9]))) : (arr_34 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_7]))) : (((/* implicit */unsigned int) (-((~(var_11))))))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) 82827795);
                            arr_42 [i_11] [i_11] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) (~(var_11)));
                        }
                        var_25 = (+(((/* implicit */int) (_Bool)1)));
                        var_26 = ((_Bool) (+(arr_37 [i_7])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            arr_46 [i_0 + 1] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_0))));
                            var_27 += ((/* implicit */_Bool) (~(arr_10 [i_12] [i_10] [i_10] [i_7] [i_1] [i_0 + 2])));
                        }
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-44)) + (((/* implicit */int) (unsigned short)51924)))))));
                    }
                    for (short i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        arr_50 [i_0] [i_1] [i_7] [i_1] [i_7] [i_13] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_7)) : (var_12)))))) ? (((/* implicit */int) (unsigned char)128)) : ((~((~(((/* implicit */int) arr_21 [i_0]))))))));
                        var_29 = ((/* implicit */unsigned char) var_9);
                        arr_51 [i_0] [i_1] [i_7] [i_13] &= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) var_2))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)16875))) : ((+(arr_23 [i_0] [i_1] [i_0 + 2] [i_14])))));
                                var_31 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((-(((/* implicit */int) var_4))))));
                                var_32 = ((/* implicit */unsigned int) var_0);
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (826260254) : ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_16 = 1; i_16 < 8; i_16 += 3) 
                {
                    arr_59 [i_16] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)76))));
                    var_34 = ((/* implicit */_Bool) var_12);
                    var_35 = ((/* implicit */long long int) var_1);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        for (long long int i_18 = 2; i_18 < 8; i_18 += 1) 
        {
            {
                arr_64 [i_17] = ((/* implicit */_Bool) (-(var_2)));
                /* LoopNest 2 */
                for (signed char i_19 = 2; i_19 < 11; i_19 += 3) 
                {
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                            {
                                arr_74 [i_17] [i_20] [i_19 - 1] [i_20] [i_21] = ((/* implicit */_Bool) var_5);
                                var_36 = ((/* implicit */unsigned int) arr_66 [i_20] [i_19] [i_17]);
                                var_37 += ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) arr_65 [i_20] [i_17])) * (((/* implicit */int) arr_71 [i_21] [i_20] [i_19 + 1] [i_18] [i_17])))) * (var_7))));
                                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                                arr_75 [i_20] [i_18 + 2] [i_19] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_9))), (var_2)))) ? ((-(((/* implicit */int) arr_72 [i_17] [i_17] [i_19 - 1] [i_19 - 2] [i_20])))) : (((/* implicit */int) (_Bool)1))));
                            }
                            for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
                            {
                                var_39 ^= ((/* implicit */int) max((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) arr_62 [i_17])))))), (max((((/* implicit */short) (_Bool)1)), ((short)5500)))));
                                arr_78 [i_17] [i_20] [i_19 + 1] [i_20] [i_22] = ((/* implicit */signed char) (~(((var_2) % (((/* implicit */int) arr_72 [i_19 + 1] [i_20] [i_20] [i_20] [i_22]))))));
                                arr_79 [i_17] [i_18] [i_19] [i_20] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)5496)), (var_9)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)5503))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)));
                                var_40 &= ((/* implicit */unsigned int) var_11);
                            }
                            for (unsigned short i_23 = 2; i_23 < 10; i_23 += 1) 
                            {
                                var_41 = ((/* implicit */unsigned int) var_4);
                                arr_82 [i_20] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) (unsigned char)246);
                            }
                            /* LoopSeq 2 */
                            for (signed char i_24 = 0; i_24 < 12; i_24 += 1) 
                            {
                                var_42 = ((((/* implicit */int) ((signed char) -3348034632260475194LL))) == (var_11));
                                arr_85 [i_18] [i_18] [i_20] = ((/* implicit */_Bool) 82827792);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_25 = 1; i_25 < 8; i_25 += 1) 
                            {
                                var_43 = ((/* implicit */int) var_1);
                                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20] [i_19] [i_20] [i_25]))) : (3288258442640021005ULL)))));
                                arr_88 [i_20] [i_19 + 1] [i_19] [i_20] [i_25] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 3) 
                            {
                                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_17] [i_17])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                                arr_93 [i_20] [i_19] [i_18 + 4] [i_20] = (!(((/* implicit */_Bool) arr_92 [i_18 - 2] [i_19] [i_19] [i_20] [i_26] [i_26] [i_26])));
                                var_46 = ((/* implicit */_Bool) (+(var_1)));
                                var_47 = ((/* implicit */_Bool) var_5);
                                var_48 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_86 [i_18 + 2] [i_18 + 1] [i_19 - 2] [i_20] [i_26])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned char) 1432773629U);
}
