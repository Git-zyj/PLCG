/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89798
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)220)), (((max((((/* implicit */long long int) (unsigned short)50482)), (-4LL))) >> (((/* implicit */int) min(((unsigned char)220), (((/* implicit */unsigned char) (signed char)45)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) 16777215);
        var_22 = ((/* implicit */signed char) ((((-16777215) + (2147483647))) >> (((16777215) - (16777204)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((12715007157089174414ULL) <= (5731736916620377202ULL))))) != (((2980869523U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_24 *= ((/* implicit */short) (_Bool)1);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_25 = ((/* implicit */_Bool) (short)21813);
                arr_7 [i_0] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
                arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) 16777215);
                var_26 = ((/* implicit */signed char) ((16777215) % (((/* implicit */int) (unsigned short)56336))));
                var_27 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)52))));
            }
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_15 [(unsigned short)11] [i_3] [i_3] = ((/* implicit */short) (unsigned char)42);
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (unsigned char)116))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)28)) ^ (((/* implicit */int) (signed char)-123)))))));
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_5 - 1] [i_6] [i_6] = ((/* implicit */unsigned short) 4294967288U);
                            arr_22 [i_6] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (unsigned short)28007);
                        }
                    } 
                } 
                arr_23 [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) < (3726843966703303865LL)));
                var_30 = ((/* implicit */signed char) 4294967288U);
                arr_24 [i_3] = ((/* implicit */long long int) (unsigned char)252);
            }
            for (short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)127))));
                var_32 ^= ((/* implicit */unsigned char) (short)-257);
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_7] [i_0] [i_9] = ((/* implicit */unsigned int) (short)0);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)229)) ^ (((/* implicit */int) (unsigned char)213))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)69)) & (((/* implicit */int) (_Bool)1))));
                        var_35 |= ((/* implicit */short) (signed char)8);
                        arr_38 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) (unsigned char)99);
                    }
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_36 = ((/* implicit */long long int) (signed char)31);
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_37 ^= ((/* implicit */unsigned int) (signed char)-9);
                    var_38 += ((/* implicit */short) (_Bool)1);
                }
                for (short i_15 = 2; i_15 < 23; i_15 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)765)) & (((/* implicit */int) (_Bool)1))));
                    var_40 = (signed char)-96;
                }
            }
            for (unsigned char i_16 = 1; i_16 < 23; i_16 += 4) 
            {
                arr_53 [i_12] [i_12] [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)115)) >> (((((/* implicit */int) (short)-8526)) + (8527)))));
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-8))));
            }
            var_42 = (unsigned short)35778;
            var_43 = ((/* implicit */unsigned int) (unsigned short)43502);
            arr_54 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18999))) > (8720419779643334996LL)));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_57 [i_0] [i_17] = ((/* implicit */unsigned char) 8720419779643334978LL);
            arr_58 [i_17] = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                arr_63 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25686)) && (((/* implicit */_Bool) 941280673U))));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 3; i_19 < 21; i_19 += 2) 
                {
                    arr_67 [i_0] [i_0] [i_17] [i_0] [i_19] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)10073)));
                    var_44 -= ((/* implicit */_Bool) ((-1949868735) & (((/* implicit */int) (unsigned short)36913))));
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) 578513801U))));
                    var_46 = ((/* implicit */signed char) (short)22312);
                }
                for (unsigned char i_20 = 4; i_20 < 23; i_20 += 3) 
                {
                    var_47 = (short)-21814;
                    var_48 = (signed char)109;
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) (signed char)99))));
                    var_50 = ((/* implicit */signed char) ((7U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))));
                }
                var_51 = ((/* implicit */unsigned int) (unsigned short)42088);
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            arr_74 [i_21] [i_0] = ((/* implicit */short) (signed char)-91);
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                for (signed char i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) << (((8720419779643335003LL) - (8720419779643334999LL)))));
                            arr_82 [(signed char)18] [i_21] [i_22] [i_21] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)86)) <= (((/* implicit */int) (unsigned short)29611)));
                            arr_83 [i_0] [i_0] [i_22] [i_23] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55464)) >> (((/* implicit */int) (_Bool)0))));
                            arr_84 [i_0] [i_0] [i_22] [i_0] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)13184)) - (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_25 = 2; i_25 < 23; i_25 += 2) 
                        {
                            arr_87 [i_0] [i_0] [i_0] [i_22] [i_23] [i_25 - 2] [i_25] = ((/* implicit */int) (_Bool)1);
                            var_53 = ((/* implicit */unsigned short) (signed char)63);
                            arr_88 [i_0] [i_21] [i_22] [i_0] [i_23] [i_25 + 1] = ((/* implicit */signed char) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64124)))));
                        }
                        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (unsigned short)64124))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (int i_26 = 0; i_26 < 24; i_26 += 3) 
        {
            var_55 -= ((/* implicit */unsigned char) 0U);
            var_56 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)72)) - (((/* implicit */int) (signed char)-43))));
            var_57 = ((/* implicit */short) (_Bool)0);
            arr_92 [i_26] [i_0] [i_26] = ((/* implicit */_Bool) ((1U) | (((/* implicit */unsigned int) -16777216))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 2) 
        {
            var_58 = 540431955284459520ULL;
            arr_96 [i_27] = ((/* implicit */unsigned char) (_Bool)1);
            var_59 += ((/* implicit */unsigned short) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    for (unsigned int i_28 = 0; i_28 < 25; i_28 += 2) 
    {
        arr_99 [i_28] = max((max((((/* implicit */unsigned int) (unsigned short)1422)), (4294967282U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33438)) * (((/* implicit */int) (short)0))))));
        arr_100 [i_28] = ((/* implicit */unsigned short) min((((12266077965108712160ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 4294967288U)))))));
        arr_101 [i_28] = ((/* implicit */unsigned short) (unsigned char)238);
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        var_60 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))))), (max((((/* implicit */unsigned int) (signed char)127)), (2064460273U)))));
        var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)23))))) < (2064460273U)))) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)189)) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)65)), ((unsigned char)238))))))))))));
    }
    var_62 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)32767))));
    var_63 = var_13;
    /* LoopNest 3 */
    for (unsigned int i_30 = 0; i_30 < 19; i_30 += 2) 
    {
        for (unsigned char i_31 = 3; i_31 < 15; i_31 += 3) 
        {
            for (unsigned short i_32 = 1; i_32 < 16; i_32 += 2) 
            {
                {
                    arr_110 [i_30] [i_32] [(signed char)16] = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)16826))) * (4061459955U))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((short)25129), (((/* implicit */short) (_Bool)0)))))));
                    var_64 = ((/* implicit */_Bool) ((((/* implicit */int) ((16U) >= (2064460281U)))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)36779)) - (36749)))))))))));
                    arr_111 [i_30] [i_32] [i_32] = ((/* implicit */unsigned int) max(((unsigned char)2), (((/* implicit */unsigned char) ((max((8U), (7U))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)28725))))))))));
                    arr_112 [i_32] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)16)))) < (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
