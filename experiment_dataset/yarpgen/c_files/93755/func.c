/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93755
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 += max((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_15))))))), ((((-(((/* implicit */int) var_5)))) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */long long int) (signed char)-94);
                            var_19 = ((/* implicit */int) (~(((unsigned int) var_7))));
                            var_20 = ((/* implicit */signed char) var_12);
                            arr_13 [i_0] [i_1] [(unsigned short)16] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) (short)-21074));
                        }
                    } 
                } 
                arr_14 [10ULL] [(_Bool)1] [8] [7] = (~(((/* implicit */int) ((((/* implicit */int) (short)9625)) == (((/* implicit */int) (short)21073))))));
                var_21 -= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) var_16)));
            }
            var_22 = ((/* implicit */unsigned int) (short)21087);
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [i_5] = max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21074))))), (min((var_6), (((/* implicit */unsigned int) (signed char)98)))))), ((-((-(var_10))))));
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)24)) ^ (((/* implicit */int) (signed char)-25)))), (((/* implicit */int) max(((unsigned short)39053), (((/* implicit */unsigned short) (short)32756)))))))) : ((+((+(var_9)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (int i_8 = 4; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (+(((((1261225174U) * (var_10))) + (((/* implicit */unsigned int) (-(var_13))))))));
                            var_25 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) (short)-21088))))))));
                    arr_33 [i_0] [i_5] = ((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)102))))))) | (18446744073709551615ULL));
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_38 [6U] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (max((((/* implicit */unsigned long long int) 506598210U)), (12437103353635629605ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9633))))))));
                    arr_39 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((var_13) < (-6062)))))) >= (((/* implicit */int) ((min((2629245901U), (var_12))) < (((unsigned int) var_2)))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) (-((-(var_16)))));
                        var_28 *= ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) (_Bool)0)))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_4))))));
                        var_30 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -280610945)) : (4285225599U)))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) -1475776428))))))));
                    }
                    arr_50 [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) (-(280610937)))) ^ (max((((/* implicit */long long int) var_4)), (var_16)))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_14))))))))) <= (max((min((var_9), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((unsigned int) (signed char)-41)))))));
                }
                arr_51 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_10)))) ? (((unsigned int) var_1)) : (var_15))))));
            }
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                arr_55 [i_0] [i_5] [i_14] = ((/* implicit */signed char) min((((unsigned int) (unsigned short)53532)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) (-(var_6)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((signed char) 268304384U));
                            var_34 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (var_14))))));
                            var_35 += ((/* implicit */unsigned int) (+(max((min((((/* implicit */long long int) var_11)), (var_9))), (((/* implicit */long long int) ((unsigned char) var_15)))))));
                            arr_61 [i_0] [i_5] [i_14] [i_5] [i_16] = ((((min((454177285U), (((/* implicit */unsigned int) (_Bool)1)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)20)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)53532)) + (((/* implicit */int) (unsigned short)14008))))))) : ((-(max((3033742122U), (((/* implicit */unsigned int) var_14)))))));
                            arr_62 [i_0] [i_5] = ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (var_5))))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                var_36 ^= ((/* implicit */unsigned short) (+((+(((var_16) / (var_16)))))));
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    arr_68 [i_18] [i_5] [i_5] [12U] = ((/* implicit */unsigned long long int) ((signed char) (+(max((var_7), (((/* implicit */long long int) -260885966)))))));
                    var_37 = ((/* implicit */unsigned int) ((_Bool) (((!(((/* implicit */_Bool) var_2)))) ? ((-(((/* implicit */int) (unsigned short)60061)))) : (((/* implicit */int) ((var_13) == (((/* implicit */int) (unsigned char)215))))))));
                    arr_69 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned char) (+((+((+(3033742128U)))))));
                    arr_70 [i_0] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1694761321U)) || (((/* implicit */_Bool) (unsigned short)53532))));
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(min((var_13), (((/* implicit */int) var_11))))))) | ((((-(18446603336221196288ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14003))) / (325551240638733986LL)))))))))));
                }
            }
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    arr_77 [i_0] [i_5] [i_19] &= ((/* implicit */unsigned int) var_5);
                    arr_78 [i_5] = ((/* implicit */unsigned int) ((((18446603336221196263ULL) ^ (((/* implicit */unsigned long long int) var_3)))) >> (((((unsigned long long int) 18446603336221196263ULL)) - (18446603336221196238ULL)))));
                    arr_79 [1ULL] [i_5] [i_19] [i_5] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (unsigned char)30)))));
                }
                for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    arr_84 [12] [i_5] [i_5] [i_21] = ((/* implicit */unsigned int) (unsigned char)0);
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        arr_87 [16LL] [i_5] [i_0] [i_19] [i_22] [i_19] [i_19] |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */int) (short)-25635)) : ((~(((/* implicit */int) (unsigned char)63))))));
                        var_39 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))))));
                        arr_88 [i_0] [i_5] [i_19] [5] [i_5] = ((/* implicit */unsigned char) var_6);
                    }
                    var_40 = ((/* implicit */unsigned long long int) 915188525);
                    arr_89 [i_0] [i_5] [i_5] [i_21] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126))))));
                }
                arr_90 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-27518))));
            }
            arr_91 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((+(((var_8) / (((/* implicit */unsigned int) 1690206266)))))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775787LL)))))))));
        }
    }
    var_41 = ((/* implicit */unsigned char) (short)-21074);
}
