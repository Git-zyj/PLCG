/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8987
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
    var_18 = ((/* implicit */unsigned int) var_8);
    var_19 -= ((var_1) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))) && ((!(((/* implicit */_Bool) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (signed char)100))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) var_6);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */short) arr_2 [i_4 + 1] [i_0]);
                            arr_15 [i_0] [i_0] [7LL] [(short)12] [i_0] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_3] [i_3 + 2]))));
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */int) (unsigned short)1016)))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [i_2] [i_3] [i_4]))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_1 + 1] [i_3 - 1] [i_3]));
                            arr_18 [i_0] [i_1] [1ULL] [i_3] [1ULL] = ((/* implicit */int) (-(var_15)));
                        }
                        var_24 = ((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 2] [i_0] [i_1 + 1]);
                    }
                } 
            } 
            var_25 -= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1])) + (2147483647))) << (((1144047481U) - (1144047481U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1 - 1] [6] [i_0] [i_1] [6])));
            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))));
            var_27 *= ((/* implicit */short) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [(unsigned short)9] [i_1] [i_1])))));
        }
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_7 [(unsigned short)10] [i_0] [i_0] [i_0 - 1])) - (var_3)));
            var_29 -= ((/* implicit */_Bool) 23ULL);
        }
        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) 267386880)) >= (373927444169758600LL)));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-(((int) (_Bool)1)))))));
            /* LoopSeq 3 */
            for (signed char i_8 = 4; i_8 < 13; i_8 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((arr_1 [i_0]) & (((/* implicit */int) (signed char)100))))) : (arr_0 [i_8]))))));
                var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)1016)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)-1)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8] [i_8]))) < (arr_24 [i_0] [i_7] [(signed char)2]))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((arr_4 [i_10] [i_8 - 3] [6]) - (arr_30 [i_0 - 1] [(unsigned char)12] [i_8] [i_8] [i_8] [i_8 - 4] [i_10 - 1])))));
                            arr_32 [i_8] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_7] [i_8] [i_9] [i_10]);
                            arr_33 [i_0] [i_0] [i_0] [i_8] [i_0] [i_10] [i_10] = ((/* implicit */short) (~(arr_4 [i_10 - 3] [i_0 + 1] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_39 [i_0] [i_7] [i_8] [i_11] [i_7] = ((/* implicit */int) ((signed char) arr_23 [i_0]));
                            arr_40 [i_0] [i_0] [i_0] [i_11] [i_11] [i_0] = ((/* implicit */short) var_11);
                            arr_41 [i_0 - 1] [i_7] [i_8] [i_11] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0]))) & (var_8))) & (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) max((var_35), ((+(arr_28 [i_8 + 1] [i_7] [i_0 - 1] [i_13])))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-124)))))));
                            arr_48 [i_0] [11ULL] [i_8] [i_8] [i_0] = (~((-2147483647 - 1)));
                            var_37 = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
            }
            for (signed char i_15 = 4; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_38 *= ((/* implicit */short) ((var_1) > ((~(2147483647)))));
                var_39 = ((/* implicit */short) (signed char)-1);
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1258724564)) ? (((/* implicit */long long int) var_6)) : (arr_30 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_7] [i_0 - 2])))) ? (((/* implicit */int) ((-8) <= (7498813)))) : (arr_25 [i_15 - 2] [(_Bool)1] [9LL] [i_0 - 2])));
            }
            for (short i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_17 = 1; i_17 < 13; i_17 += 3) 
                {
                    arr_56 [i_16] [i_16] [i_0] [11] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_17] [i_17] [i_0] [i_7] [i_0]))) + (67108848U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_17 - 1] [i_0])))));
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (~(((1299933444) / (-2147483647))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_42 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)12))));
                        var_43 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_16])) ? (((/* implicit */int) arr_36 [i_16])) : (((/* implicit */int) arr_36 [i_16]))));
                    }
                    for (long long int i_19 = 3; i_19 < 11; i_19 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) -3865100946694223041LL)) | (11248942824367811762ULL)))));
                        var_45 = ((/* implicit */_Bool) arr_23 [i_0]);
                        var_46 -= ((/* implicit */signed char) (-(((/* implicit */int) ((var_12) < (((/* implicit */long long int) arr_57 [i_0] [i_7] [i_7] [i_7] [i_19 - 2])))))));
                        var_47 = ((/* implicit */int) max((var_47), ((-(((/* implicit */int) ((arr_30 [i_0] [i_7] [i_16] [i_16] [i_17] [i_17] [i_19]) < (((/* implicit */long long int) 48889074U)))))))));
                        var_48 = ((((/* implicit */int) arr_8 [i_19 - 1] [i_17 - 1] [i_0])) * (((/* implicit */int) arr_8 [i_19 + 3] [i_17 - 1] [i_0])));
                    }
                    for (long long int i_20 = 3; i_20 < 11; i_20 += 2) /* same iter space */
                    {
                        arr_65 [i_20 - 2] [i_17 - 1] [i_0] [i_7] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_30 [i_0] [i_7] [i_0] [i_16] [i_17 + 1] [i_20 - 1] [i_20 - 3]));
                        arr_66 [i_20] [i_7] [i_16] [i_0] [i_20] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_20 - 1] [i_0 - 1] [i_0] [i_17 + 1])) ? (arr_27 [i_20 - 2] [i_0 - 2] [i_0] [i_17 + 1]) : (arr_27 [i_20 - 3] [i_0 - 1] [i_0] [i_17 - 1])));
                    }
                    for (short i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        var_49 += ((/* implicit */unsigned short) arr_57 [i_0] [i_7] [i_16] [i_16] [i_21]);
                        arr_70 [i_0] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18022)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */_Bool) 1230931946382122086LL)) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
                        arr_71 [i_16] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_43 [i_0] [i_7])) ? (2147483647) : (((/* implicit */int) (signed char)-105)))));
                    }
                }
                var_50 = ((/* implicit */short) ((arr_22 [i_0 - 1]) & (((/* implicit */int) arr_17 [i_0] [i_7] [6U] [i_0] [i_0] [i_16]))));
            }
        }
        for (int i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            arr_74 [i_22] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */int) arr_51 [i_0])) : (((/* implicit */int) var_7))))));
            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [3] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [(signed char)9] [(signed char)9] [i_22] [i_0 + 1] [i_0] [i_0 - 2]))) : (arr_54 [i_0] [i_22] [i_0] [i_22]))))));
            arr_75 [i_0] [i_22] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_0] [i_0 + 1] [i_22] [i_0] [i_0]))));
        }
    }
    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
    {
        var_52 = ((/* implicit */short) (~(var_17)));
        arr_79 [i_23] = ((/* implicit */unsigned short) 1073741823);
    }
}
