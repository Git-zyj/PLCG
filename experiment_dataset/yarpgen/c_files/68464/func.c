/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68464
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
    var_18 = ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_15)))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (9223372036854775807LL))))))));
    var_20 += ((/* implicit */short) (-(var_14)));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0 - 1] &= ((arr_1 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)4)), (var_8)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 1196068944U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_0])) ? (-2869834777672262199LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)14] [(unsigned short)16])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_22 -= ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_1 [i_0] [16U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_2]))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) var_15);
                            var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_2 - 3])) ? ((~(var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                        }
                        arr_15 [i_0] [i_0] [i_1] [22LL] [i_1] [(unsigned char)5] = ((/* implicit */int) ((((/* implicit */long long int) var_15)) != (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_11 [i_0 - 1])))), ((+(5964363606984416769LL)))))));
                    }
                    var_25 ^= ((/* implicit */unsigned int) (~((+(arr_8 [i_0] [i_0 + 1] [i_0 + 2] [i_2 + 1])))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 2])) ? (((/* implicit */int) arr_14 [i_1] [i_2 - 2] [(unsigned short)16] [i_0 + 2] [(unsigned short)10] [i_0 + 2] [(unsigned char)18])) : (((/* implicit */int) arr_14 [i_1] [i_2 - 2] [i_2 + 1] [i_0 - 2] [i_2 + 1] [(signed char)5] [i_1]))))) ? (((/* implicit */int) ((short) arr_14 [i_1] [i_2 + 1] [(unsigned char)23] [i_0 - 2] [i_1] [i_1] [i_1]))) : ((-(((/* implicit */int) arr_9 [i_0 + 1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_27 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 226045181U)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (arr_13 [i_0] [i_0] [20U] [i_0] [i_0] [i_0] [i_0]) : ((+(((/* implicit */int) arr_0 [i_1] [i_1])))))) ^ (arr_6 [i_0] [i_0] [i_0 + 2])));
                        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_29 = 13U;
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) var_2))) % (-8356515892178191409LL))) & (((/* implicit */long long int) ((unsigned int) arr_9 [i_2]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1] [i_0 + 1]))))))));
                        var_31 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0 + 2] [i_2 + 1] [i_6])))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_0 - 2] [i_0 - 1] [i_2 + 1]), (arr_6 [i_0 + 1] [i_0 - 1] [i_2 - 1])))) ? ((+(((((/* implicit */int) var_12)) >> (((arr_22 [i_0]) + (5936932967601967825LL))))))) : ((~((~(((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned char)14]))))))));
                        var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (short)11550))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [12U] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])) ? (((((/* implicit */_Bool) 27U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) : (4294967282U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_7] [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [12U] [(short)1] [(short)1] [(short)1] [(short)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_7])))))) : (arr_18 [i_0 - 1] [i_7] [i_2] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 3]))))))))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_29 [i_9] [i_0 + 2] [i_8] [i_0 + 2] = ((((/* implicit */_Bool) max((arr_26 [i_0 + 1]), (arr_26 [i_0 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_26 [i_0 + 2]))))) : ((~(((/* implicit */int) arr_26 [i_0 + 1])))));
                    /* LoopSeq 3 */
                    for (short i_10 = 4; i_10 < 22; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */int) ((unsigned short) -5964363606984416769LL));
                        var_36 += ((/* implicit */unsigned char) 16609341767450209020ULL);
                        var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((unsigned long long int) arr_28 [i_8] [i_9] [i_9])) : (max((arr_17 [i_0 + 2]), (arr_17 [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_0 - 2] [i_8])))));
                        arr_34 [i_0] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_11] [i_8] [i_0 + 2] [i_11] [i_9] [i_0]))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (25058)))))) == (max((((/* implicit */unsigned long long int) arr_14 [i_12] [(unsigned char)10] [i_9] [i_12] [i_9] [i_9] [i_9])), (arr_17 [i_0])))))), (((((/* implicit */_Bool) arr_16 [13LL] [i_0 - 2] [i_0 + 2] [i_0 + 2] [(signed char)6])) ? (((((/* implicit */_Bool) arr_1 [i_0] [18LL])) ? (arr_17 [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 2] [(unsigned char)4]))) & (var_11))))))));
                            var_40 ^= ((/* implicit */short) arr_31 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                        {
                            var_41 ^= ((/* implicit */short) arr_33 [i_0 + 1]);
                            var_42 |= 959794041U;
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            arr_46 [i_0] [i_8] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_1);
                            var_43 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 222098128)) ? (((/* implicit */long long int) 222098112)) : (-4892998368004867213LL))))));
                            arr_47 [i_0] [i_8] [i_12] [(unsigned short)20] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 1624421010U))) ? (((((/* implicit */int) arr_38 [i_0] [i_0] [i_12] [i_12] [i_15] [i_8])) & (((/* implicit */int) arr_38 [i_0 + 2] [i_8] [i_12] [i_0 + 2] [i_15] [(short)0])))) : (((/* implicit */int) var_7))));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 4; i_16 < 23; i_16 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5))))) ? (((long long int) (unsigned char)244)) : ((~(arr_18 [i_0] [i_12] [i_0 - 1] [i_0 - 2])))));
                            var_45 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)53329)) >> (((((/* implicit */int) (short)-1)) + (30)))));
                        }
                        var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4068922114U))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_17 = 2; i_17 < 7; i_17 += 2) 
    {
        var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_17 + 2] [i_17] [4U]))));
        arr_54 [i_17 + 2] &= ((/* implicit */int) var_9);
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_17] [i_17 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) var_13)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_17]))) <= (((unsigned int) (unsigned short)128)))))));
        arr_55 [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_41 [i_17 + 1] [7ULL] [i_17] [i_17] [i_17] [9U])) ? (((/* implicit */unsigned long long int) arr_45 [i_17] [i_17] [i_17 + 2] [i_17] [i_17 + 1] [(short)2])) : (arr_41 [i_17] [i_17 - 1] [i_17] [i_17 + 1] [(short)12] [i_17]))) >= (arr_41 [i_17 - 1] [i_17] [i_17 - 2] [i_17] [i_17 + 2] [i_17 + 2])));
        var_49 = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_17 + 3] [i_17 + 3] [i_17] [i_17] [i_17 + 2] [i_17 + 2])) >> ((((+(((/* implicit */int) (unsigned short)37900)))) - (37898)))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 3; i_18 < 24; i_18 += 1) 
    {
        var_50 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_57 [i_18 - 2]))));
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 23; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    {
                        var_51 = arr_60 [14ULL] [i_18];
                        arr_68 [i_18] [(signed char)16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (-4084252585581779078LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_18] [i_19] [i_19] [i_19 - 1] [i_18 - 3])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_22 = 1; i_22 < 9; i_22 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_23 = 2; i_23 < 10; i_23 += 3) /* same iter space */
        {
            var_52 = ((/* implicit */unsigned short) (-(3176574465U)));
            arr_73 [i_22] [(signed char)2] [i_22 + 2] = ((/* implicit */short) ((2980169391U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192)))));
        }
        for (int i_24 = 2; i_24 < 10; i_24 += 3) /* same iter space */
        {
            var_53 = ((/* implicit */long long int) ((unsigned short) var_9));
            var_54 ^= ((/* implicit */unsigned char) (~(arr_22 [i_24 + 2])));
            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((((/* implicit */_Bool) 5069026559500281661LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (9125355651520391587LL))) >> (((((/* implicit */int) var_4)) - (65))))))));
        }
        for (int i_25 = 2; i_25 < 10; i_25 += 3) /* same iter space */
        {
            var_56 |= (unsigned short)52248;
            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_22 - 1] [i_25 - 1] [i_25 - 2] [i_25 - 1] [21])) ? (((/* implicit */int) arr_50 [i_22 + 1] [i_25 - 1] [i_25 - 2] [i_25 - 2] [i_25])) : (((/* implicit */int) var_4))));
            var_58 = ((unsigned int) var_7);
            arr_79 [i_25] [7ULL] = ((/* implicit */short) ((unsigned int) arr_67 [15U] [i_25 - 1] [i_25 - 1] [i_22] [i_22 + 3]));
        }
        for (signed char i_26 = 0; i_26 < 12; i_26 += 4) 
        {
            var_59 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_22 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_67 [i_22] [i_26] [i_22] [i_22] [(unsigned char)17])))))));
            /* LoopNest 2 */
            for (unsigned char i_27 = 2; i_27 < 11; i_27 += 1) 
            {
                for (signed char i_28 = 0; i_28 < 12; i_28 += 2) 
                {
                    {
                        var_60 = ((/* implicit */short) var_4);
                        var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) arr_58 [i_22]))));
                        arr_86 [4LL] [i_26] [i_26] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_82 [i_22] [i_22] [i_27 - 1] [8LL])) >= (((/* implicit */int) var_1)))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_29 = 1; i_29 < 9; i_29 += 1) 
        {
            var_62 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [(short)5] [i_22] [i_29] [(short)5]))));
            arr_90 [i_22] [i_22] [i_22] = ((/* implicit */short) (~(((1354528025U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
        var_63 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [(unsigned char)10] [4LL] [i_22])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)10))))) : (arr_28 [i_22 + 3] [(unsigned char)23] [i_22 + 3])));
    }
}
