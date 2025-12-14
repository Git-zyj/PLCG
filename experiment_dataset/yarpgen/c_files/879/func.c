/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/879
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_2)), ((-(2530056829238595094LL))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_8))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1]);
        var_12 += var_7;
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 5221012738575526662ULL)) ? (((/* implicit */int) arr_1 [i_0 - 1] [3ULL])) : (((/* implicit */int) var_10))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_2] [6] [i_3])) % (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3]))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) / (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)12]))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_5 - 3] [i_5]))));
                        arr_20 [(short)13] [12] [(short)13] [i_6] [i_0] [i_4] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_18 [i_0] [i_4] [i_4] [12U] [(unsigned char)2] [i_6])))));
                        var_17 += ((/* implicit */unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) var_9))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15759)) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) arr_11 [i_0] [i_4] [(_Bool)1] [i_0]))));
                    }
                } 
            } 
            var_19 += ((/* implicit */unsigned int) 13838934264740069848ULL);
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
        {
            var_20 -= (+(((/* implicit */int) (_Bool)1)));
            var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        for (short i_10 = 3; i_10 < 12; i_10 += 1) 
                        {
                            arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_6)))) ? (arr_33 [i_10 - 3] [i_0] [i_7] [i_0] [i_0] [i_7]) : (((((((/* implicit */int) arr_17 [(unsigned char)0] [3] [(unsigned char)0])) + (2147483647))) << (((((/* implicit */int) (unsigned short)7760)) - (7760)))))));
                            var_23 = ((/* implicit */unsigned long long int) arr_26 [2U] [i_10] [(short)3] [i_10 - 3]);
                        }
                    }
                } 
            } 
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_24 -= ((/* implicit */int) ((((((/* implicit */int) arr_13 [(short)8])) < (((/* implicit */int) (unsigned short)0)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (var_4))))));
        var_25 *= (short)-31961;
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) arr_38 [i_12]);
        var_27 += ((/* implicit */unsigned int) min((((max((((/* implicit */int) arr_39 [i_12])), (-469987852))) < (((/* implicit */int) (_Bool)1)))), (((((var_6) + (13225731335134024953ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        /* LoopSeq 2 */
        for (short i_13 = 3; i_13 < 17; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 17; i_14 += 2) 
            {
                var_28 = ((/* implicit */short) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) / (var_6)))))));
                arr_46 [i_12] [(_Bool)1] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)15759))))) < (((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) arr_44 [i_13] [i_13 - 2] [i_12]))))));
                var_29 = ((/* implicit */int) (unsigned short)37640);
            }
            var_30 = ((/* implicit */short) ((((/* implicit */int) ((min((var_4), (((/* implicit */long long int) var_7)))) < (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_12] [i_12])))))) & (((((/* implicit */_Bool) ((unsigned int) arr_42 [i_12] [i_12]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)37536)))) : ((+(((/* implicit */int) (unsigned char)57))))))));
            var_31 = ((((int) arr_43 [i_12] [i_12] [i_12])) <= ((+(((/* implicit */int) (short)9234)))));
            var_32 -= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-574)) % (((/* implicit */int) ((((/* implicit */_Bool) 254041039)) || (((/* implicit */_Bool) var_6))))))) * ((~((+(((/* implicit */int) var_5))))))));
        }
        for (short i_15 = 3; i_15 < 17; i_15 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */short) min((((/* implicit */int) ((signed char) 130023424U))), ((+(arr_40 [i_12] [i_12])))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                arr_51 [i_12] = ((/* implicit */signed char) (((+(((2147352576U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) * (((max((4164943871U), (((/* implicit */unsigned int) (short)19677)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)127)))))))));
                arr_52 [i_12] [i_15] = ((/* implicit */long long int) arr_50 [i_12] [i_12] [i_12] [i_12]);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_56 [i_12] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-5726)), (var_2)));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((0ULL) == (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-68)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (18259912739300122633ULL))))))))))));
            }
        }
        arr_57 [i_12] [i_12] = ((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)12)))), (((((/* implicit */int) arr_45 [i_12] [i_12] [(short)9])) > (-1)))));
    }
    for (short i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_20 = 3; i_20 < 13; i_20 += 4) 
            {
                var_35 *= ((/* implicit */short) (~(((/* implicit */int) arr_41 [i_20 + 1] [(short)12] [i_20 - 1]))));
                arr_67 [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (unsigned short)0);
                var_36 = ((/* implicit */short) arr_33 [i_18] [i_18] [(_Bool)1] [i_18] [i_19] [i_18]);
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) - (13225731335134024953ULL)))) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [(short)8] [i_21])))));
                var_38 -= ((unsigned long long int) (~(arr_25 [i_18] [i_19] [i_18] [i_21])));
                /* LoopSeq 2 */
                for (unsigned char i_22 = 2; i_22 < 12; i_22 += 3) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)23800))));
                    arr_72 [(_Bool)0] [i_18] [i_21] [i_21] = (-(((/* implicit */int) (short)-574)));
                    var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_2)))) != (9055739577990615872ULL)));
                }
                for (unsigned short i_23 = 2; i_23 < 10; i_23 += 1) 
                {
                    var_41 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_26 [i_23] [i_23 - 1] [(unsigned short)11] [i_23 + 2])) : (((/* implicit */int) arr_26 [i_18] [i_23 + 2] [i_23 + 2] [i_23]))));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_23 + 4] [i_23 + 3])) ? (((/* implicit */int) (short)-31484)) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_75 [i_18] = ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_18] [(short)8] [i_18])) ? (((/* implicit */int) arr_9 [i_21] [i_21] [i_19])) : (((/* implicit */int) (short)31960))));
                }
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_43 = ((/* implicit */_Bool) ((int) max((arr_76 [(signed char)12] [i_19] [i_19] [i_19]), (arr_76 [(short)5] [(short)5] [i_24] [i_24]))));
                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_31 [i_24] [i_19] [i_19] [i_18])), (var_1)))) ? (((min((arr_70 [(unsigned short)10] [(unsigned short)6] [i_24] [(unsigned short)6]), (((/* implicit */unsigned long long int) (signed char)-127)))) * (((/* implicit */unsigned long long int) min((arr_3 [i_19]), (((/* implicit */long long int) arr_68 [(short)4] [i_19] [i_19]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (var_6))), (((/* implicit */unsigned long long int) min(((unsigned char)86), (((/* implicit */unsigned char) (_Bool)0))))))) & (13225731335134024953ULL)));
                    var_46 = var_9;
                }
                for (unsigned int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    var_47 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (short)7)))));
                    arr_83 [i_18] = (i_18 % 2 == zero) ? (((/* implicit */unsigned short) ((((unsigned long long int) (~(var_2)))) * (((((0ULL) * (arr_49 [i_26] [i_24] [i_19]))) << (((((/* implicit */int) arr_6 [i_18] [i_24] [(_Bool)1] [i_18])) + (2847)))))))) : (((/* implicit */unsigned short) ((((unsigned long long int) (~(var_2)))) * (((((0ULL) * (arr_49 [i_26] [i_24] [i_19]))) << (((((((/* implicit */int) arr_6 [i_18] [i_24] [(_Bool)1] [i_18])) + (2847))) + (24763))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 0; i_28 < 14; i_28 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_18])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                        var_49 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_61 [12ULL] [(unsigned short)10])) ? (((/* implicit */int) (unsigned short)32615)) : (((/* implicit */int) var_5)))) % (arr_47 [i_18] [i_19])));
                    }
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */int) arr_82 [i_18] [i_19])) >> (((arr_25 [i_18] [i_19] [i_24] [(short)8]) - (9833567069084192117ULL))))))));
                    var_51 = ((/* implicit */short) (unsigned char)90);
                }
            }
            var_52 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_78 [i_18] [i_18] [i_18] [i_18] [i_18])))), (((/* implicit */int) arr_0 [i_18])))) >> ((((~(min((((/* implicit */long long int) (unsigned short)0)), (arr_3 [i_18]))))) + (14LL)))));
            var_53 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_1), (var_1))))));
        }
        var_54 -= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        arr_89 [i_18] = ((/* implicit */short) max((((((/* implicit */int) ((short) arr_29 [i_18]))) + (((/* implicit */int) arr_84 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))), (((/* implicit */int) (short)-8))));
    }
    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4164943871U), (((/* implicit */unsigned int) var_5))))) ? (((-4713565297980684612LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) - (-156930057))))))) ? (((/* implicit */unsigned long long int) var_4)) : ((+(var_6)))));
}
