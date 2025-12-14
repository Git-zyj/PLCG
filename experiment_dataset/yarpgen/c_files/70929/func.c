/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70929
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
    var_14 *= ((/* implicit */short) ((int) (~(var_3))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((var_1) == ((+((-(((/* implicit */int) (short)7619)))))));
        var_15 = ((/* implicit */long long int) (-(((int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (((~(arr_2 [i_1]))) | (((arr_2 [i_1]) >> (((((/* implicit */int) (short)7629)) - (7614)))))));
        var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) arr_0 [i_1]))));
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)7631))))))));
        var_18 = ((/* implicit */int) arr_7 [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)26684))))) || (((/* implicit */_Bool) arr_2 [i_4]))));
            var_20 = ((/* implicit */unsigned char) (~(arr_7 [i_3])));
            var_21 = ((/* implicit */unsigned char) ((var_1) / (((/* implicit */int) arr_14 [i_3] [i_3]))));
            var_22 = ((/* implicit */long long int) (!(arr_1 [i_3] [i_4])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        var_24 += ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-7599))))), ((-((-(1306454607)))))));
                        arr_23 [i_3] [i_3] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7625))) == ((+(780733469U)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) (((-(max((var_0), (((/* implicit */long long int) var_13)))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
                        var_26 = ((/* implicit */long long int) ((unsigned int) min((arr_7 [i_8]), (arr_7 [i_8]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26678)) ? (((long long int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (var_12) : (((/* implicit */int) arr_14 [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3]))))))));
        }
        /* LoopSeq 4 */
        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_11)));
                        arr_34 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((int) (~(arr_33 [i_3] [i_10] [i_11] [i_12]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_27 [(short)5] [i_10] [i_11] [i_12] [i_10] [i_13]))))), ((-(arr_29 [i_3] [i_3] [5U])))));
                            var_30 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_29 [i_3] [i_10] [i_12]))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_3)), (arr_27 [i_3] [i_10] [i_11] [i_3] [i_12] [i_13]))), (((/* implicit */unsigned int) ((int) var_13)))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) ((_Bool) arr_31 [i_13] [i_13] [i_11] [i_12])))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_16 [0U] [0U] [i_11]) : (((/* implicit */unsigned int) var_1)))), (((unsigned int) arr_0 [i_3])))) >> ((((+(arr_16 [i_3] [i_10] [i_11]))) - (2914666554U))))))));
                            arr_39 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((long long int) (-(((((/* implicit */_Bool) arr_11 [i_10] [i_12])) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) (!(arr_18 [i_3] [i_10] [i_11] [i_12])));
                            var_34 = ((/* implicit */long long int) ((unsigned int) arr_27 [i_3] [i_10] [i_10] [i_12] [(_Bool)1] [i_10]));
                            var_35 = ((/* implicit */unsigned long long int) ((2LL) / ((-9223372036854775807LL - 1LL))));
                            var_36 += ((/* implicit */unsigned long long int) arr_5 [9]);
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3]))));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (~(arr_7 [i_10]))))));
                            arr_46 [i_3] [i_10] [i_12] [i_12] [i_15] = ((_Bool) ((((/* implicit */_Bool) arr_25 [i_12] [i_11] [i_10] [i_3])) ? (arr_25 [i_15] [i_15] [(unsigned char)7] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10])))));
                            arr_47 [i_15] [i_15] [i_15] [i_15] [i_11] [i_12] [i_15] = ((/* implicit */unsigned int) ((arr_18 [i_3] [i_3] [i_12] [i_10]) ? (((/* implicit */int) arr_18 [i_3] [i_12] [i_11] [i_3])) : (1306454607)));
                        }
                        var_39 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 9223372036854775807LL)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_44 [i_3])) : (arr_36 [i_3] [i_3] [(short)7] [4] [i_3]))))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_41 [i_3] [i_10] [(_Bool)1] [i_12] [i_10])))))));
                    }
                } 
            } 
            var_40 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_10] [i_10])))))));
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) (short)32767);
                var_42 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_29 [i_3] [i_16 + 1] [i_3])), (((((/* implicit */unsigned long long int) -1197322254512423537LL)) * (19ULL)))));
                var_43 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)26662))))) && (((/* implicit */_Bool) arr_42 [i_16 + 1])));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_44 = ((/* implicit */short) ((((/* implicit */long long int) arr_27 [i_18] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_18])) ^ (((arr_24 [i_3] [i_16] [i_18] [i_16 + 1]) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_3])) < (arr_54 [i_18] [i_18] [i_18] [i_18])))))))));
                arr_55 [8U] [i_16 + 1] = ((/* implicit */unsigned long long int) arr_49 [(unsigned char)8]);
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_59 [i_19] [i_19] = ((/* implicit */_Bool) arr_48 [i_19]);
                var_45 = ((/* implicit */unsigned char) arr_21 [i_19] [i_16 + 1] [i_19]);
            }
            for (unsigned long long int i_20 = 2; i_20 < 8; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)26678))))))) - (((unsigned long long int) (~(-6942663414503625614LL))))));
                            arr_67 [i_3] [i_22] [i_20 + 2] [i_21] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-26685)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_16 + 1] [i_20 + 1]))));
                            var_49 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_27 [i_24] [i_24] [i_24] [i_24] [i_24] [i_23]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_20] [i_23] [i_24])))))))) | ((-(9223372036854775805LL))));
                            arr_73 [i_23] = max((((/* implicit */unsigned long long int) var_6)), ((~((+(arr_13 [i_23]))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
            {
                var_50 = ((/* implicit */unsigned short) arr_17 [i_25] [i_16 + 1] [i_3]);
                var_51 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_7)) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 18ULL)))))));
            }
            /* LoopSeq 1 */
            for (long long int i_26 = 3; i_26 < 9; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
                {
                    for (short i_28 = 0; i_28 < 10; i_28 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_16 + 1]))));
                            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_1))), ((~(-9223372036854775799LL)))))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */long long int) max((var_54), ((((+(min((((/* implicit */long long int) (unsigned char)106)), (arr_77 [4U] [i_16] [i_26] [i_26 - 1]))))) - (((/* implicit */long long int) (~((~(((/* implicit */int) arr_50 [i_3] [i_3] [i_3])))))))))));
                var_55 = arr_66 [i_3] [i_3] [i_3] [i_16 + 1] [i_3];
            }
            arr_85 [6] [i_3] [i_16 + 1] = ((/* implicit */unsigned int) arr_75 [i_3] [i_16] [i_16 + 1] [i_16 + 1]);
        }
        for (long long int i_29 = 0; i_29 < 10; i_29 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_30 = 1; i_30 < 7; i_30 += 2) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_56 = ((/* implicit */unsigned long long int) min((((arr_18 [i_3] [i_29] [i_30] [i_31]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_3] [i_3] [i_3] [3LL] [i_3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) ^ (3195691481U))))), (((/* implicit */unsigned int) var_3))));
                        var_57 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_90 [(unsigned char)5] [i_29] [i_30 + 3] [i_3]))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_3] [i_31] [i_31] [i_31] [i_3]))) - (arr_31 [i_31] [i_3] [i_3] [i_3]))) - (((/* implicit */unsigned int) (+(arr_64 [(unsigned char)3] [i_29] [i_30]))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (unsigned short i_33 = 2; i_33 < 8; i_33 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            var_58 = ((/* implicit */long long int) (!(max((arr_88 [i_33 + 1] [i_33 - 2] [i_33] [i_33]), (arr_80 [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33])))));
                            var_59 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)243)), (((((/* implicit */_Bool) arr_92 [i_3] [i_33 - 1] [i_29] [i_3])) ? (((((/* implicit */_Bool) arr_37 [i_3] [i_29] [i_29] [i_33] [i_34] [i_29])) ? (arr_25 [i_3] [i_29] [i_29] [i_34]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_3]))))) : (((((/* implicit */long long int) arr_33 [i_3] [i_3] [i_3] [i_3])) % (-6942663414503625614LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_35 = 2; i_35 < 7; i_35 += 1) 
                        {
                            var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_35 + 1])) || (((/* implicit */_Bool) ((unsigned long long int) arr_65 [i_3] [i_29])))));
                            var_61 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))));
                        }
                        var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) max((min((((/* implicit */int) (unsigned char)198)), ((+(arr_37 [i_33] [i_3] [i_29] [i_3] [i_3] [i_3]))))), (((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_36 = 0; i_36 < 10; i_36 += 1) 
                        {
                            arr_108 [i_29] [i_36] [i_29] [0ULL] [i_32] [i_29] [i_29] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_102 [i_33 + 2] [i_29] [i_33 + 2] [i_29] [i_33 - 2])) - (arr_37 [i_3] [i_29] [i_29] [4] [(short)9] [i_36]))));
                            arr_109 [i_3] [i_3] [i_3] [i_29] [i_3] = ((/* implicit */int) ((_Bool) arr_37 [i_33 + 2] [i_33 + 2] [i_36] [i_33 + 2] [i_36] [i_33 + 2]));
                        }
                    }
                } 
            } 
        }
        for (int i_37 = 0; i_37 < 10; i_37 += 3) 
        {
            var_63 = ((/* implicit */unsigned char) (~((~(8531593211591557773LL)))));
            var_64 |= ((/* implicit */int) ((_Bool) min((arr_58 [i_3]), (((/* implicit */unsigned long long int) (short)-26693)))));
            /* LoopNest 3 */
            for (unsigned char i_38 = 0; i_38 < 10; i_38 += 2) 
            {
                for (unsigned long long int i_39 = 2; i_39 < 9; i_39 += 3) 
                {
                    for (unsigned char i_40 = 1; i_40 < 7; i_40 += 3) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned long long int) arr_91 [i_3] [i_37] [i_3] [i_39] [i_37]);
                            var_66 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-9223372036854775806LL) + (9223372036854775807LL))) << (((4155842209770703517ULL) - (4155842209770703517ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 19ULL)))) : (arr_27 [6] [i_39 - 1] [i_40 + 1] [i_39] [i_40 + 1] [i_37]))))));
                            arr_121 [i_3] [i_37] [i_38] [i_39] [9LL] = ((/* implicit */long long int) arr_99 [i_37] [i_39] [i_37] [i_37] [i_3]);
                        }
                    } 
                } 
            } 
        }
    }
    var_67 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (!(var_6)))), (min((((/* implicit */long long int) var_6)), (var_5))))), (((((/* implicit */_Bool) (-(var_9)))) ? ((~(9223372036854775806LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (3286169352U))))))));
}
