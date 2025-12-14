/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96813
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */int) var_10)))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */int) (unsigned short)65535);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((_Bool) var_9)) ? (max((var_8), (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) (signed char)64)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4834940045383607869LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 4302932423340152014LL)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 - 2] = ((/* implicit */unsigned short) var_0);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((var_1) >> (((arr_5 [i_1 - 1]) + (4038464278618450525LL)))));
        arr_10 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_14 [i_2] [i_1 - 1] [i_1] = ((/* implicit */long long int) (~(var_3)));
            arr_15 [i_1] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)178))));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_19 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 420730237U)) / (var_7)));
            arr_20 [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) -3354267306153493099LL));
            arr_21 [(signed char)17] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned int) (unsigned short)21803));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_24 [11] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) & (648916160U)))) ? (((/* implicit */int) ((unsigned char) -1202431203))) : (((/* implicit */int) arr_0 [i_1 - 2]))));
            arr_25 [i_1 - 2] [i_4] [(unsigned short)13] = ((/* implicit */unsigned long long int) var_9);
            arr_26 [i_1] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [i_1] [i_1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_30 [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)48673))));
            /* LoopSeq 4 */
            for (long long int i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                arr_33 [i_1] [7LL] [i_5] [i_6 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)48673))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) var_10)))) : (var_8)));
                arr_34 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)65530);
            }
            for (unsigned char i_7 = 4; i_7 < 19; i_7 += 1) 
            {
                arr_38 [i_1 + 2] [(_Bool)0] [i_1 + 2] [i_1] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) var_10)));
                arr_39 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 1975111696U)) : (1458036249378933233LL)));
                arr_40 [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-3180878075497660315LL) : (((/* implicit */long long int) var_2)))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    arr_44 [i_8] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)22)) ? (11334099915807893102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    arr_45 [i_1] [i_8] [i_1] [8U] [i_1] = (!(((/* implicit */_Bool) (+(var_8)))));
                }
                for (long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    arr_48 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65528))));
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_52 [i_1 - 2] [i_9 + 3] [i_7 + 1] [i_7 - 3] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65523))));
                        arr_53 [i_1] [i_1] [i_7] [(unsigned short)0] [i_10] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) var_2)) ? (11186021023270865310ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (var_7))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        arr_58 [i_1] [i_1] [i_1] [1LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */unsigned long long int) ((int) arr_36 [i_9] [i_11 - 1]))) : (var_1)));
                        arr_59 [i_7] [(unsigned short)16] [i_7] [i_5] [i_1] = ((/* implicit */unsigned char) ((signed char) var_1));
                        arr_60 [i_1] [i_1] [(_Bool)1] [11LL] [i_1] [11LL] [11LL] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))));
                        arr_61 [i_7] = ((/* implicit */_Bool) (unsigned char)0);
                    }
                    for (unsigned int i_12 = 1; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        arr_64 [i_1 + 3] [i_12] [i_12] [i_7] [i_12] [i_12 + 1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) var_8))))) ? (((var_3) * (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))))));
                        arr_65 [i_1] [i_5] [i_7] [i_12] [11U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)81)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)5))))));
                        arr_66 [i_1] [i_1 + 2] [i_1] [12] = ((/* implicit */signed char) var_8);
                        arr_67 [i_1] [i_12] [i_1] [i_1] = ((/* implicit */long long int) (((+(var_9))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))));
                    }
                    arr_68 [2U] [5ULL] [i_5] [i_1] [5ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
                }
            }
            for (int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                arr_71 [i_1] [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned long long int) 0U);
                arr_72 [i_13] [i_5] [i_13] = ((/* implicit */unsigned int) (+(((var_7) & (var_7)))));
            }
            for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                arr_77 [i_1] [i_5] [i_14] [i_14] = ((long long int) arr_31 [i_5]);
                arr_78 [i_1] [i_14] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                arr_79 [i_1 + 3] [i_5] [i_14] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7491751712818665235LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25178)))));
            }
            arr_80 [i_1] = ((var_2) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65533))))));
            arr_81 [5U] [i_5] = ((/* implicit */unsigned int) var_9);
        }
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 1; i_16 < 18; i_16 += 1) 
            {
                for (unsigned short i_17 = 1; i_17 < 18; i_17 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 3; i_18 < 19; i_18 += 1) 
                        {
                            arr_92 [i_18] [i_17] [i_15] [i_15] [i_15] [i_15] [(signed char)17] = ((/* implicit */unsigned char) var_9);
                            arr_93 [i_1] [i_15] [(signed char)0] [i_16] [(signed char)6] [(signed char)0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (648916171U)))));
                            arr_94 [i_18] [i_18] [i_18] [i_18 - 2] [i_18] [i_15] [i_18] = ((var_4) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 648916160U)))));
                        }
                        for (unsigned short i_19 = 3; i_19 < 18; i_19 += 2) 
                        {
                            arr_97 [i_16] [i_16] [i_15] [i_16] [i_15] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) arr_89 [i_1 + 2] [i_1] [i_15] [i_1 - 1] [i_1 - 2] [i_1]));
                            arr_98 [i_16] [i_17] [i_15] [i_15] [i_15] [(signed char)3] = ((/* implicit */int) ((signed char) (-(var_2))));
                        }
                        arr_99 [i_15] = var_2;
                        /* LoopSeq 2 */
                        for (int i_20 = 1; i_20 < 19; i_20 += 1) 
                        {
                            arr_103 [i_1 + 1] [i_15] [i_15] [i_20] = ((/* implicit */signed char) 66518527U);
                            arr_104 [(unsigned char)16] [i_16] [i_16] [i_15] [i_20] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) var_7)));
                        }
                        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            arr_107 [i_21] [i_16 + 2] [i_21] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)18))));
                            arr_108 [i_1] [i_1] [i_1] [i_15] [i_17 + 2] [i_17] [i_21] = ((/* implicit */unsigned int) var_4);
                            arr_109 [i_1 + 3] [i_21] [i_1] [i_1 + 1] [i_1] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_85 [i_1 - 1] [i_1 + 3])) ^ (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-59))))));
                            arr_110 [i_1 + 3] [i_15] [i_21] [i_21] [(_Bool)1] = ((/* implicit */long long int) (~(63U)));
                        }
                        arr_111 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned short)65513))));
                        arr_112 [i_17] [i_15] [i_16] [i_15] [i_1] = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
            arr_113 [i_15] [19LL] = ((/* implicit */_Bool) (+(var_7)));
        }
    }
    var_11 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (long long int i_22 = 1; i_22 < 6; i_22 += 2) 
    {
        for (unsigned int i_23 = 1; i_23 < 9; i_23 += 4) 
        {
            {
                arr_118 [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_9)))) ? (((((/* implicit */unsigned long long int) var_8)) % (((((/* implicit */_Bool) 15269573212853612644ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))))) : (((/* implicit */unsigned long long int) max((arr_96 [i_23] [i_23] [i_23] [i_23 - 1] [i_23 - 1] [i_22 + 4] [i_22]), (((/* implicit */unsigned int) -1955993462)))))));
                arr_119 [(unsigned char)2] = ((/* implicit */int) (((((((_Bool)0) ? (3398106463U) : (3398106449U))) / (((/* implicit */unsigned int) (+(var_0)))))) >> (((((min((((/* implicit */unsigned long long int) 1099511627775LL)), (var_3))) - (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))))))) - (18256809036732458475ULL)))));
                arr_120 [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_22] [i_22] [i_22] [0LL])) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) var_5))));
                arr_121 [i_22] = ((/* implicit */short) var_4);
            }
        } 
    } 
    var_12 = ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)63))))) : (var_2)));
}
