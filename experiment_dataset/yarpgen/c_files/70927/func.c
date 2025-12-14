/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70927
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
    var_19 = ((/* implicit */int) (unsigned short)1);
    var_20 = (-(min((((((/* implicit */_Bool) 15450409737748216262ULL)) ? (((/* implicit */unsigned long long int) 2058437647)) : (var_12))), (((/* implicit */unsigned long long int) ((int) var_11))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (short)-1337);
            var_22 = ((/* implicit */unsigned short) var_4);
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) min((((int) var_2)), (((/* implicit */int) ((arr_4 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
            var_23 = var_3;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_14 [i_0] [i_0] [i_3] [i_4 - 1] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) var_16)), (var_14)))));
                    arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)27056))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_4 + 1]))) | (arr_10 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) max((var_13), (((/* implicit */int) (unsigned short)24862)))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [(signed char)10] [(signed char)10])) ? (var_17) : (var_17))) > (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)65533)))))))) <= (((((/* implicit */_Bool) arr_1 [(signed char)6])) ? ((~(2828623503323144611ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_8)) : (var_1))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_25 *= ((((/* implicit */_Bool) arr_16 [i_5])) ? ((~(arr_7 [(short)2] [i_5] [(short)2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
        arr_18 [i_5] = (+(((/* implicit */int) (short)-1337)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_26 = ((((/* implicit */int) arr_13 [i_7] [i_7])) * (((/* implicit */int) arr_13 [i_7] [i_7])));
                    arr_24 [i_5] [i_6] [i_5] = ((/* implicit */long long int) var_18);
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((6839593893534924388LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))));
                        var_28 = ((/* implicit */_Bool) -7006803181484552211LL);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1513282833858834917LL))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_30 = ((((/* implicit */_Bool) arr_7 [i_7] [i_5] [i_7])) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) var_17)))) : (arr_20 [i_7]));
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) var_18);
                        var_32 = (+(arr_3 [i_7]));
                        arr_31 [i_5] [(signed char)6] [i_7] [i_5] = var_0;
                    }
                    for (int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_6] [i_6] = ((/* implicit */signed char) ((1324593309) | (((/* implicit */int) arr_6 [i_5] [i_7]))));
                        var_33 = ((/* implicit */signed char) (+(arr_17 [i_5] [i_7])));
                        var_34 -= ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_0))));
                    }
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        arr_40 [i_5] [i_5] [i_6] [i_7] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)116)) || (((/* implicit */_Bool) (unsigned short)65533))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_7] [i_7])) | (((/* implicit */int) arr_5 [i_7]))));
                    }
                }
            } 
        } 
        arr_41 [i_5] [i_5] |= ((/* implicit */signed char) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                {
                    arr_49 [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_21 [(unsigned short)16] [i_13] [i_13]), (((/* implicit */long long int) arr_48 [i_12] [i_12] [i_13] [i_14]))))) ? (((/* implicit */int) arr_38 [i_12] [i_12] [10] [i_12])) : (((/* implicit */int) (short)-19566)))) * (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_0)))))));
                    var_36 = arr_32 [i_14];
                    arr_50 [i_13] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((+(var_1)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63504))))) ? (((((/* implicit */_Bool) -6839593893534924380LL)) ? (arr_4 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (unsigned short i_17 = 1; i_17 < 17; i_17 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
                        {
                            arr_63 [i_12] [i_15] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (_Bool)1)))), (max(((+(((/* implicit */int) (unsigned short)65533)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12]))) : (1080863910568919040ULL))))))));
                        }
                        var_38 -= ((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15]);
                        var_39 = ((/* implicit */signed char) 13926843023879788511ULL);
                        var_40 *= ((/* implicit */signed char) ((unsigned long long int) var_2));
                        var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_12] [i_16] [i_16] [i_17] [i_16])))) + (var_11)))));
                    }
                } 
            } 
        } 
        arr_64 [i_12] = ((/* implicit */unsigned int) arr_34 [i_12] [i_12] [i_12] [i_12]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_42 -= ((/* implicit */long long int) var_2);
        arr_68 [i_19] = ((/* implicit */int) var_3);
        var_43 = ((/* implicit */signed char) (-(((/* implicit */int) arr_54 [6]))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        arr_72 [i_20] [i_20] = ((/* implicit */int) (((+(arr_65 [i_20]))) + (min((arr_65 [i_20]), (((/* implicit */long long int) var_16))))));
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) != (arr_1 [i_20])));
    }
    /* LoopSeq 2 */
    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
    {
        arr_75 [i_21] = (~((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))))));
        var_45 |= (-(((((/* implicit */_Bool) max((var_2), (arr_43 [(unsigned char)16])))) ? (((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) : ((~(((/* implicit */int) var_9)))))));
        arr_76 [i_21] = ((/* implicit */signed char) min(((~((-(var_17))))), (((/* implicit */int) ((var_1) >= (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (var_18)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
        {
            var_46 = ((/* implicit */int) var_11);
            arr_80 [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_1);
            arr_81 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_58 [i_21] [(signed char)0] [i_21] [i_22] [14])) == (arr_46 [i_21] [i_22])));
            var_47 = ((/* implicit */unsigned short) var_15);
        }
        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
        {
            arr_86 [i_21] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_77 [(unsigned short)4] [i_21]))))) <= (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_52 [i_23])) ? (5764351926681094339LL) : (((/* implicit */long long int) var_18))))))));
            arr_87 [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6839593893534924393LL)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)-18089))));
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13; i_24 += 4) 
            {
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    {
                        arr_92 [i_25] [i_24] [i_23] [i_21] = ((/* implicit */long long int) ((((_Bool) arr_6 [i_24] [i_24])) ? (((((/* implicit */int) var_16)) / (var_18))) : (((/* implicit */int) min((arr_42 [i_23]), (((/* implicit */unsigned short) var_6)))))));
                        arr_93 [i_24] = ((/* implicit */unsigned short) (~(min((6839593893534924388LL), (((/* implicit */long long int) arr_5 [i_23]))))));
                    }
                } 
            } 
            arr_94 [i_21] = ((/* implicit */int) (((+(arr_58 [i_23] [i_23] [i_23] [i_23] [i_23]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_23] [i_23] [i_23] [i_21]))) == (-7006803181484552211LL)))))));
        }
        for (short i_26 = 3; i_26 < 12; i_26 += 4) 
        {
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 13; i_27 += 3) 
            {
                for (int i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    for (int i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        {
                            arr_109 [i_29] [i_27] [i_21] = ((/* implicit */int) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) arr_25 [i_26 - 2] [i_26] [i_26 - 2] [i_26] [i_26 - 2] [i_26 - 1])) ? (((/* implicit */long long int) arr_25 [i_26] [i_26] [i_26 + 1] [i_26] [i_26 + 1] [i_26 - 1])) : (arr_10 [i_26 - 1] [i_26 - 3] [i_27])))));
                            arr_110 [i_21] [i_26] [i_27] [i_27] [(signed char)6] = ((/* implicit */long long int) (~((~(var_12)))));
                        }
                    } 
                } 
            } 
            var_48 -= ((/* implicit */signed char) var_18);
        }
        /* vectorizable */
        for (signed char i_30 = 2; i_30 < 9; i_30 += 4) 
        {
            arr_113 [i_21] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_30 + 4] [i_30] [i_30 + 2] [i_30 + 1] [i_30 + 4]))) & (((((/* implicit */_Bool) (short)-1337)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1361))) : (13926843023879788508ULL)))));
            arr_114 [i_21] [i_30] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))));
            arr_115 [i_21] [i_30] [i_30] &= ((/* implicit */short) var_7);
            var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2856381440635260700ULL))));
        }
    }
    for (unsigned char i_31 = 0; i_31 < 12; i_31 += 1) 
    {
        arr_118 [i_31] [i_31] = ((/* implicit */unsigned short) var_2);
        arr_119 [i_31] [i_31] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2019974279640824424LL)) ? ((+(var_14))) : (max((((/* implicit */unsigned long long int) arr_97 [i_31])), (arr_46 [i_31] [i_31]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_120 [i_31] = ((/* implicit */long long int) max((max((((/* implicit */int) arr_0 [i_31])), (1331025123))), (((/* implicit */int) (((-(((/* implicit */int) arr_36 [i_31] [i_31] [i_31] [i_31])))) == (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))))))));
        /* LoopNest 3 */
        for (signed char i_32 = 0; i_32 < 12; i_32 += 3) 
        {
            for (signed char i_33 = 0; i_33 < 12; i_33 += 2) 
            {
                for (unsigned long long int i_34 = 0; i_34 < 12; i_34 += 2) 
                {
                    {
                        arr_129 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] = ((/* implicit */unsigned int) min(((((((-(var_10))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (((/* implicit */int) (_Bool)1))));
                        arr_130 [i_31] [i_32] [i_31] [i_34] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((1630855996664326624ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_31] [i_31] [i_31] [i_31]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19686))) + (504726592815602673ULL)))) ? (((/* implicit */int) (short)511)) : ((+(((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
}
