/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64598
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) (((_Bool)1) ? (8458644912113805502ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5889)))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_12 += ((/* implicit */unsigned char) var_0);
                        var_13 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned char) var_8))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_6 [i_2] [(signed char)5] [i_0 - 3] [i_3]) >= (((/* implicit */int) arr_8 [i_2] [i_0] [i_0 - 3])))) || (((/* implicit */_Bool) max((((var_6) - (((/* implicit */int) (short)32764)))), ((-(((/* implicit */int) arr_2 [i_0])))))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), ((unsigned short)10558)));
                    }
                } 
            } 
            arr_14 [i_1] |= ((/* implicit */long long int) (signed char)-87);
            var_15 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)88))) != (((((/* implicit */int) var_4)) + (((/* implicit */int) (short)26520)))))))));
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_4])) : (-1023663089))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) > (-1134540668280309171LL)))))) / (((/* implicit */int) (short)-23083))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8472)) ? (3594338455022002780LL) : (((/* implicit */long long int) ((16320U) & (((/* implicit */unsigned int) ((/* implicit */int) max(((short)6144), (((/* implicit */short) var_2)))))))))));
                            arr_25 [i_0] [i_4] [i_5] [i_0] &= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 1991271262)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50672))) : (var_5))) != (((/* implicit */unsigned int) var_0)))), (((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_21 [i_7] [i_6] [i_5] [i_4] [i_0])))) > (((/* implicit */int) (!((_Bool)1))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)1022))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0] [i_0 - 3]))) : (3568267852U)))));
                var_18 = ((/* implicit */_Bool) arr_15 [(_Bool)1] [i_4]);
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-663748391)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1612200307) > (((/* implicit */int) (_Bool)1)))))) : ((-(((3608386644U) << (((3703097994941113634ULL) - (3703097994941113618ULL)))))))));
                arr_29 [i_0] [i_0] [10ULL] = (signed char)54;
            }
        }
        arr_30 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (-1553968891) : (((/* implicit */int) (unsigned short)60986))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2428645603U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5272))) - (9223372036854775807LL))))) : (((/* implicit */long long int) var_5))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (((((+(var_6))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) var_4)), (144114913197948928ULL))) - (144114913197948928ULL)))))), (((min((var_9), (var_9))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1188609999)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)-112)))))))));
        arr_33 [(_Bool)1] = ((((/* implicit */_Bool) max((((arr_32 [(short)8] [i_9]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2697)))))))) ? (((/* implicit */int) arr_31 [19LL])) : (986007460));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-66)) ^ (var_0)))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-79)) : (-238638595))) : (((/* implicit */int) var_1)))))));
                            var_21 = ((unsigned long long int) (-(arr_41 [i_10])));
                        }
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                        {
                            arr_48 [i_14] [(signed char)11] [i_10] [i_11] [i_10] [i_10] [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) - (43887)))))));
                            arr_49 [i_9] [(short)14] [i_9] [i_9] [i_9] |= ((/* implicit */_Bool) (short)-256);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)13915)) : (var_6)))) ? (((/* implicit */int) max((((/* implicit */short) var_4)), ((short)-16263)))) : (((/* implicit */int) var_8)))))));
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) arr_31 [i_10]))))) && (((((/* implicit */_Bool) arr_31 [i_9])) && (((/* implicit */_Bool) (short)13319))))));
                            var_24 = ((/* implicit */short) 5198215079814495729ULL);
                        }
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)124)));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((2596467960507828844LL), (((/* implicit */long long int) 4294967295U))))) > (((((5561500284565599823ULL) + (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7267362799094482550LL)) ? (246255483) : (var_6)))))))))));
                            arr_54 [(short)16] [i_10] = ((/* implicit */long long int) (unsigned short)56495);
                            arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) var_8);
                        }
                        arr_56 [i_9] [i_9] [(short)15] [i_10] [i_9] [i_9] = ((var_5) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((((/* implicit */int) arr_34 [i_11] [(short)18] [(short)18])) + (((/* implicit */int) (signed char)46))))))));
                        var_27 *= ((/* implicit */unsigned short) var_3);
                    }
                } 
            } 
            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_31 [i_10]))) ? (((((/* implicit */_Bool) var_5)) ? (arr_32 [i_10] [i_9]) : (arr_32 [i_9] [i_9]))) : (((/* implicit */long long int) arr_39 [i_9] [i_9] [i_9]))));
            arr_57 [i_10] [i_10] [i_10] = ((/* implicit */int) (-(((long long int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)23266))))));
            arr_58 [i_10] [8] = ((/* implicit */long long int) ((((arr_42 [i_10] [i_10] [i_10] [i_9] [i_10]) + (2147483647))) >> (((((unsigned long long int) (signed char)-121)) - (18446744073709551468ULL)))));
            var_29 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)11)))), (var_0)));
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_16])) ? (((/* implicit */int) arr_60 [i_16] [i_16])) : (((/* implicit */int) arr_60 [i_16] [i_16]))))) <= (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)112))))) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_61 [i_16])))))));
        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8901)) ? (536346624LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-117)))))) && (((/* implicit */_Bool) arr_60 [(unsigned char)3] [i_16])))) && (((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) var_2))))))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((10472397225567498068ULL), (((/* implicit */unsigned long long int) 5630390648341609121LL)))))));
        var_32 = min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)240))))))), (((arr_36 [i_16] [i_16] [i_16] [i_16]) ^ (((var_6) & (((/* implicit */int) var_1)))))));
        var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_16] [i_16]))) : (18446744073709551612ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        for (long long int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            {
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (signed char)96)) == (((/* implicit */int) (signed char)-112))))), (((((/* implicit */_Bool) arr_66 [i_17])) ? (((/* implicit */int) var_3)) : (var_0)))))) && (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)24576))))) <= ((~(var_9)))))));
                var_35 *= ((/* implicit */unsigned char) arr_66 [i_17]);
            }
        } 
    } 
}
