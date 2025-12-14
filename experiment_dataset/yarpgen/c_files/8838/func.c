/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8838
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (signed char)104);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_10));
                        var_18 = ((arr_8 [i_0] [i_2 - 2] [i_0 - 2] [i_0]) / (((/* implicit */long long int) arr_3 [i_2 - 2] [i_0 + 1] [i_0 - 1])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(min((((((/* implicit */long long int) arr_3 [i_0] [i_4] [i_2])) | (arr_2 [i_4]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) >= (8359331507405624028ULL)))))))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) var_4)))))));
                    }
                    var_21 = ((/* implicit */signed char) min((var_21), ((signed char)-112)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) 8359331507405624041ULL);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_16 [(signed char)6]))));
                                var_24 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) >> ((((+(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_0] [i_2] [i_1] [i_0] [i_0]))) | (arr_2 [i_0]))))) + (3461180896883071026LL)))))) : (((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) >> ((((((+(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_0] [i_2] [i_1] [i_0] [i_0]))) | (arr_2 [i_0]))))) - (3461180896883071026LL))) - (4257690008107424422LL))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 4; i_7 < 12; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) max((max(((+(arr_10 [i_9] [i_7] [i_1] [i_0]))), (((/* implicit */long long int) arr_15 [4ULL] [i_1] [i_1] [4ULL] [i_9])))), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                                var_25 = ((/* implicit */short) (-(max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0])) / (((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */signed char) ((arr_16 [0ULL]) | (arr_3 [i_0] [i_1] [i_7 - 1])));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)35)))) / (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (-4577473554363538336LL))))), (((/* implicit */long long int) (~((~(arr_3 [i_0] [(signed char)2] [i_7]))))))));
                }
                for (unsigned short i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)-118)))) - (((/* implicit */int) ((unsigned short) (signed char)-125))))) + (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_27 [i_0])))) ? (((/* implicit */int) ((signed char) arr_23 [i_0] [i_0] [i_0] [i_11] [i_12]))) : (((var_7) ? (((/* implicit */int) arr_22 [i_0] [10] [i_11] [i_12])) : (((/* implicit */int) (unsigned char)136))))))));
                                var_28 = ((/* implicit */_Bool) max((((min((((/* implicit */unsigned int) arr_22 [i_0] [i_10] [i_10] [i_0])), (var_15))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) var_8)) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2055165229782109374LL)))) : (min((((/* implicit */unsigned int) arr_17 [i_1] [i_11] [i_0])), (var_15)))))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)14))))) ? (((unsigned int) min((((/* implicit */unsigned long long int) var_6)), (arr_18 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_10 + 3] [i_10] [i_0]))))));
                                var_30 = ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)111)), (((((/* implicit */_Bool) (unsigned short)46010)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_1)))))), (((/* implicit */int) min((arr_14 [i_0 - 2] [i_10] [i_10 + 3] [i_12 - 2] [5] [i_12 + 2]), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)93)) != (((/* implicit */int) (unsigned char)12))))))))));
                                var_31 = ((/* implicit */unsigned short) 4416262701367292433LL);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1] [i_10] [1ULL]), (arr_33 [i_13] [i_10])))), (((((/* implicit */unsigned long long int) (+(var_12)))) % (min((arr_26 [i_0] [i_1] [i_10]), (((/* implicit */unsigned long long int) var_12)))))))))));
                        arr_35 [i_0] [i_0] [i_1] [i_10] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)236)))), (((((/* implicit */int) (unsigned short)34617)) >> (((((/* implicit */int) (signed char)111)) - (81)))))))), (((min((8359331507405624041ULL), (((/* implicit */unsigned long long int) var_4)))) >> ((((~(arr_2 [i_0]))) - (3461180896883071061LL)))))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)236)))), (((((/* implicit */int) (unsigned short)34617)) >> (((((/* implicit */int) (signed char)111)) - (81)))))))), (((min((8359331507405624041ULL), (((/* implicit */unsigned long long int) var_4)))) >> ((((((~(arr_2 [i_0]))) + (3461180896883071061LL))) + (4257690008107424337LL))))))));
                    }
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_14 [(signed char)11] [i_10] [i_10] [i_1] [i_10] [(signed char)11]))));
                        var_34 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_20 [(signed char)8] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (short)2849)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (unsigned char)185)))), (((/* implicit */int) ((((_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)106)) | (((/* implicit */int) (_Bool)0))))))))));
                    }
                    for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_21 [i_10] [i_1] [i_15] [i_0])), (var_12)));
                        var_36 = ((/* implicit */unsigned char) arr_34 [i_0] [i_1] [i_0] [i_0]);
                        var_37 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                        arr_41 [i_0] [i_1] [i_0] [i_10] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(-6150886012746180633LL))) != (((/* implicit */long long int) ((/* implicit */int) min(((short)4095), (((/* implicit */short) arr_19 [i_1] [i_10] [i_15]))))))))) < (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) ((signed char) arr_17 [5ULL] [i_10] [i_0]))))))));
                    }
                    for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        arr_44 [i_0] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)62)) >= (((/* implicit */int) ((unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)235))))))) : (-3587524709655946417LL)));
                        var_38 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) max((((var_2) % (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned int) max((((var_2) * (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_4 [i_0])))));
                    }
                }
                var_39 = ((/* implicit */unsigned long long int) max((((arr_16 [i_0]) & (arr_16 [i_0]))), (((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_16 [i_0]) : (((/* implicit */int) var_8))))));
                var_40 = ((/* implicit */short) (-((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)136)), ((unsigned short)11))))))));
                var_41 = ((/* implicit */unsigned char) min((var_41), (arr_6 [10LL] [10LL])));
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6150886012746180633LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (((((/* implicit */_Bool) 4294967295U)) ? (-5366829643578640334LL) : (8305987050209585763LL)))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) | (((5887556774170456261ULL) & (((/* implicit */unsigned long long int) -6150886012746180640LL))))))));
    var_43 = max((((/* implicit */long long int) ((((var_14) + (((/* implicit */int) var_8)))) / (var_14)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14164)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_10)))))) : ((+(var_6))))));
    /* LoopSeq 1 */
    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
    {
        var_44 *= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_46 [(unsigned char)2])), (3001379030594694378ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)86)) | (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_46 [(short)0])) : (((((/* implicit */int) arr_45 [i_17] [i_17])) ^ (((/* implicit */int) (unsigned char)206)))))))));
        arr_47 [i_17] = var_16;
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 14; i_18 += 3) 
        {
            for (unsigned int i_19 = 0; i_19 < 15; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        var_45 ^= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_45 [i_18 + 1] [i_18 - 1])) : (((/* implicit */int) arr_45 [i_18 - 1] [i_18 - 1]))))) >= (((unsigned int) -2485326022385858402LL)));
                        arr_57 [i_17] [i_17] [i_18] [i_18] [i_17] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) (signed char)-52))))) : (((unsigned long long int) (signed char)66))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 2; i_22 < 13; i_22 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) arr_62 [i_17]);
                                var_47 -= ((/* implicit */long long int) (signed char)36);
                            }
                        } 
                    } 
                    arr_63 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) arr_56 [i_17] [i_18] [i_18] [i_17]);
                }
            } 
        } 
        var_48 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)195)) != (((/* implicit */int) (signed char)0))));
    }
    var_49 = (unsigned char)74;
}
