/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64352
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) var_14)), (var_0)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((int) var_17));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3282)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) 4294967295U);
            var_23 = ((/* implicit */signed char) (unsigned short)18614);
            var_24 *= ((/* implicit */unsigned short) var_9);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (unsigned short)16813);
                var_26 = ((/* implicit */unsigned int) ((arr_3 [i_1 - 3] [i_1] [i_1 - 1]) ? (((/* implicit */int) (short)5501)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 3]))));
                arr_6 [(unsigned char)17] = ((arr_2 [i_1 - 1] [i_1 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1] [i_1 + 1]))));
                var_27 -= ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 4; i_4 < 15; i_4 += 4) 
                {
                    var_28 = ((/* implicit */int) arr_4 [i_4]);
                    var_29 = ((/* implicit */signed char) 582140935U);
                }
                for (int i_5 = 2; i_5 < 18; i_5 += 4) 
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_3] [i_1] [i_1 + 3] [i_0])) ? (14215049831324124777ULL) : (((/* implicit */unsigned long long int) 2932742522U))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 582140935U)) ? (2932742527U) : (((/* implicit */unsigned int) -652805826))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [18U]))));
                        var_32 = ((/* implicit */short) arr_3 [i_1 - 1] [i_5 + 1] [i_6 - 2]);
                    }
                    for (signed char i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_1])) ? (arr_2 [i_5 - 1] [i_1]) : (arr_2 [i_5 - 1] [i_1])));
                        var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_5 - 2]))) : (3712826360U)));
                        var_35 -= ((/* implicit */unsigned int) var_9);
                    }
                }
                var_36 = ((/* implicit */int) ((unsigned int) arr_4 [i_0]));
            }
        }
        for (int i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            arr_24 [i_0] = (signed char)-116;
            var_37 = ((/* implicit */int) min((var_37), (((arr_20 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 1]) ? (((/* implicit */int) (unsigned short)16797)) : (((/* implicit */int) arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_8 + 2])) ? (((/* implicit */int) arr_4 [i_8 + 1])) : (((/* implicit */int) (_Bool)1))));
                arr_29 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_3 [i_0] [i_8 - 1] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (582140935U)));
                arr_30 [i_9] [i_8 + 1] [i_0] = ((/* implicit */unsigned char) ((signed char) 13006430332544280198ULL));
                var_39 = ((/* implicit */unsigned int) ((int) (_Bool)1));
            }
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)12586)) : (((/* implicit */int) (short)5502)))) : (((/* implicit */int) arr_4 [i_0]))));
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) (+(arr_8 [i_0] [i_10] [i_10]))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
                {
                    {
                        arr_39 [i_0] [i_0] [i_11 + 1] [(_Bool)1] [(unsigned short)14] = ((/* implicit */signed char) ((arr_21 [i_11 + 1] [i_12 + 2]) >> (((((/* implicit */int) ((short) (short)6144))) - (6143)))));
                        var_42 = ((/* implicit */short) ((signed char) (short)-19281));
                        var_43 = ((/* implicit */int) var_16);
                        var_44 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_12]);
                    }
                } 
            } 
            arr_40 [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_10])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48649))) : (var_8))) : (1362224774U)));
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((short) arr_28 [i_0] [(signed char)7] [i_0] [i_10])))));
            arr_41 [i_10] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_33 [i_10] [i_10] [(signed char)0] [i_0])) : (((/* implicit */int) arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
        }
        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 1) 
        {
            arr_45 [i_13] [i_13] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (arr_21 [i_0] [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)3361))))));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_13 - 1] [i_13 + 1])) ? (arr_15 [i_13 - 1] [i_13 + 1]) : (arr_15 [i_13 - 1] [i_13 + 1])));
        }
    }
    for (unsigned short i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 3; i_16 < 21; i_16 += 2) 
            {
                {
                    var_47 = ((/* implicit */signed char) ((_Bool) min((689159756), (((/* implicit */int) (unsigned short)2047)))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 1; i_17 < 22; i_17 += 1) 
                    {
                        for (int i_18 = 1; i_18 < 20; i_18 += 2) 
                        {
                            {
                                var_48 = ((/* implicit */_Bool) (unsigned char)239);
                                arr_56 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) max((((int) min((2932742527U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))), (((((/* implicit */int) arr_48 [i_17])) ^ (((/* implicit */int) arr_55 [i_18 + 3] [i_16 - 1] [i_16] [i_16] [i_18]))))));
                                arr_57 [i_14] [i_15] [i_16] [(short)13] [i_18] = ((/* implicit */_Bool) max((((/* implicit */short) arr_51 [i_14] [i_16] [i_16] [i_18])), (arr_54 [i_16] [i_16] [i_16] [i_16] [i_14 + 3])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3064078729U)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (short)-5))))) ? (((1325701283748983845ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4121))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12587))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63488)))));
    }
    for (unsigned short i_19 = 2; i_19 < 20; i_19 += 3) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_50 [i_19] [i_19] [i_19 - 2]) : (((/* implicit */int) (_Bool)0))))) ? (((unsigned long long int) 4103192181U)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)5528)), (arr_50 [i_19] [i_19 - 2] [i_19 + 3]))))));
        /* LoopNest 3 */
        for (unsigned int i_20 = 4; i_20 < 19; i_20 += 1) 
        {
            for (signed char i_21 = 4; i_21 < 22; i_21 += 4) 
            {
                for (unsigned long long int i_22 = 2; i_22 < 19; i_22 += 4) 
                {
                    {
                        var_51 *= ((/* implicit */short) min((min((((/* implicit */int) var_1)), (arr_53 [i_22] [i_20] [i_22] [i_22] [i_20] [i_21 - 2]))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_48 [i_22 - 1])) : (arr_53 [i_19] [i_19] [i_21] [i_21] [i_22 - 1] [i_21 + 1])))));
                        var_52 = ((/* implicit */unsigned short) arr_49 [i_21]);
                        var_53 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_50 [i_19] [i_20] [i_20]), (((/* implicit */int) var_13))))) ? (33554400U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_48 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1065353216U)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_23 = 2; i_23 < 24; i_23 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) 
        {
            for (int i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                {
                    var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((_Bool) arr_79 [i_23] [i_23 - 2] [i_23] [i_23 - 1])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_26 = 1; i_26 < 23; i_26 += 2) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned char) max((arr_75 [i_23]), (((/* implicit */long long int) (unsigned char)254))));
                        var_56 = ((/* implicit */short) 5440313741165271418ULL);
                        var_57 *= ((/* implicit */short) -2109543324339048406LL);
                    }
                    for (unsigned short i_27 = 1; i_27 < 23; i_27 += 2) /* same iter space */
                    {
                        var_58 = ((/* implicit */int) arr_85 [i_27]);
                        var_59 = ((/* implicit */unsigned int) arr_71 [i_23]);
                        var_60 = ((/* implicit */int) (unsigned char)0);
                    }
                    for (unsigned char i_28 = 1; i_28 < 22; i_28 += 4) 
                    {
                        var_61 = ((/* implicit */signed char) arr_76 [i_24] [(_Bool)0] [i_28]);
                        var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_86 [i_28 + 3] [i_24])), (arr_83 [i_23] [i_24] [i_28 - 1] [i_23 + 1] [i_23] [i_23])))) ? (max((max((arr_75 [i_28 + 3]), (((/* implicit */long long int) arr_77 [i_23 + 1] [i_24] [i_24])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_24] [i_25] [i_28])) ? (2147483641) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_28 - 1])) ? (((/* implicit */unsigned int) 2147483647)) : (min((((/* implicit */unsigned int) 1196187309)), (var_15)))))))))));
                    }
                }
            } 
        } 
        arr_89 [i_23] = ((/* implicit */short) var_7);
        var_63 = var_1;
        var_64 ^= ((/* implicit */unsigned char) arr_84 [i_23 - 1] [i_23] [i_23] [i_23] [i_23 - 2]);
        var_65 = ((/* implicit */unsigned int) arr_72 [i_23 - 2]);
    }
    var_66 = ((/* implicit */unsigned char) var_17);
}
