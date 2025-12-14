/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71329
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_1 - 1] [i_2]);
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    arr_12 [i_3] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0 - 3]));
                    arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)));
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (424527584U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    /* LoopSeq 4 */
                    for (short i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        arr_21 [i_4] = ((/* implicit */unsigned short) (-(arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1])));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0]) | (((/* implicit */int) arr_16 [i_4] [i_0 - 3] [i_0] [i_0] [i_0]))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_7 [i_5] [i_1] [i_2]);
                        arr_24 [i_5] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))));
                        arr_25 [i_4] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (unsigned short)59761)))));
                    }
                    for (int i_6 = 4; i_6 < 23; i_6 += 4) 
                    {
                        arr_28 [i_0] [i_1] = ((/* implicit */short) arr_7 [i_1] [i_2] [i_4]);
                        arr_29 [i_0] [i_1] [i_2] [i_4] [i_6] [i_4] = ((/* implicit */long long int) (((+(((/* implicit */int) var_15)))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)20523)) : (((/* implicit */int) var_11))))));
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_20 [i_2] [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_6]) - (arr_20 [i_0] [i_2] [i_2] [i_2] [i_6 + 1] [i_6] [i_6])));
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(var_9)));
                        arr_32 [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-17048))))));
                    }
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_35 [i_0] [i_1] [i_2] [i_2] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) (~(arr_7 [i_0 - 2] [i_0 - 2] [i_1 - 1])));
                        arr_36 [i_1] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))));
                        arr_37 [i_2] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */short) (-(var_6)));
                        arr_38 [i_7] [i_1] [i_1] [i_2] [i_4] [i_7] [i_7] = ((/* implicit */short) (+(((unsigned long long int) arr_7 [i_0] [i_2] [i_2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_42 [i_2] [i_1] [i_0] [i_4] = ((/* implicit */int) (unsigned char)0);
                        arr_43 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0 - 2]))));
                        arr_44 [i_0] [i_1] [i_2] [i_4] [i_8] = (+(var_5));
                        arr_45 [i_8] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (+(arr_3 [i_1 - 1] [i_0 - 1])));
                        arr_46 [i_8] [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned short)5775)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_50 [i_0] [i_1] [i_2] [i_4] [i_4] [i_9] = ((/* implicit */short) (_Bool)1);
                        arr_51 [i_0] [i_1] [i_2] [i_4] [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) var_1)) % (arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_9])))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_54 [i_0] [i_1] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                        arr_55 [i_0] [i_1] [i_10] [i_4] [i_10] = ((/* implicit */unsigned char) (-(var_7)));
                    }
                }
                arr_56 [i_0] = ((/* implicit */unsigned char) (~(arr_5 [i_0 - 2] [i_1 - 1] [i_1] [i_2])));
                arr_57 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (-(var_6)));
                arr_58 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) - (var_6)))) ? (((/* implicit */int) ((signed char) arr_15 [i_1] [i_1] [i_1] [i_2]))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)255))))));
            }
            arr_59 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (arr_9 [i_0] [i_1] [i_1]) : (((((/* implicit */int) var_15)) << (((var_7) - (6484541094599031644ULL)))))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    {
                        arr_68 [i_12] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3995746221U)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_11] [i_12] [i_13])));
                        arr_69 [i_13] [i_0] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned short) var_9);
                        arr_70 [i_0] [i_11] [i_12] [i_13] = (!(arr_49 [i_11 - 1] [i_13 - 1] [i_13] [i_13] [i_13] [i_13] [i_13]));
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            arr_74 [i_14] [i_12] [i_11] [i_0] = (_Bool)0;
                            arr_75 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (unsigned short i_16 = 1; i_16 < 23; i_16 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 1; i_17 < 23; i_17 += 4) 
                        {
                            arr_86 [i_0] [i_11] [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) arr_6 [i_15] [i_11] [i_15]);
                            arr_87 [i_17] [i_16] [i_15] [i_15] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-29))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            arr_90 [i_0] [i_0] [i_11] [i_15] [i_15] [i_16] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_2))))));
                            arr_91 [i_0] [i_11] [i_15] [i_15] [i_16] [i_18] = ((/* implicit */int) ((unsigned int) ((arr_9 [i_0] [i_15] [i_18]) | (((/* implicit */int) (unsigned short)59760)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            arr_95 [i_11] [i_19] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) var_3)));
                            arr_96 [i_19] [i_16] [i_15] [i_0] = ((/* implicit */short) ((unsigned char) var_11));
                        }
                        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            arr_99 [i_20] [i_20] [i_16] [i_16] [i_15] [i_11] [i_0] = ((/* implicit */int) arr_77 [i_16 - 1]);
                            arr_100 [i_0] [i_11] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) || (((/* implicit */_Bool) (unsigned short)54241))));
                            arr_101 [i_11] [i_20] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (3617183905U) : (((/* implicit */unsigned int) var_0))))) : (var_7)));
                        }
                        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
                        {
                            arr_104 [i_15] [i_11] [i_15] [i_16] [i_21] [i_11] [i_11] = ((/* implicit */signed char) var_5);
                            arr_105 [i_0] [i_11] [i_15] [i_16] [i_16] [i_21] = ((/* implicit */unsigned short) var_4);
                        }
                    }
                } 
            } 
        }
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                arr_114 [i_0] [i_22] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 3])) ? (arr_67 [i_23] [i_22] [i_0 - 3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 24; i_24 += 3) 
                {
                    arr_117 [i_0] [i_0] [i_24] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)7893))));
                    arr_118 [i_0] [i_0] [i_23] [i_0] = ((/* implicit */_Bool) (-(var_7)));
                }
                arr_119 [i_0] [i_22] [i_0] [i_23] = ((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))));
            }
            arr_120 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(2176614363U)));
            arr_121 [i_0] [i_0] [i_0] = ((((((/* implicit */int) var_15)) >> (((var_3) - (2248766226U))))) << (((((unsigned long long int) var_5)) - (163694762ULL))));
            arr_122 [i_0] [i_22] = ((/* implicit */_Bool) 299221074U);
        }
        /* LoopNest 2 */
        for (unsigned int i_25 = 1; i_25 < 21; i_25 += 1) 
        {
            for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 1; i_27 < 22; i_27 += 3) 
                    {
                        arr_132 [i_27] [i_26] [i_25] [i_0] = ((/* implicit */unsigned char) (+(var_6)));
                        arr_133 [i_0] [i_25] [i_26] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) var_4);
                    }
                    arr_134 [i_0] = ((/* implicit */unsigned char) ((long long int) 2245084092646802297ULL));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)65535))))), (var_5))))));
}
