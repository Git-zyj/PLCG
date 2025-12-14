/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95095
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
    var_12 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))));
        var_14 = ((/* implicit */unsigned char) ((0) & (arr_1 [i_0 - 2])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((1680819892) + (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 3]))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) -1338927519))));
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned char)7] [(unsigned char)4]);
                var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3] [i_3] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_3])) : (((/* implicit */int) var_7))))) : (((long long int) arr_6 [i_2])));
                arr_10 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) arr_2 [i_2 + 2]);
                arr_11 [i_0] [i_2 - 2] [(_Bool)1] [i_0 + 1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)15))))));
            }
            for (short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) arr_9 [i_0] [i_2 + 3])))));
                /* LoopSeq 2 */
                for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) (+(arr_2 [i_0 - 2])));
                    var_21 = ((5530466642344883391ULL) < (((/* implicit */unsigned long long int) var_1)));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(8176)))) <= (arr_19 [i_4 - 1] [i_4 - 1] [2] [0U] [i_4 - 1] [i_5 + 2])));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) var_6)) + (var_1))))))));
                        var_24 -= ((/* implicit */unsigned int) (~(((((var_11) + (2147483647))) >> (((var_0) - (3321896337U)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) & (var_6)))) ? ((+(((/* implicit */int) var_2)))) : (((var_11) / (((/* implicit */int) arr_8 [i_2] [i_4] [i_4]))))));
                        var_26 = ((/* implicit */long long int) ((33272844) >> (((/* implicit */int) var_2))));
                    }
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_4 + 2] [i_5 - 1])) <= (((((/* implicit */int) var_9)) ^ (arr_1 [(_Bool)1])))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_4 + 3])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) -1))));
                        var_28 = ((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0] [i_0]);
                    }
                }
                for (unsigned char i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    arr_30 [i_0] [i_4 + 4] [i_2] [i_0 - 3] [i_0] = ((/* implicit */_Bool) (short)4);
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_9 - 3] [i_2])) ? (((/* implicit */int) arr_17 [i_9 - 3] [i_2] [i_2 + 1] [9] [i_10] [i_2])) : (((/* implicit */int) arr_9 [i_9 + 1] [8]))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0 - 3] [i_0 - 3] [i_0 - 3] [(short)7] [i_9 - 1] [i_10] [i_10])) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0 - 3] [i_0] [i_9 - 1] [i_10] [i_10])))))));
                    }
                    var_31 = ((/* implicit */signed char) (+(8589934591LL)));
                    var_32 = ((/* implicit */signed char) ((_Bool) arr_14 [i_9] [i_4 + 3] [i_2] [(short)7]));
                }
            }
            var_33 = ((/* implicit */int) (+(((arr_20 [i_0 - 2] [i_2]) ? (((/* implicit */unsigned int) var_6)) : (var_3)))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -18LL))))) << (((((/* implicit */unsigned long long int) -1372990493)) / (18446744073709551594ULL))))))));
            var_35 = (~(((/* implicit */int) arr_25 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
    }
    for (short i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        var_36 = ((/* implicit */signed char) arr_34 [i_11]);
        arr_35 [i_11 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_33 [14ULL])))) ? (max((((/* implicit */long long int) var_9)), (arr_34 [i_11]))) : ((~(arr_34 [i_11]))))) != (arr_34 [(_Bool)0])));
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_37 = ((/* implicit */unsigned long long int) ((unsigned int) var_4));
                /* LoopSeq 4 */
                for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
                {
                    arr_45 [i_11] [i_13] [i_13] [i_13] [i_13] [i_14 + 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)231))));
                    var_38 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (short)32767)))));
                    var_39 = ((/* implicit */_Bool) var_0);
                }
                for (short i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    var_40 |= ((/* implicit */short) (((~(9223372036854775807LL))) == (((/* implicit */long long int) arr_37 [i_11 - 1] [i_12]))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((((/* implicit */int) arr_47 [i_11] [i_12] [i_13] [i_12])) - (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) (unsigned char)24)))))));
                }
                for (unsigned char i_16 = 4; i_16 < 17; i_16 += 1) 
                {
                    var_42 = ((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_11 - 1] [i_12] [i_13]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 2) /* same iter space */
                    {
                        arr_55 [(unsigned char)4] [i_12] [i_13] [i_12] [i_17 + 1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        arr_56 [i_11] [(signed char)10] [i_13] [i_13] [i_13] [i_17] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_48 [i_16 - 2] [i_11 - 1]))));
                    }
                    for (unsigned short i_18 = 1; i_18 < 17; i_18 += 2) /* same iter space */
                    {
                        arr_59 [i_11] [i_12] [i_13] [i_13] [i_18] [i_12] = ((((/* implicit */_Bool) ((signed char) arr_38 [i_11] [i_12] [i_13] [i_13]))) ? (((/* implicit */int) arr_42 [i_11] [i_11 - 1])) : (((var_11) & (((/* implicit */int) (short)5440)))));
                        var_43 = ((/* implicit */unsigned char) (signed char)-45);
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-2676)) == (((/* implicit */int) var_5)))))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_13])))));
                        var_45 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (short)25985)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_19 = 1; i_19 < 17; i_19 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */short) (unsigned short)16);
                        var_47 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-13488)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) != (arr_34 [i_19]))))) : (arr_33 [i_11 + 1])));
                    }
                }
                for (unsigned long long int i_20 = 2; i_20 < 16; i_20 += 1) 
                {
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) var_11)))))));
                    arr_66 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)32757)) && (((/* implicit */_Bool) var_5)))))));
                }
                var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -303435264)) ? (2147483647) : (-187490166)))) ? (((/* implicit */int) arr_48 [i_11] [i_11 - 1])) : (((/* implicit */int) arr_65 [i_11] [i_12] [i_13] [i_13]))));
            }
            arr_67 [i_11] [i_11] = ((/* implicit */long long int) 3968);
        }
        for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 768U))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_11] [i_11 - 1] [i_11]))));
                var_51 = ((/* implicit */unsigned char) (+(arr_50 [i_11 - 1] [i_21] [i_22] [i_22])));
            }
            var_52 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) % (((18446744073709551595ULL) >> (((((/* implicit */int) (short)32764)) - (32745))))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1519320612))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (4294967293U))))))));
            var_53 = ((/* implicit */long long int) arr_43 [i_11] [i_21] [i_11] [i_11]);
        }
        for (unsigned char i_23 = 1; i_23 < 16; i_23 += 1) 
        {
            arr_76 [i_23 - 1] [i_23] [i_11] = ((/* implicit */long long int) (short)(-32767 - 1));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 18; i_24 += 3) 
            {
                var_54 = ((/* implicit */unsigned char) ((arr_72 [i_11 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-31011))));
                var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_9))));
                var_56 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) != (100838104U)));
                var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)(-127 - 1))))))));
                var_58 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 85684798)) != (arr_50 [i_11] [i_11] [i_11] [i_11 + 1])));
            }
        }
    }
    var_59 ^= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (short i_25 = 1; i_25 < 16; i_25 += 1) 
    {
        var_60 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_81 [i_25 + 2] [i_25 + 2])) ? (arr_81 [i_25 + 2] [i_25]) : (arr_81 [i_25 + 2] [i_25])))));
        var_61 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1077050))))) >> (((max((((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)0)))), ((+(((/* implicit */int) (unsigned char)74)))))) - (60)))));
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 1; i_26 < 17; i_26 += 2) 
        {
            for (unsigned int i_27 = 1; i_27 < 17; i_27 += 1) 
            {
                {
                    var_62 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_86 [(signed char)6] [i_26 + 1] [i_26 + 1])), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)22572)) >= (((/* implicit */int) arr_88 [i_25])))))) : (arr_81 [i_26] [i_26 + 2])))));
                    arr_89 [(signed char)11] [i_26] [i_25] = ((/* implicit */_Bool) (-((+((~(((/* implicit */int) arr_86 [i_25] [(signed char)5] [i_25]))))))));
                    var_63 = ((/* implicit */int) arr_87 [i_26 + 1] [i_27] [i_27] [i_27]);
                }
            } 
        } 
    }
    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 2) 
    {
        arr_93 [i_28] = ((/* implicit */signed char) (-((~(((/* implicit */int) max((arr_73 [i_28] [(short)7]), (((/* implicit */short) (_Bool)0)))))))));
        var_64 = ((/* implicit */signed char) (~(3579663650U)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_29 = 3; i_29 < 19; i_29 += 1) 
    {
        var_65 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 1384559512U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_97 [i_29 + 3]))));
        var_66 ^= ((/* implicit */_Bool) 2107778852);
    }
}
