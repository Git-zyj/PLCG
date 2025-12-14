/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99028
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
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_15 &= ((/* implicit */int) var_3);
        var_16 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))) ? ((~(((/* implicit */int) (unsigned short)49436)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), ((unsigned short)22710))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28237))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20297)) ? (((/* implicit */int) (short)-12140)) : (2147483647)))) ? (arr_4 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_4 [(signed char)1] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_15 [i_0] [11U] [i_0 - 3] = ((/* implicit */unsigned short) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_3]));
                            var_17 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) | (137940295)))) ? (((/* implicit */unsigned long long int) (~(875067884)))) : (((((/* implicit */_Bool) (short)20303)) ? (var_2) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_3]))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) var_3);
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)45890))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_6] [0U] [(unsigned short)11] [i_0])) : (((/* implicit */int) (signed char)17))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6904))) | (arr_2 [i_1] [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37317)) ? (-2147483622) : (((/* implicit */int) (unsigned short)33154)))))));
                            arr_24 [i_0] = (signed char)-64;
                            arr_25 [i_0] [0] [(unsigned short)4] [i_0] [0] = ((/* implicit */signed char) arr_9 [i_1] [i_2] [i_3]);
                            var_19 = ((/* implicit */unsigned long long int) 1718563713U);
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (-(arr_7 [i_0 + 1] [i_0 - 1])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_29 [i_3] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (signed char)95))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-100)), (var_11))))))) ? (max((((/* implicit */unsigned int) arr_18 [i_7] [i_3] [i_2] [i_2] [i_1] [i_0])), (((unsigned int) 2034826024)))) : (((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_2]))));
                        }
                        arr_30 [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_33 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 8)) ^ (((5514954687642347368ULL) / (((/* implicit */unsigned long long int) var_12))))));
                            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 3]))));
                        }
                        for (short i_9 = 3; i_9 < 13; i_9 += 3) 
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_19 [i_9 - 3] [i_9] [i_9 - 2] [i_9] [i_9 - 3]), (arr_19 [i_9 - 3] [i_9] [i_9 - 2] [i_9] [i_9])))), (((max((4996277654210331295ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20287)))))))));
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                        }
                    }
                } 
            } 
            arr_37 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((short) 995804527))) / (((((/* implicit */_Bool) var_9)) ? (-1239044153) : (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) (unsigned short)21884)) ? (((/* implicit */int) (short)9893)) : (96)))));
            arr_38 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16523)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned short)40822)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [3ULL] [i_0])) && (((/* implicit */_Bool) var_2)))))))));
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7055))));
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 13; i_11 += 2) 
            {
                for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_13 = 1; i_13 < 13; i_13 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_11 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) + (9148437518036062377ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_12] [i_12] [i_12 - 1] [i_12])))));
                            arr_48 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_11 + 1] [i_10] [i_0] [i_10 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_34 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]))));
                            var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_12] [9U] [(short)12] [i_12] [i_12] [i_12 + 1] [i_12]))));
                        }
                        for (short i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) var_8)) ? (212349677111962964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_10] [i_14] [i_12] [i_14]))))) : ((+(13849699057966145250ULL)))));
                            arr_53 [i_11] [i_10] = ((/* implicit */unsigned int) 778122181057402499ULL);
                            arr_54 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_14])) ? ((-(arr_8 [i_12 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_10] [6ULL] [i_12] [i_14 + 1])))));
                            var_27 -= ((/* implicit */unsigned long long int) ((unsigned short) var_6));
                        }
                        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            var_28 += ((/* implicit */unsigned long long int) var_13);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14147))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 1769091236)) : (var_7)))));
                            arr_59 [i_0] [i_0] [i_11] [i_12] [i_0] [i_11] [5U] = ((/* implicit */short) 18116878342801531831ULL);
                            var_30 = ((/* implicit */unsigned long long int) (~(-1239044160)));
                            arr_60 [i_12] [i_10] [i_12] [i_12] [i_11] [i_11 + 1] [i_12] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_6))))));
                        }
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3375299024U)))) ? (3275966876U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_11] [i_10] [i_11 - 1] [i_12] [i_11])) && (((/* implicit */_Bool) var_0))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            arr_64 [i_11] [i_10 + 2] [i_11 + 1] [5] = ((/* implicit */signed char) 1239044133);
                            var_32 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)39)))));
                        }
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
                        {
                            var_33 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_46 [i_0] [i_10] [i_11] [i_12] [(unsigned short)2])) ? (arr_63 [i_0] [i_10] [(signed char)4] [i_12] [i_17] [i_10]) : (((/* implicit */int) (unsigned short)40855))))));
                            arr_68 [i_0 - 2] [1U] [i_11] [i_11] [i_11] [i_12 + 1] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1723279230)) * (((((/* implicit */_Bool) 3375299027U)) ? (7907531303672348276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))));
                            var_34 = ((/* implicit */signed char) ((unsigned short) -202213320));
                            arr_69 [i_0] [i_10 - 1] [i_11] [i_12] = ((/* implicit */signed char) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_35 = ((unsigned short) var_3);
                        }
                        var_36 = (~(arr_7 [i_11 + 1] [i_11 + 1]));
                    }
                } 
            } 
            var_37 ^= ((/* implicit */int) arr_66 [i_0] [i_0 - 2] [i_10 + 1]);
        }
    }
    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
    {
        arr_73 [(short)3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [(unsigned short)6]))) >= (3734826307342284624ULL))) ? (var_8) : (((((/* implicit */_Bool) arr_71 [12ULL])) ? (((/* implicit */int) arr_70 [i_18] [i_18])) : (((/* implicit */int) (signed char)17))))))), (((((/* implicit */_Bool) -1239044149)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_70 [i_18] [i_18]))))) : (2576403570U)))));
        /* LoopNest 3 */
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            for (unsigned short i_20 = 3; i_20 < 23; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        var_38 = ((/* implicit */int) var_4);
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (((unsigned int) var_3)) : (3383897212U)))) ? (((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) arr_71 [i_19])))) : (((/* implicit */int) var_13)))) : (min((((/* implicit */int) arr_70 [i_18] [i_18])), (((((/* implicit */_Bool) (short)27150)) ? (((/* implicit */int) arr_75 [i_18])) : (((/* implicit */int) arr_80 [i_18] [i_18] [i_20] [i_20] [i_21]))))))));
                        var_40 = ((/* implicit */unsigned int) arr_70 [i_20 - 2] [i_20 + 1]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_22 = 3; i_22 < 12; i_22 += 1) 
    {
        var_41 = ((/* implicit */int) var_4);
        var_42 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_0)))));
        var_43 = ((signed char) var_6);
    }
    var_44 *= ((/* implicit */signed char) ((unsigned short) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (short)26097)))));
}
