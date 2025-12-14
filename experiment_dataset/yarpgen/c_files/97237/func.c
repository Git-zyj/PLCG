/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97237
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_5);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 - 1])) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1])))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_2] [9ULL] [i_0]))));
                        var_12 = ((/* implicit */unsigned long long int) var_2);
                        var_13 ^= ((/* implicit */_Bool) arr_10 [i_3 + 2] [9LL] [(short)7] [i_3 + 2] [(unsigned char)5]);
                    }
                } 
            } 
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned short) arr_9 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) ((arr_9 [i_1 + 1] [i_4] [(unsigned short)7] [i_4] [i_5 + 1] [(short)1]) << (((arr_9 [i_1 - 3] [i_4] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 2]) - (16994493452643228051ULL)))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_20 [i_6] [i_5 + 1] [i_4] [i_4] [i_4] [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_16 [i_5] [(short)8] [i_5] [2ULL] [i_5])));
                            arr_21 [i_1] [i_4] [i_4] [2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_4] [i_4] [i_5] [(short)4] [i_6] [i_4]))) != (arr_9 [i_0] [9LL] [i_4] [i_4] [i_6] [3LL]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)24106)) : (((/* implicit */int) var_5))))));
                            var_17 = ((/* implicit */unsigned char) ((long long int) -860890864));
                        }
                        for (short i_7 = 2; i_7 < 7; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_7 - 2] [0ULL] [i_5 - 1])) >> (((arr_10 [i_5 + 2] [i_7 - 2] [i_7 - 2] [i_7 + 2] [2ULL]) + (1860011072169731542LL)))));
                            arr_25 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned char) -860890857));
                        }
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5] [i_8] = ((/* implicit */long long int) arr_4 [i_0]);
                            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (((unsigned long long int) arr_11 [i_0] [(_Bool)1] [i_5] [(_Bool)1])));
                            var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) 860890863)) ? (arr_1 [i_1 - 3]) : (((/* implicit */unsigned long long int) -860890864))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(13644224363024849775ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [i_8] [i_4] [i_5 - 1])) != (((/* implicit */int) var_4)))))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -860890864)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30818))) : (4802519710684701859ULL)));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [4ULL] [i_5 - 1] [i_9] [i_4])) - (((/* implicit */int) var_5))));
                            var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1]))) - (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_0] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                            var_25 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) -860890864)) ? (-1) : (((/* implicit */int) (_Bool)0)))));
                            var_26 ^= ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [(short)1]) && (((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_5 + 2] [i_4] [i_1 - 2] [i_0]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            var_27 = (!(((/* implicit */_Bool) arr_7 [i_10] [6ULL] [i_0] [(unsigned short)5])));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (unsigned short i_12 = 3; i_12 < 9; i_12 += 4) 
                {
                    {
                        arr_41 [i_10] [(unsigned short)5] [i_11] [(unsigned short)8] = var_6;
                        arr_42 [i_0] [i_10] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_11 [(_Bool)0] [i_10] [(_Bool)0] [1])) << (((-755919511) + (755919519))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -337085581)) : (var_1)))));
        }
        for (unsigned char i_13 = 3; i_13 < 6; i_13 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_29 = arr_35 [i_0] [i_0] [i_0];
                            var_30 = ((/* implicit */_Bool) 9223372036854775807LL);
                            arr_57 [(_Bool)1] [i_15] [i_14] [i_14] [i_14] [(_Bool)1] [(_Bool)1] = ((((12397851946907164131ULL) <= (((/* implicit */unsigned long long int) arr_48 [i_14] [i_15] [i_14])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_13] [5ULL] [i_0] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) arr_48 [i_14] [i_13 + 4] [i_14])));
                        }
                    } 
                } 
            } 
            var_31 = ((_Bool) var_1);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13644224363024849775ULL)) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) -231933211))));
        }
        arr_58 [i_0] = ((/* implicit */_Bool) 0ULL);
    }
    for (short i_17 = 2; i_17 < 16; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 1; i_18 < 17; i_18 += 4) 
        {
            for (unsigned short i_19 = 2; i_19 < 18; i_19 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 2; i_20 < 19; i_20 += 2) 
                    {
                        var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_63 [i_18 + 1] [i_19 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_18 + 1] [i_19 + 2] [i_20 - 2] [i_19 - 1])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_66 [i_20 + 1] [i_20 - 2] [i_19 - 2] [i_20]), (arr_66 [i_20 + 1] [i_20 + 1] [i_19 - 2] [(short)10]))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(((var_0) - ((+(((/* implicit */int) arr_67 [(unsigned short)2] [10] [10] [(unsigned short)2])))))))))));
                    }
                    arr_68 [i_18] [i_18 - 1] [i_18] = ((((6748647212471925139ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1075537187588575916ULL)) ? (((/* implicit */int) (unsigned short)24802)) : (((/* implicit */int) var_3))))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((var_7), (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)37398))))) ? (0ULL) : (((/* implicit */unsigned long long int) -157599079)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_21 = 4; i_21 < 19; i_21 += 3) 
        {
            for (int i_22 = 1; i_22 < 18; i_22 += 3) 
            {
                for (unsigned char i_23 = 1; i_23 < 19; i_23 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_24 = 3; i_24 < 19; i_24 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned int) ((((arr_75 [i_21 - 2] [i_22] [i_21 - 2]) <= (min((9628550944239774694ULL), (((/* implicit */unsigned long long int) var_4)))))) ? (((((/* implicit */_Bool) ((11698096861237626476ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (short)-8025)) ? (8818193129469776899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_23 + 1] [i_22 + 1]))))))) : (((/* implicit */unsigned long long int) ((int) arr_74 [i_17 - 1] [i_21 - 4] [i_24 - 2])))));
                            arr_81 [(short)1] [i_24 - 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_61 [i_22 + 2] [i_24])) ? (arr_61 [i_24 - 3] [i_24 + 1]) : (arr_61 [i_23 - 1] [i_23 - 1])))));
                        }
                        for (int i_25 = 0; i_25 < 20; i_25 += 4) 
                        {
                            var_37 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_66 [11LL] [i_22] [i_23 + 1] [i_23 - 1])) ? (((/* implicit */int) arr_73 [i_22] [i_22 - 1] [i_23] [i_23 + 1])) : (((/* implicit */int) arr_73 [i_17 - 1] [i_22] [(unsigned char)3] [i_23 + 1]))))));
                            var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        var_39 = ((/* implicit */unsigned short) ((((arr_75 [i_23 + 1] [i_21 + 1] [i_17]) & (arr_75 [i_23 - 1] [11ULL] [(unsigned short)10]))) << (((((((/* implicit */_Bool) arr_75 [i_23 + 1] [i_17] [i_22 - 1])) ? (arr_75 [i_23 - 1] [i_21] [(_Bool)1]) : (arr_75 [i_23 + 1] [i_23 + 1] [i_23 - 1]))) - (15608720695993798575ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 0; i_26 < 20; i_26 += 3) 
                        {
                            var_40 = ((/* implicit */short) min((((((/* implicit */_Bool) 3522553400111485229LL)) ? (13644224363024849775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) arr_67 [i_17] [i_17 - 1] [i_17 - 1] [i_17]))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((short) (((_Bool)1) ? (11698096861237626502ULL) : (((/* implicit */unsigned long long int) arr_59 [(unsigned short)1]))))))));
                            var_42 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-1317)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23497))) : (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1316))) : (arr_79 [i_26]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_43 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) * (17557826306048LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_86 [i_17 + 4] [13LL] [i_17 - 1] [i_22] [i_26] [i_17 - 1])) / (((/* implicit */int) arr_86 [i_17 + 4] [(_Bool)1] [(unsigned short)8] [i_17] [i_26] [i_21]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_86 [i_17 + 4] [(short)7] [i_17] [7ULL] [i_26] [i_22 + 1]))) + (17557826306048LL))));
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_21] [(short)4] [i_26])) ? (((/* implicit */int) (unsigned short)37415)) : (((/* implicit */int) arr_64 [i_21] [i_21 - 4] [i_26]))))) ? (((/* implicit */int) min((var_9), (arr_64 [i_21 - 3] [i_21] [i_26])))) : (((/* implicit */int) min((arr_73 [i_21] [i_21 + 1] [i_21 - 4] [i_21 - 4]), (arr_73 [(unsigned short)4] [i_21] [i_21 - 3] [i_21 - 2]))))));
                        }
                    }
                } 
            } 
        } 
        arr_88 [18ULL] = ((2147483647) != (-337085596));
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) var_6))));
        var_46 = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)0)));
    }
    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) var_3))));
}
