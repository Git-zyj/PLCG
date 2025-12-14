/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8810
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_9 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((+(max((((/* implicit */long long int) var_15)), (7LL))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1 + 2])) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 3])))))));
                        var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3] [(signed char)19] [i_2])) ? (arr_7 [(_Bool)1] [i_2] [(_Bool)1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [9] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_16)))))) : (arr_8 [i_3] [i_1 - 1] [i_2] [i_3] [i_2] [i_1])));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_19)), (arr_3 [i_0] [i_1 + 2]))))) / (((arr_0 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        var_21 = max((((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_1 + 3] [i_1 + 4] [i_1 + 2])), (var_12)))), (arr_8 [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 3]));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 19LL))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_1 + 1] [i_2] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_5] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_5] [i_2]))) : (var_7)))));
                        var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                        var_24 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1 - 1] [i_1] [i_2] [i_5])) - (var_6)))));
                        arr_20 [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_1 + 4])) * (((var_6) * (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]))))))) && (var_10)));
                    }
                    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_25 -= ((/* implicit */int) (!(((_Bool) arr_11 [i_1] [i_1]))));
                        arr_23 [i_2] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_12)) + (12984)))))) || (((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_6]))))));
                        arr_24 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))) : (var_16))))));
                        arr_25 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_2] [i_2]) || (((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_1 + 2] [i_1 - 1])))))) != (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_1 + 1])) ? (arr_7 [i_1] [i_2] [i_1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) var_19);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(min((((/* implicit */unsigned int) var_1)), (var_0))))))));
                                arr_30 [2] [i_1] [i_2] [13] [i_8] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (3818972474771103892ULL)));
                                var_28 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1])))))) : (((unsigned int) ((var_10) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_7] [i_0] [i_2])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_17 [i_1] [i_1 + 4] [i_0] [i_1])))) : (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (var_4) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_1 + 3])), (arr_16 [i_0] [i_1 + 2]))))))));
                    var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) min((-14LL), (var_9))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 17996806323437568LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (var_3))) : ((((+(((/* implicit */int) var_19)))) & (((/* implicit */int) ((_Bool) var_5)))))));
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((var_10) && (var_10))))))) < (min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((_Bool) var_3)))))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)241)) % (var_3)));
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) var_12);
        arr_34 [i_9] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_32 [i_9] [i_9]))))));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_37 [(unsigned char)9] [i_10] [i_10])))))) >= ((~(var_15))))))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    arr_45 [i_10] [i_11] [i_12] = ((/* implicit */_Bool) arr_35 [i_9]);
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65534)) ^ (-585805697))) | (((/* implicit */int) arr_35 [i_10])))))));
                    var_36 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_9] [i_10] [i_11] [i_12]))))) : (((/* implicit */int) ((((/* implicit */int) arr_43 [i_9] [i_10] [i_11] [i_12])) <= (((/* implicit */int) arr_43 [i_11] [i_11] [i_11] [i_11])))))));
                }
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -5760417970970146454LL)) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_9]))) & (var_6))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (arr_36 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))) + (8528534256252279279LL)))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_9]))) : (var_13))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_42 [i_9] [i_10] [i_11] [i_13] [6] [i_9])), (var_15))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)27), (arr_32 [i_13] [i_11]))))))) : (arr_46 [i_11] [i_10])));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        arr_53 [i_13] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), ((((!(((/* implicit */_Bool) arr_35 [i_15])))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_10])))))))));
                        arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] |= (~(((((/* implicit */_Bool) arr_39 [i_10] [i_10])) ? (arr_39 [i_15] [i_15]) : (((/* implicit */int) arr_48 [i_9] [i_9] [i_11] [17] [i_15] [i_15])))));
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        arr_59 [i_9] [i_9] [i_13] [i_13] |= (((!(((/* implicit */_Bool) arr_38 [i_10] [i_11] [i_13])))) || ((!(((/* implicit */_Bool) ((signed char) var_7))))));
                        var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_42 [i_16] [i_16] [i_11] [i_13] [i_16] [i_13]))));
                    }
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        arr_62 [i_17] = ((/* implicit */int) ((long long int) arr_43 [i_9] [i_10] [i_9] [i_13]));
                        arr_63 [i_17] [i_17] [i_13] [i_13] [i_11] [i_17] [(unsigned char)10] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_51 [i_13] [i_13])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_49 [i_9] [i_9] [i_11] [i_11] [i_17] [i_11] [i_9]))))));
                    }
                    arr_64 [i_9] [i_9] [i_9] = ((/* implicit */short) ((_Bool) var_10));
                }
                var_40 = ((/* implicit */unsigned int) arr_37 [i_9] [i_10] [i_11]);
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    arr_67 [i_11] = ((((/* implicit */_Bool) var_7)) ? (arr_41 [15U] [i_11] [i_10] [i_9]) : (((((/* implicit */_Bool) arr_66 [i_9] [i_11] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_9] [i_10] [i_18]))) : (arr_36 [i_9]))));
                    arr_68 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_51 [i_9] [i_10]) / (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)38751)) : (((/* implicit */int) arr_52 [i_9]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) arr_46 [i_11] [i_18])), (max((((/* implicit */long long int) arr_65 [i_9] [i_10] [i_11] [(short)16])), (arr_58 [i_18] [i_18] [i_9] [i_18] [i_18])))))));
                    arr_69 [i_9] [i_9] = ((/* implicit */unsigned char) arr_40 [i_9] [i_18]);
                    /* LoopSeq 2 */
                    for (short i_19 = 1; i_19 < 20; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) arr_52 [i_18]);
                        var_42 = ((/* implicit */short) (-(min((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_17))))))));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_12))))));
                        arr_74 [i_20] [i_20] [i_11] [i_18] [i_20] [i_9] = ((/* implicit */unsigned char) ((int) var_13));
                        arr_75 [i_9] [i_10] [i_9] [i_18] [i_20] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_70 [i_9] [i_10] [i_11] [i_18] [i_20 - 1])) ? (arr_70 [i_9] [i_10] [i_9] [0LL] [i_9]) : (arr_70 [i_9] [i_10] [i_9] [i_18] [i_10]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) < (min((var_6), (((/* implicit */unsigned long long int) arr_44 [i_9] [i_9] [4] [i_18])))))))));
                    }
                }
                arr_76 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) ((signed char) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [i_11] [i_9] [i_11]))) : ((+(var_7))))));
            }
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) /* same iter space */
            {
                arr_79 [i_10] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_9] [(short)7] [i_21] [i_9])) ? (((max((arr_71 [i_9] [i_10] [i_21] [i_21] [i_21] [i_21] [i_10]), (var_14))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)0)), (var_5)))) : (((unsigned int) arr_32 [i_9] [i_9])))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((arr_47 [i_21] [i_21] [i_10] [i_9]) + (1311900609)))))) + (((((/* implicit */_Bool) arr_31 [i_21] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15)))))));
                arr_80 [i_21] [i_10] [i_21] [i_21] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) : (((((/* implicit */_Bool) -936134800)) ? (((/* implicit */unsigned long long int) var_16)) : (var_6)))))));
            }
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10]))) & (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (min((arr_46 [i_9] [i_9]), (((/* implicit */unsigned int) arr_78 [i_9] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_8))) && (((var_9) <= (arr_41 [i_9] [i_9] [i_9] [i_9])))))))));
        }
    }
}
