/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81087
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [(short)8] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) >= (((((/* implicit */_Bool) arr_0 [i_0] [(signed char)7])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] [(signed char)10] = ((((/* implicit */_Bool) 73904812)) ? ((+(arr_0 [(_Bool)0] [i_0]))) : (((/* implicit */int) arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10)))))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -2106950595)) ? (((/* implicit */int) (unsigned short)4032)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_2 = 1; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_11 [(signed char)12] = ((/* implicit */_Bool) (short)32767);
        arr_12 [(short)10] = (signed char)48;
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_2)))));
        arr_18 [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5228)) : (((/* implicit */int) arr_16 [(short)4]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_9))))));
        arr_19 [i_3 + 1] &= ((/* implicit */_Bool) var_0);
    }
    /* LoopSeq 3 */
    for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
    {
        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & ((~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)5244)) - (5234)))))))));
        arr_24 [i_4] = ((/* implicit */_Bool) (~(((-2106950596) & (((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 3]))))));
        arr_25 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-1073741824) * ((+(((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (_Bool)1)) : (-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1602278403)))))));
        arr_26 [i_4] [11] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 6; i_5 += 4) 
    {
        arr_30 [i_5] = ((/* implicit */_Bool) var_11);
        arr_31 [i_5] = arr_5 [i_5 + 3] [i_5 - 3];
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_34 [i_6] = ((/* implicit */signed char) arr_10 [i_6] [(unsigned short)18]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            arr_38 [(unsigned short)20] = (-(var_12));
            arr_39 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)0))));
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                arr_42 [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_46 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 1061332818)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_33 [(signed char)18] [i_7])))) : (((/* implicit */int) (_Bool)0))));
                    arr_47 [(short)4] [i_7] [i_8 + 1] [0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49823)) + (((/* implicit */int) (unsigned short)36157))));
                }
                arr_48 [6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)65535))));
            }
            for (signed char i_10 = 3; i_10 < 20; i_10 += 3) 
            {
                arr_53 [i_10] [i_10] [i_10 - 3] [i_10 - 3] = (short)-32764;
                arr_54 [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3720)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_58 [i_7] [(short)4] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || ((_Bool)1)));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_64 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)13827)) : (((/* implicit */int) (_Bool)1))));
                        arr_65 [12] [i_7] [(_Bool)1] [(unsigned short)2] [(unsigned short)6] = arr_41 [i_6];
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_70 [i_6] [(unsigned short)7] [(signed char)8] [5] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1984)) && ((_Bool)1)));
                        arr_71 [(signed char)18] [(signed char)18] [i_6] [(signed char)18] [i_14] [(short)5] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                        arr_72 [(unsigned short)18] [i_7] [(_Bool)1] [i_12] [i_14] = ((/* implicit */unsigned short) ((arr_61 [i_14] [(signed char)14] [(short)20] [(short)20]) && (arr_61 [(_Bool)1] [(unsigned short)16] [(unsigned short)16] [i_14])));
                        arr_73 [(unsigned short)9] [i_14] [(unsigned short)9] [i_12] [(unsigned short)9] [i_14] = ((/* implicit */_Bool) ((int) (_Bool)1));
                    }
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        arr_77 [(unsigned short)18] [i_7] [(signed char)5] [i_12] [(signed char)3] [(unsigned short)21] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)35107))));
                        arr_78 [i_6] [(_Bool)1] = (!(arr_66 [5] [i_7] [(unsigned short)15] [(unsigned short)9] [i_12] [17]));
                    }
                    arr_79 [i_6] [(unsigned short)15] [(_Bool)1] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) -12198731))));
                    arr_80 [i_12] [i_12] [(_Bool)1] [(unsigned short)2] &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32750))));
                }
                arr_81 [i_6] [12] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_52 [i_6] [i_7] [i_11])) * (((/* implicit */int) arr_52 [i_6] [i_6] [i_11]))));
                arr_82 [i_11] [16] [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26987)) + (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 134216704))))));
                arr_83 [i_6] [(signed char)2] [i_11] = ((/* implicit */int) ((signed char) (_Bool)1));
            }
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_87 [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            arr_88 [i_6] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? ((-(var_5))) : (((/* implicit */int) arr_86 [i_16] [i_6]))));
            arr_89 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_62 [i_6] [(signed char)13] [i_16] [(_Bool)1])) : (((/* implicit */int) var_9))));
        }
        for (int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            arr_92 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned short)36900)) : (((/* implicit */int) (unsigned short)16384))));
            arr_93 [4] [(short)19] [(short)4] = ((/* implicit */signed char) (+(((/* implicit */int) (short)1628))));
            arr_94 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21] = var_0;
        }
    }
}
