/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91018
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
    var_12 = ((/* implicit */signed char) (((+(min((((/* implicit */unsigned long long int) var_1)), (var_5))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)65))) || (((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_8)))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) (~(arr_3 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) var_6);
                            var_14 = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_4] [i_4 - 1] [i_4 - 1] [i_3] [i_0] [i_0]));
                        }
                        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                        var_15 -= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_1])) * (((/* implicit */int) var_4))));
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)65)) == (((/* implicit */int) (signed char)13))))) >> (((((/* implicit */int) arr_5 [i_0])) + (25)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] [i_0] = ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
    }
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        arr_23 [i_5 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)65))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            var_17 -= ((/* implicit */int) (signed char)-89);
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (13419643531843325453ULL))));
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((int) (signed char)-65));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)24144)) ? (((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_2))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)51612))) : (((/* implicit */int) var_8))));
            arr_29 [i_7 + 2] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_5] [i_5 - 1]))));
        }
        var_21 = arr_22 [i_5];
        arr_30 [i_5] = ((/* implicit */int) (short)7356);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)65)), (1721304242U))))));
    }
    for (int i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            arr_35 [i_8] [i_8] [i_9 - 1] = ((/* implicit */short) (~(((/* implicit */int) (signed char)78))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 456868652722285506ULL))) ? (((/* implicit */int) min((var_10), (arr_25 [i_8] [i_8])))) : (((/* implicit */int) max((arr_28 [i_8 + 2] [i_9 - 1]), (((/* implicit */unsigned short) (signed char)-78)))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_8 - 1] [12])) >= (((/* implicit */int) (signed char)2)))))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (arr_34 [i_8 + 1] [i_8] [i_8 + 2])))))))));
            var_24 = ((/* implicit */unsigned long long int) var_4);
        }
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((_Bool) var_8)))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_26 = ((/* implicit */int) var_11);
            arr_40 [i_8 + 2] [i_10] [i_8] = (~(((/* implicit */int) arr_25 [i_10] [i_10])));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_43 [i_8] [i_8] = ((((((/* implicit */_Bool) arr_41 [i_8 + 2] [i_8] [i_8 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_41 [i_8 + 2] [i_8] [i_8 + 1])))) <= ((~(((/* implicit */int) arr_37 [i_8] [i_11] [i_8 + 2])))));
            arr_44 [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_8] [i_8 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_8])) : (var_9)))))));
            arr_45 [i_8 + 2] [(signed char)4] &= ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_11] [i_8 - 1] [i_8 - 1]))));
        }
    }
    for (int i_12 = 1; i_12 < 15; i_12 += 3) 
    {
        arr_49 [i_12] = ((/* implicit */int) arr_48 [i_12]);
        var_27 ^= (_Bool)1;
        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-65))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)107)) : (((int) (signed char)-80)))) : (((/* implicit */int) arr_47 [i_12]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 2) 
    {
        var_29 = ((/* implicit */short) var_7);
        /* LoopSeq 1 */
        for (short i_14 = 2; i_14 < 12; i_14 += 2) 
        {
            arr_54 [i_13] = (short)-16343;
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 4; i_15 < 12; i_15 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (1579723183))))));
                arr_59 [i_14] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_14 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    for (int i_18 = 1; i_18 < 10; i_18 += 3) 
                    {
                        {
                            arr_66 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_14] [i_13] &= ((/* implicit */unsigned char) ((-874631082) > (((/* implicit */int) (signed char)-58))));
                            var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_13] [i_14 - 2]))) >= (((((/* implicit */_Bool) (signed char)-5)) ? (arr_34 [i_13 + 2] [i_13 - 1] [i_13 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_13] [i_14 + 1]))))));
                            arr_67 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) var_7);
            }
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_75 [i_14] [i_13] = ((/* implicit */short) arr_72 [i_13] [i_13 + 1] [i_13] [i_13]);
                    var_33 = ((/* implicit */signed char) ((arr_73 [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_13] [i_14 - 2] [i_14])))));
                    var_34 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_13] [i_13 + 1] [i_13])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_63 [i_19] [i_14] [i_20] [i_19])))))));
                    arr_76 [i_13] [i_14 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [i_19] [i_14 - 2] [i_19] [i_13 + 1] [i_13 + 1])) || ((_Bool)1)));
                }
                for (short i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    var_35 ^= ((/* implicit */unsigned short) ((unsigned int) (signed char)-12));
                    arr_81 [i_13] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_68 [i_13] [i_13] [i_21])) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_79 [i_13 + 1] [i_19])))) : (((((/* implicit */_Bool) arr_27 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_38 [i_19] [i_21])) : (((/* implicit */int) var_8)))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [i_13] [i_14])))))));
                    arr_82 [i_13] [i_14] [i_14 - 2] = ((/* implicit */int) arr_52 [i_13]);
                }
                var_37 = ((/* implicit */short) min((var_37), (arr_38 [i_13] [i_14])));
            }
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                var_38 += ((/* implicit */unsigned char) (-(((-1579723173) + (((/* implicit */int) arr_68 [i_22] [i_14] [i_22]))))));
                var_39 = ((/* implicit */unsigned long long int) min((var_39), ((-(11890456195783347851ULL)))));
            }
        }
        arr_85 [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) var_6))))));
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))))))));
    }
    for (unsigned short i_23 = 4; i_23 < 14; i_23 += 2) 
    {
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_11)))))) ? (((int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_47 [i_23])))) >= (min((arr_48 [i_23]), (((/* implicit */unsigned long long int) arr_86 [i_23] [i_23])))))))));
        arr_88 [i_23 - 4] = arr_86 [i_23] [i_23];
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 1) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 2) 
            {
                {
                    var_42 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (_Bool)1))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_87 [i_23 - 3] [i_23 + 1])))))));
                    var_43 = ((/* implicit */int) ((unsigned char) min((((/* implicit */short) var_8)), (arr_86 [i_23 + 1] [i_23 - 3]))));
                    var_44 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_1)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_26 = 3; i_26 < 16; i_26 += 3) 
    {
        var_45 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)31038)) : (((/* implicit */int) (unsigned short)27233)))));
        var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49691)) * (((/* implicit */int) arr_97 [i_26 - 2]))));
    }
    var_47 = ((/* implicit */short) 15838560038723611910ULL);
}
