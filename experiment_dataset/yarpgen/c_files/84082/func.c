/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84082
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) var_18));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) 7144670221952223035ULL);
            var_20 = ((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)5]))))) << (((/* implicit */int) arr_5 [0U] [i_1] [(unsigned short)7])));
            var_21 = ((/* implicit */unsigned char) var_5);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (short)-17323))) < (var_8)));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_0] [8LL] [6U] |= ((/* implicit */signed char) arr_6 [3U] [(_Bool)1]);
            var_23 ^= ((/* implicit */short) (unsigned char)237);
            var_24 = ((/* implicit */long long int) var_14);
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((arr_7 [i_3]) < (arr_7 [i_0])));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)-17330))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) arr_1 [i_4]);
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) % (((((/* implicit */_Bool) arr_14 [i_6 - 1])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_4] [i_5] [11ULL])))))));
                    var_29 |= ((/* implicit */signed char) (unsigned short)13037);
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */short) (((+(arr_6 [i_0] [i_0]))) < (arr_6 [i_7 - 1] [i_7 - 1])));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) arr_20 [i_8] [i_7] [i_7 - 1] [i_4]);
                        arr_30 [i_0] [i_5] |= ((/* implicit */signed char) ((unsigned int) ((var_8) == (((/* implicit */int) arr_1 [i_0])))));
                    }
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_5] [i_9]))));
                    var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0] [i_0] [i_9]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((/* implicit */int) arr_22 [i_0] [i_4] [i_5] [i_9]))))) : (var_0)));
                    arr_33 [i_9] [i_9] [(unsigned short)10] [(unsigned char)2] [i_9] = ((/* implicit */unsigned char) arr_25 [i_0] [i_4] [6ULL] [i_9] [i_9]);
                    var_33 = var_12;
                    var_34 = ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_24 [i_0] [i_0] [i_4] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))));
                }
                var_35 &= ((/* implicit */unsigned int) ((arr_15 [i_4]) - (arr_15 [i_4])));
            }
        }
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_36 = ((((/* implicit */_Bool) ((var_17) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))))) ? (((/* implicit */int) arr_26 [i_10] [(_Bool)1] [i_10] [i_11] [i_11 - 2] [i_11] [i_11 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_10] [i_0])));
                        arr_40 [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_12] = ((/* implicit */int) -6462469153836997164LL);
                        var_37 -= ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_26 [i_11 + 2] [i_11 + 2] [i_12 + 1] [i_11 + 2] [i_12 + 1] [i_12] [i_12])) : (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (var_9)))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */int) (short)17317)) < (((/* implicit */int) (unsigned short)4096))));
                        arr_50 [6] [(unsigned char)6] [i_13] [i_14] [i_14] [(unsigned short)12] |= ((/* implicit */unsigned short) arr_22 [i_0] [i_13] [12] [(signed char)12]);
                        var_40 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_13] [i_14] [i_15])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                {
                    var_41 = arr_57 [i_16] [i_17] [i_16];
                    var_42 -= ((/* implicit */unsigned int) max((((/* implicit */int) arr_52 [i_17])), (var_8)));
                }
            } 
        } 
        var_43 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61439)) + (((/* implicit */int) (unsigned char)194))));
        var_44 = ((/* implicit */unsigned int) var_8);
        arr_58 [(unsigned short)7] = ((/* implicit */long long int) var_11);
        var_45 |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_52 [i_16])) != (((/* implicit */int) arr_52 [i_16])))) ? ((+(((/* implicit */int) arr_52 [i_16])))) : (((/* implicit */int) arr_52 [i_16]))));
    }
    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
    {
        var_46 = ((/* implicit */_Bool) (~((~(2919905978U)))));
        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-22761), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) arr_57 [i_19] [(_Bool)1] [i_19])) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 3 */
    for (signed char i_20 = 2; i_20 < 16; i_20 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */signed char) arr_57 [i_20] [(unsigned short)14] [i_20]);
        var_49 = arr_53 [(_Bool)1] [i_20 + 2];
    }
    for (signed char i_21 = 2; i_21 < 16; i_21 += 1) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-6572328130747189923LL))), (((/* implicit */long long int) var_13))));
        arr_69 [i_21] [i_21] = arr_57 [i_21] [i_21] [i_21 + 3];
    }
    for (unsigned int i_22 = 2; i_22 < 18; i_22 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            for (unsigned int i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    arr_80 [i_24] = ((/* implicit */unsigned short) arr_71 [i_23]);
                    var_51 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_76 [i_23] [i_23])), ((-(6462469153836997163LL)))));
                }
            } 
        } 
        var_52 = ((/* implicit */int) max((((/* implicit */short) (unsigned char)3)), ((short)-15680)));
        arr_81 [(signed char)3] [i_22] = ((/* implicit */short) arr_72 [15LL]);
        arr_82 [(unsigned char)12] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)4096))));
    }
    var_53 = ((/* implicit */unsigned short) var_0);
    var_54 = ((/* implicit */unsigned int) var_8);
}
