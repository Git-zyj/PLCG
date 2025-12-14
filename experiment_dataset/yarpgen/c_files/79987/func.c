/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79987
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_11 ^= var_0;
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(unsigned short)4] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_3 + 2]))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */unsigned char) (+(0ULL)));
        }
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_14 = arr_7 [i_0] [i_0];
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) arr_15 [i_0] [i_5] [i_6]);
                var_16 = ((/* implicit */long long int) (-(127260860U)));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (arr_4 [i_0] [i_0] [i_6])))) ? (var_5) : (arr_0 [i_0])));
                var_18 = ((/* implicit */unsigned char) arr_16 [i_0] [i_5]);
            }
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 2]))));
                            var_20 = ((/* implicit */unsigned char) arr_12 [i_7] [i_7] [i_7 + 2] [i_8] [(unsigned short)6]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_27 [(_Bool)1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
                var_22 = ((/* implicit */unsigned short) var_10);
            }
        }
        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_10])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_19 [i_0] [i_10] [i_0]))));
            var_24 = ((/* implicit */short) arr_9 [i_10] [i_10] [i_10] [i_0] [i_0]);
            var_25 = ((/* implicit */int) var_10);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_29 [i_0] [i_10])));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_11] [i_11] [8LL] [i_0] [i_0])))));
            var_28 = ((/* implicit */int) (-(127260860U)));
        }
    }
    /* vectorizable */
    for (short i_12 = 2; i_12 < 11; i_12 += 1) 
    {
        var_29 = ((/* implicit */_Bool) var_9);
        var_30 = ((/* implicit */unsigned char) arr_30 [i_12] [i_12 - 2] [i_12 + 1]);
        /* LoopSeq 4 */
        for (unsigned short i_13 = 4; i_13 < 9; i_13 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_12 - 2] [i_13 - 4])) ? (arr_13 [i_12 - 2] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_32 &= ((/* implicit */short) arr_8 [i_12 + 1] [i_12]);
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (short)-9))))) : (arr_6 [i_12])));
            var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_36 [i_12 - 2]))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_13 - 1] [i_12])) ? (((/* implicit */int) arr_5 [i_13 - 1] [i_13])) : (((/* implicit */int) arr_5 [i_13 - 2] [i_13]))));
        }
        for (unsigned short i_14 = 4; i_14 < 9; i_14 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */short) arr_40 [i_12] [i_12 + 1]);
            var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_12 - 1] [i_12 - 1] [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12 - 1] [i_12 - 2] [i_12 - 2]))) : (arr_30 [(unsigned char)4] [i_12 - 2] [i_12 - 1])));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_12 - 1] [i_14 + 1])) ? (arr_7 [i_12 - 1] [i_14 + 1]) : (arr_7 [i_12 - 2] [i_14 - 2])));
        }
        for (unsigned short i_15 = 4; i_15 < 9; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_39 = ((/* implicit */short) arr_2 [i_12 - 1]);
                /* LoopNest 2 */
                for (short i_17 = 4; i_17 < 10; i_17 += 4) 
                {
                    for (signed char i_18 = 3; i_18 < 11; i_18 += 1) 
                    {
                        {
                            var_40 = var_4;
                            var_41 = arr_16 [i_12 - 1] [i_15];
                            var_42 = ((/* implicit */short) arr_49 [i_12 - 2] [i_12 + 1] [i_16]);
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned int) var_4);
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_12 - 1] [(_Bool)1] [i_12 + 1] [i_15 - 2])) ? (var_4) : (((/* implicit */unsigned long long int) arr_20 [i_12 - 2] [i_12] [i_12 - 2] [i_15 + 1]))));
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_7))));
            }
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_21 [4ULL])) : (var_4))))));
        }
        for (unsigned short i_19 = 4; i_19 < 9; i_19 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                for (unsigned int i_21 = 3; i_21 < 11; i_21 += 3) 
                {
                    {
                        var_47 = ((/* implicit */short) arr_19 [i_12 + 1] [i_19 - 2] [i_21 - 2]);
                        var_48 = ((/* implicit */unsigned int) arr_62 [i_12 - 2]);
                        var_49 = ((((/* implicit */_Bool) arr_7 [i_12 - 1] [(unsigned short)11])) ? (arr_28 [i_12] [i_19] [i_20] [i_12] [10U]) : (((/* implicit */unsigned long long int) arr_4 [i_12 + 1] [i_19 + 2] [i_20])));
                        var_50 = ((/* implicit */unsigned short) arr_64 [i_12 - 2]);
                        var_51 = arr_54 [(unsigned char)9] [i_12 - 1] [(unsigned char)9] [(unsigned char)9] [i_20] [i_21 + 1];
                    }
                } 
            } 
            var_52 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_12 - 1] [i_12 - 2] [8] [i_12] [i_12 - 2])) ? (((/* implicit */int) arr_33 [i_12 + 1])) : (((/* implicit */int) arr_33 [i_12 - 2]))));
            var_53 = ((/* implicit */short) arr_27 [i_12 + 1] [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 1] [i_12]);
            /* LoopSeq 2 */
            for (short i_22 = 2; i_22 < 8; i_22 += 4) 
            {
                var_54 = ((/* implicit */signed char) var_0);
                var_55 = ((/* implicit */unsigned int) min((var_55), (arr_57 [i_12 - 1] [i_12 - 2] [i_12])));
            }
            for (short i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                var_56 = ((/* implicit */unsigned long long int) arr_46 [i_12 - 1] [i_12 - 2] [i_19 - 2]);
                var_57 = ((/* implicit */int) var_3);
            }
        }
        var_58 = arr_29 [i_12] [i_12 + 1];
    }
    for (int i_24 = 1; i_24 < 9; i_24 += 3) 
    {
        var_59 = ((/* implicit */unsigned short) min((min((var_7), (arr_68 [(_Bool)0] [i_24 - 1] [i_24 - 1] [(_Bool)0]))), (min((((/* implicit */unsigned long long int) var_8)), (arr_68 [4] [4] [(signed char)6] [i_24])))));
        var_60 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_37 [i_24 + 1])), (var_9)));
    }
    /* vectorizable */
    for (unsigned int i_25 = 0; i_25 < 23; i_25 += 2) 
    {
        var_61 &= ((/* implicit */unsigned char) arr_76 [i_25]);
        var_62 |= ((/* implicit */_Bool) var_5);
        var_63 += ((/* implicit */int) arr_74 [10ULL] [i_25]);
        /* LoopSeq 1 */
        for (signed char i_26 = 0; i_26 < 23; i_26 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 1) 
            {
                var_64 = ((/* implicit */long long int) (+((~(((/* implicit */int) (short)-20))))));
                var_65 ^= ((/* implicit */int) arr_75 [i_25]);
                var_66 = ((/* implicit */unsigned char) arr_74 [i_27] [i_26]);
            }
            for (int i_28 = 0; i_28 < 23; i_28 += 2) 
            {
                var_67 = ((/* implicit */long long int) (-(((/* implicit */int) arr_79 [i_26]))));
                var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) arr_76 [i_25]))));
                var_69 = ((/* implicit */unsigned short) arr_76 [i_25]);
            }
            for (int i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                var_70 = ((/* implicit */int) arr_75 [i_26]);
                /* LoopSeq 4 */
                for (signed char i_30 = 0; i_30 < 23; i_30 += 1) 
                {
                    var_71 = ((/* implicit */short) arr_82 [i_25] [i_26] [i_30]);
                    var_72 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_29])) ? (var_5) : (((/* implicit */unsigned long long int) var_9))));
                }
                for (long long int i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    var_73 = ((/* implicit */unsigned int) arr_85 [i_26] [i_26] [i_31]);
                    var_74 = ((/* implicit */unsigned long long int) var_9);
                }
                for (unsigned int i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    var_75 = ((/* implicit */long long int) max((var_75), (((/* implicit */long long int) arr_85 [i_25] [i_29] [i_32]))));
                    var_76 = ((/* implicit */unsigned long long int) arr_90 [i_25] [i_26] [i_29] [i_26]);
                }
                for (signed char i_33 = 0; i_33 < 23; i_33 += 3) 
                {
                    var_77 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)19))));
                    var_78 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_94 [i_25] [i_26] [i_33])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_87 [i_25] [i_25] [i_25] [i_25]))))) : (arr_86 [i_25] [i_26] [i_25])));
                    var_79 |= ((/* implicit */int) arr_86 [i_29] [i_29] [i_29]);
                }
            }
            var_80 = ((/* implicit */_Bool) var_1);
            var_81 = ((/* implicit */unsigned char) arr_91 [i_25] [i_26] [i_25] [i_26]);
        }
        var_82 = ((/* implicit */signed char) arr_95 [i_25] [i_25] [i_25] [16U] [(_Bool)1] [i_25]);
    }
    var_83 = ((/* implicit */unsigned short) max((max((max((var_7), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) var_8))));
    var_84 = ((/* implicit */int) var_5);
}
