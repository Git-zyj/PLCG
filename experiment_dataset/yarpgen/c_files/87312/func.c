/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87312
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
    var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_9))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), ((~(((long long int) var_6))))));
    var_15 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_9))))));
    var_16 -= ((/* implicit */signed char) var_11);
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) (short)-32752)))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1 - 1] [i_1 - 1]);
                            var_19 = ((/* implicit */unsigned short) ((((arr_4 [i_0 + 1] [i_0] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) / (((((/* implicit */_Bool) arr_4 [i_0 + 1] [(signed char)1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [(unsigned short)2] [i_0 + 1] [i_1 - 1] [i_0 - 1]))) : (arr_4 [i_0] [i_0] [i_0 + 1])))));
                            var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0] [i_0] [i_1 + 2] [i_2])) && (((/* implicit */_Bool) max((arr_3 [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))))))));
                            var_21 = (((+(min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [(unsigned short)9])))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) ^ (arr_10 [i_1 + 2] [i_1 + 1] [i_1 + 1]))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) 5246469067250892219ULL)) ? (2112866788) : (((/* implicit */int) (signed char)44))))) <= (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) 282466468)), (-4898796274158438591LL)))))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (var_8)));
                            var_24 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_0)) && (((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_9 [i_0] [7LL] [i_0] [i_3] [i_5]))))))));
                            var_25 += ((var_11) >= (((((/* implicit */int) var_3)) - (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_7))))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */short) var_1))))) * (min((((((/* implicit */int) var_1)) / (((/* implicit */int) var_3)))), (((/* implicit */int) arr_14 [i_3])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) var_11);
                            var_28 = (+((-(var_8))));
                            var_29 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0 - 1] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
            var_31 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_14 [i_7])))));
            var_32 = ((/* implicit */unsigned long long int) ((short) var_2));
        }
        for (unsigned char i_8 = 3; i_8 < 7; i_8 += 2) 
        {
            var_33 = ((/* implicit */short) (-(((/* implicit */int) min((arr_11 [i_0] [(signed char)2]), (arr_11 [i_0] [(short)8]))))));
            var_34 = arr_6 [i_0] [i_0] [i_0] [i_0 + 1] [i_8] [i_8];
        }
    }
    for (unsigned char i_9 = 4; i_9 < 20; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) arr_29 [i_11]);
                    var_36 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                }
            } 
        } 
        var_37 *= ((/* implicit */_Bool) ((unsigned char) ((((arr_30 [18]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9 + 3] [i_9 + 1] [i_9 + 3]))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == ((-(var_2))))))));
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)21216)) < (arr_22 [i_12])))) >= (((/* implicit */int) ((((/* implicit */_Bool) 4621433490813171583ULL)) && (((/* implicit */_Bool) arr_29 [i_12]))))))))));
        var_40 = arr_27 [i_12] [i_12 - 1] [i_12 - 1];
        var_41 = ((/* implicit */signed char) ((unsigned short) arr_28 [i_12 - 1]));
        var_42 ^= ((/* implicit */int) ((unsigned long long int) ((long long int) (short)9)));
    }
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            var_43 ^= ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (max((((long long int) arr_36 [(signed char)8] [(signed char)8])), (((/* implicit */long long int) ((arr_35 [i_13] [i_13]) == (((/* implicit */long long int) var_11))))))));
            var_44 = ((/* implicit */signed char) arr_35 [i_13] [i_13]);
            /* LoopSeq 3 */
            for (int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_45 -= ((unsigned short) (unsigned char)65);
                var_46 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_40 [i_15] [i_14] [i_13])), (((((/* implicit */_Bool) (unsigned short)34448)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13] [i_13]))) : (arr_36 [i_13] [i_14])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_15] [i_13] [i_13])) <= (arr_40 [i_13] [i_14] [i_15]))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) + (min((((/* implicit */unsigned long long int) var_4)), (var_8))))));
                var_47 -= ((((/* implicit */_Bool) arr_41 [i_15] [i_13] [i_14] [i_15])) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_15] [i_15])) && (var_1)))))) : (((/* implicit */int) var_1)));
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_5))));
            }
            for (int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_49 = ((/* implicit */int) var_6);
                var_50 += ((/* implicit */long long int) var_0);
                var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_43 [i_16] [i_13])) != (((/* implicit */int) arr_44 [i_13]))))))))));
                var_52 = ((/* implicit */unsigned char) var_0);
                var_53 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_41 [(short)0] [10LL] [i_16] [i_13])) && (((/* implicit */_Bool) arr_41 [(short)20] [i_13] [i_16] [i_16])))))));
            }
            /* vectorizable */
            for (unsigned short i_17 = 3; i_17 < 23; i_17 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_18 = 3; i_18 < 23; i_18 += 2) 
                {
                    arr_51 [i_13] [i_13] [i_18] [i_18 - 1] [i_13] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1553018527U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (13255284350044186344ULL)));
                    var_54 = ((/* implicit */unsigned long long int) ((signed char) var_12));
                    var_55 = ((/* implicit */unsigned long long int) (+(arr_35 [i_17 + 1] [i_18 + 2])));
                }
                for (int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    var_56 = ((/* implicit */short) ((arr_54 [i_19] [12ULL] [i_14] [i_13]) / (arr_54 [i_13] [i_13] [i_13] [i_13])));
                    var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_44 [i_17 - 2])) : (((/* implicit */int) var_3))));
                }
                var_58 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_45 [20] [i_17 + 2] [20]))));
                var_59 |= ((/* implicit */unsigned long long int) ((arr_54 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17]) >= (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        {
                            var_60 = ((unsigned short) arr_50 [i_17 + 2] [i_13] [i_17 - 1]);
                            arr_60 [i_20] |= ((/* implicit */unsigned short) arr_41 [i_21] [i_17 - 1] [i_20] [i_21]);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned char i_22 = 4; i_22 < 24; i_22 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                for (unsigned long long int i_24 = 2; i_24 < 22; i_24 += 2) 
                {
                    for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        {
                            var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) -3769548244631918041LL))) ^ (((/* implicit */int) var_10)))))));
                            var_62 ^= ((/* implicit */int) arr_64 [i_13] [i_13] [i_13]);
                            var_63 -= (~(((/* implicit */int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (unsigned short)32406))))));
                            arr_71 [i_13] [i_22 - 2] [i_13] [(signed char)1] [i_25] = ((/* implicit */unsigned long long int) ((unsigned char) var_6));
                            var_64 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_23])) == (((/* implicit */int) arr_59 [i_24]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_26 = 2; i_26 < 24; i_26 += 2) 
            {
                var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13] [i_22 - 2])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_13)))))))));
                var_66 = ((/* implicit */unsigned short) min((var_66), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_26 + 1] [i_22 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_70 [i_26 + 1] [i_22 - 1]))))));
            }
            for (signed char i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                var_67 = ((unsigned long long int) ((((/* implicit */_Bool) arr_43 [4ULL] [i_27])) && (((/* implicit */_Bool) var_12))));
                var_68 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [i_27] [i_13] [i_22 - 3] [i_27]))));
            }
            for (long long int i_28 = 1; i_28 < 23; i_28 += 3) 
            {
                var_69 ^= ((/* implicit */unsigned short) (+(16884887690560964705ULL)));
                var_70 = ((/* implicit */unsigned short) var_2);
                var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (arr_74 [i_13] [i_28])));
            }
            /* LoopNest 3 */
            for (signed char i_29 = 0; i_29 < 25; i_29 += 1) 
            {
                for (long long int i_30 = 0; i_30 < 25; i_30 += 3) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 25; i_31 += 1) 
                    {
                        {
                            var_72 = ((/* implicit */short) var_8);
                            var_73 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 2])) > (((/* implicit */int) arr_53 [i_22 - 3] [i_22 - 3] [i_22 - 4] [i_22] [i_22 - 4]))));
                        }
                    } 
                } 
            } 
            arr_87 [i_13] [i_13] [i_13] = ((/* implicit */signed char) var_7);
            var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) (~(((/* implicit */int) var_0)))))));
        }
        var_75 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_80 [(signed char)5] [i_13] [i_13] [i_13])) >> (((arr_57 [10] [i_13] [i_13] [i_13]) + (7373505074300233820LL)))))) & (16884887690560964705ULL)))));
    }
}
