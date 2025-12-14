/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83225
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */signed char) ((unsigned char) var_6));
            arr_5 [i_0] [i_0] |= var_17;
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
                        arr_12 [(unsigned short)10] [(unsigned short)10] [i_1] [i_3 - 2] = ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) var_6);
                            var_22 = ((/* implicit */unsigned int) var_6);
                            arr_24 [(unsigned char)9] [(unsigned char)9] [(unsigned short)6] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_5 - 1] [i_5] [i_5 - 1]))));
                            var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_4 - 2] [i_4 - 3])) : (((/* implicit */int) arr_16 [i_0] [i_4 - 2] [i_4 - 1]))));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19013)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_21 [i_0] [(short)4] [i_5] [i_6 + 2])))) ? (((((/* implicit */int) arr_17 [i_0] [11U] [i_0] [i_0])) * (((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_25 *= ((/* implicit */short) ((var_6) ? (((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_4])))) : (((/* implicit */int) var_7))));
            arr_25 [i_0] [i_0] [(short)2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_4 - 2] [i_4 + 1]))));
            var_26 -= ((/* implicit */short) var_11);
            var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)96))));
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_36 [4U] [i_8] [i_9] [i_11] [(unsigned short)7] [i_8] = ((/* implicit */signed char) var_6);
                            arr_37 [i_0] [(short)10] [(unsigned short)9] [i_9] [i_10] [i_11] = (~(3922872335U));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_20 [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1])))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((arr_0 [(unsigned short)12] [0U]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)3] [i_0] [i_0] [i_8]))))))));
        }
        for (unsigned short i_12 = 1; i_12 < 12; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned short) (unsigned char)3);
                            arr_49 [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */int) (unsigned short)61665))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */unsigned int) -296621061)) != (2816047323U))))));
                            var_31 = var_18;
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) arr_33 [(unsigned char)0] [8U] [(unsigned char)0] [i_13] [(unsigned char)0] [9U])) + (((((/* implicit */int) arr_29 [i_14] [i_14])) % (var_3))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_12] [(unsigned short)12])) : (((/* implicit */int) (_Bool)0)))))));
                arr_50 [i_13] [i_0] [i_0] = var_11;
            }
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                arr_53 [i_0] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12 - 1] [i_12]))) > (arr_48 [i_12 - 1] [i_12] [i_12] [i_12 + 1] [i_12])));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20695)))))));
                            arr_59 [i_17] [(_Bool)1] [(unsigned char)6] [(unsigned short)8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_12 + 1] [i_12 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_15 [i_12 + 1] [10U] [i_18 - 1])) : (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        {
                            arr_69 [i_0] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) arr_28 [(unsigned short)9] [(unsigned short)9]);
                            var_35 *= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_58 [(unsigned char)8] [i_21] [(unsigned char)2] [i_20] [i_20 - 1] [i_21]))));
                        }
                    } 
                } 
                var_36 -= ((/* implicit */unsigned short) (-(var_0)));
                var_37 |= ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) (short)5140)) : (((/* implicit */int) arr_14 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (short i_23 = 4; i_23 < 12; i_23 += 1) 
                    {
                        {
                            var_38 *= var_2;
                            arr_77 [i_0] [(unsigned char)8] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */short) ((2147483621) - (((/* implicit */int) (short)32767))));
                            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((arr_22 [i_12 - 1] [i_12 + 1] [i_12] [(_Bool)1] [i_12 + 1] [i_0] [(unsigned char)6]) + (1480126215)))));
                        }
                    } 
                } 
            }
            for (short i_24 = 0; i_24 < 13; i_24 += 2) 
            {
                var_40 = (-((-(((/* implicit */int) arr_68 [(short)2] [i_12] [(unsigned char)10] [i_0])))));
                var_41 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_12 + 1] [i_12 - 1]))) & (arr_46 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1])));
                arr_80 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] = ((_Bool) arr_60 [i_12] [i_12 + 1] [i_12] [i_12]);
                var_42 = ((/* implicit */short) var_9);
                var_43 = ((/* implicit */unsigned short) var_8);
            }
        }
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (((-(var_3))) > (((/* implicit */int) var_17)))))));
    }
    var_45 += var_5;
    /* LoopNest 2 */
    for (signed char i_25 = 0; i_25 < 16; i_25 += 1) 
    {
        for (signed char i_26 = 0; i_26 < 16; i_26 += 4) 
        {
            {
                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_82 [i_26])) ? (((/* implicit */int) arr_82 [i_25])) : (((/* implicit */int) arr_81 [i_25] [i_26])))) == (((((/* implicit */int) arr_82 [i_26])) | (2147483647))))))));
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    for (int i_28 = 3; i_28 < 15; i_28 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)10273)));
                            arr_92 [i_25] = ((/* implicit */unsigned short) (_Bool)1);
                            var_48 = (unsigned short)34836;
                            var_49 |= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_90 [i_28 + 1] [i_28 - 1] [i_28 - 2] [(signed char)15] [i_28 + 1])) | (((/* implicit */int) (unsigned short)26136)))), ((-(1364267252)))));
                        }
                    } 
                } 
                arr_93 [(_Bool)1] [i_25] = ((/* implicit */short) var_2);
                arr_94 [i_26] [i_25] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_86 [10U] [10U])) : (((/* implicit */int) (unsigned char)130))))))))) - (min((((/* implicit */unsigned int) 440878030)), (2517437036U)))));
            }
        } 
    } 
}
