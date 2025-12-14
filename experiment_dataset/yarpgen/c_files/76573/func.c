/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76573
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_8)));
    var_14 &= ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) == (((/* implicit */int) arr_0 [i_0 - 2]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 2]))));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) > (var_12)));
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_17 += ((/* implicit */unsigned long long int) var_5);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
        var_19 -= ((/* implicit */unsigned long long int) arr_6 [i_1 - 3]);
        arr_7 [i_1] = ((/* implicit */_Bool) var_4);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) var_8);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) && (((/* implicit */_Bool) var_8))));
                arr_16 [i_2] [i_2] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned short) arr_10 [i_2 + 1] [i_2 + 1] [i_4]);
            }
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_22 = ((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2]);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))))));
                arr_19 [i_2] [i_3 - 3] [i_5] &= var_0;
            }
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                arr_23 [i_2 + 1] [i_2 + 1] [i_6] = ((/* implicit */unsigned short) ((arr_15 [i_2 + 1] [i_3 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6 + 1])))));
                arr_24 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_11 [i_6 - 1] [i_3 + 1]);
            }
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_24 *= ((/* implicit */unsigned char) var_5);
                var_25 -= ((/* implicit */unsigned int) arr_8 [i_3 - 1]);
                arr_27 [i_7] [i_7] [i_7] [i_2] = ((/* implicit */short) var_6);
            }
            arr_28 [i_2 + 1] [i_3 - 2] [i_3 + 1] = ((/* implicit */unsigned int) arr_14 [i_3] [i_2] [i_2] [i_2]);
        }
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) var_9);
                    var_27 = ((/* implicit */signed char) ((arr_15 [i_2 + 1] [i_8 - 2]) ^ (arr_15 [i_2 + 1] [i_8 - 3])));
                    var_28 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_38 [i_8 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2])) << (((var_6) - (9548986250808587362ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        var_29 -= ((/* implicit */short) ((arr_35 [i_2 + 1] [i_8 - 1] [i_10] [i_2 + 1]) > (((/* implicit */long long int) arr_29 [i_2] [i_8] [i_9]))));
                        var_30 *= var_6;
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_8 - 3] [i_2 + 1])) > (((/* implicit */int) arr_36 [i_2 + 1]))));
                        var_32 = ((/* implicit */short) var_11);
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_11 + 2])) && (arr_30 [i_8] [i_8] [i_8 - 1])));
                    }
                }
                for (short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_12] [i_8 - 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_44 [i_2 + 1] [i_8 - 3] [i_2 + 1]))));
                    var_35 -= ((/* implicit */long long int) var_9);
                }
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_2]))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                arr_50 [i_8] [i_13] = ((/* implicit */unsigned int) ((arr_45 [i_2 + 1] [i_2 + 1] [i_13 + 2] [i_2 + 1]) + (var_6)));
                var_37 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) << (((/* implicit */int) arr_26 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) arr_42 [i_2] [i_8] [i_13 - 1] [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 2]))));
                var_39 = ((/* implicit */long long int) arr_49 [i_13 - 1] [i_2 + 1] [i_8 + 1] [i_2 + 1]);
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 + 1] [i_8 - 1] [i_13 + 2]))) >= (1306256075U)));
            }
            var_41 = ((/* implicit */unsigned int) var_11);
        }
        for (unsigned int i_14 = 3; i_14 < 18; i_14 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_11 [i_2] [i_2])) / (((var_7) | (arr_13 [i_2] [i_2] [i_2] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                arr_56 [i_2] [i_2] [i_15] = ((((/* implicit */int) arr_42 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1])) ^ (((/* implicit */int) var_2)));
                var_43 = ((/* implicit */unsigned short) arr_54 [i_14 - 2] [i_15]);
            }
            for (long long int i_16 = 2; i_16 < 17; i_16 += 2) 
            {
                var_44 = ((/* implicit */short) var_9);
                var_45 = ((/* implicit */short) ((arr_14 [i_2] [i_14 - 2] [i_2] [i_2 + 1]) & (arr_14 [i_2] [i_14 - 2] [i_16 - 1] [i_2 + 1])));
                var_46 ^= ((/* implicit */int) arr_15 [i_2] [i_2]);
                var_47 = ((/* implicit */short) var_6);
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_14 - 3] [i_2] [i_2])) | (((/* implicit */int) arr_44 [i_14 - 3] [i_14 - 3] [i_14]))));
            }
        }
        var_49 = ((/* implicit */unsigned short) var_8);
        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2 + 1] [i_2]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_18 = 1; i_18 < 20; i_18 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_51 = ((/* implicit */short) var_9);
                var_52 -= ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_19])) | (((/* implicit */int) arr_62 [i_19]))));
                var_53 = ((/* implicit */unsigned long long int) var_11);
            }
            for (long long int i_20 = 0; i_20 < 22; i_20 += 2) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned char) var_6);
                var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) var_4))));
            }
            for (long long int i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
            {
                var_56 *= ((/* implicit */unsigned int) ((var_12) == (((/* implicit */long long int) arr_67 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1]))));
                arr_74 [i_17] [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) arr_68 [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1])) - (((/* implicit */int) arr_68 [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1]))));
                var_57 = var_10;
            }
            var_58 = arr_59 [i_18];
        }
        /* LoopSeq 3 */
        for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
        {
            arr_78 [i_17] [i_22] [i_22] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [i_17] [i_17] [i_17] [i_17])) >> (((var_4) - (1176913534U)))));
            var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_8) > (((/* implicit */long long int) var_0))))) <= (arr_67 [i_17] [i_17] [i_17] [i_17]))))));
        }
        for (signed char i_23 = 4; i_23 < 21; i_23 += 3) 
        {
            arr_81 [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_61 [i_17] [i_17])) < (((/* implicit */int) arr_68 [i_17] [i_17] [i_23 - 3] [i_23]))));
            var_60 = var_5;
            var_61 = ((/* implicit */short) ((arr_71 [i_17] [i_17] [i_17]) || (((/* implicit */_Bool) arr_72 [i_23]))));
            arr_82 [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_59 [i_23 - 2]);
            var_62 = ((/* implicit */unsigned int) arr_62 [i_17]);
        }
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 4) 
        {
            arr_85 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((var_12) + (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) arr_67 [i_17] [i_24] [i_17] [i_17]))))))));
            var_63 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_24])) ^ (((/* implicit */int) var_11))));
            /* LoopSeq 2 */
            for (unsigned int i_25 = 4; i_25 < 20; i_25 += 1) /* same iter space */
            {
                var_64 = ((/* implicit */_Bool) var_5);
                arr_88 [i_17] [i_17] [i_24] [i_25] = ((/* implicit */long long int) var_9);
                var_65 = ((/* implicit */signed char) min((var_65), (((/* implicit */signed char) arr_63 [i_17]))));
                var_66 = ((/* implicit */long long int) max((var_66), (((/* implicit */long long int) arr_63 [i_25 - 2]))));
            }
            for (unsigned int i_26 = 4; i_26 < 20; i_26 += 1) /* same iter space */
            {
                var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_59 [i_26 - 2]))));
                /* LoopSeq 3 */
                for (unsigned char i_27 = 0; i_27 < 22; i_27 += 2) 
                {
                    var_68 = ((/* implicit */unsigned long long int) arr_64 [i_26 - 1] [i_26 + 1] [i_26]);
                    arr_95 [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */int) ((arr_71 [i_17] [i_24] [i_17]) || (arr_71 [i_17] [i_24] [i_17])))) >= (((/* implicit */int) arr_73 [i_17] [i_24] [i_17] [i_24]))));
                }
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    var_69 ^= ((/* implicit */unsigned long long int) arr_59 [i_28]);
                    /* LoopSeq 3 */
                    for (short i_29 = 3; i_29 < 20; i_29 += 2) 
                    {
                        arr_100 [i_29] [i_29] [i_17] [i_28] [i_29 - 1] [i_28] [i_24] = ((/* implicit */long long int) arr_92 [i_26]);
                        arr_101 [i_26] [i_17] [i_26] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_89 [i_29] [i_28 + 1] [i_28 + 1] [i_28])) <= (((/* implicit */int) arr_89 [i_17] [i_28 + 1] [i_26 + 2] [i_28]))));
                        var_70 = ((/* implicit */short) arr_67 [i_17] [i_28 + 1] [i_29 - 1] [i_28 + 1]);
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 3) 
                    {
                        var_71 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_80 [i_26] [i_24] [i_26 - 2])) & (((/* implicit */int) arr_80 [i_26] [i_24] [i_26 - 4]))));
                        var_72 = ((/* implicit */short) var_9);
                    }
                    for (unsigned short i_31 = 0; i_31 < 22; i_31 += 2) 
                    {
                        var_73 = ((/* implicit */short) ((arr_97 [i_28 + 1] [i_28] [i_31] [i_31]) >= (arr_97 [i_28 + 1] [i_28] [i_28] [i_31])));
                        var_74 -= ((/* implicit */short) var_12);
                        var_75 = ((/* implicit */long long int) var_6);
                        arr_109 [i_17] [i_24] [i_26] [i_17] [i_31] = ((/* implicit */short) arr_97 [i_24] [i_17] [i_24] [i_17]);
                    }
                    arr_110 [i_17] [i_17] [i_17] [i_26] [i_26] [i_28 + 1] = ((/* implicit */unsigned short) arr_63 [i_28]);
                    var_76 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) + (31U)));
                }
                for (unsigned int i_32 = 0; i_32 < 22; i_32 += 4) 
                {
                    arr_114 [i_17] [i_17] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_90 [i_17] [i_24] [i_26] [i_32])) ^ (arr_75 [i_17] [i_24]))) ^ (((/* implicit */unsigned long long int) ((arr_90 [i_17] [i_26] [i_17] [i_17]) ^ (var_10))))));
                    var_77 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_108 [i_26 - 4] [i_17] [i_26 - 3] [i_26 - 4] [i_26] [i_26])));
                    var_78 = ((/* implicit */unsigned long long int) max((var_78), (((/* implicit */unsigned long long int) var_3))));
                    var_79 = ((/* implicit */int) var_10);
                    /* LoopSeq 1 */
                    for (short i_33 = 1; i_33 < 19; i_33 += 2) 
                    {
                        var_80 = ((/* implicit */unsigned short) var_10);
                        var_81 *= ((/* implicit */signed char) var_6);
                        var_82 = ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_68 [i_24] [i_26 - 4] [i_33 + 3] [i_33 + 2])));
                        var_83 = ((/* implicit */unsigned long long int) ((var_12) & (((/* implicit */long long int) arr_115 [i_26 + 1] [i_17] [i_33 + 1]))));
                    }
                }
            }
        }
    }
}
