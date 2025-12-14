/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91705
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
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-4742203967748958713LL) + (4742203967748958716LL))))))))), (min((min((var_15), (((/* implicit */unsigned short) (unsigned char)155)))), (((/* implicit */unsigned short) (unsigned char)158))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((long long int) ((short) -4742203967748958695LL))), (((/* implicit */long long int) var_4)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (!(((-8202511298427520955LL) < (((/* implicit */long long int) 3743363508U))))));
                                arr_16 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_2 [8]), (((/* implicit */unsigned short) (short)-18473)))))))), (max((((/* implicit */unsigned long long int) (-(0U)))), (max((arr_15 [i_4] [i_3 - 1] [i_2] [i_1] [i_0] [i_0]), (arr_13 [i_3] [(unsigned short)0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((unsigned int) var_14));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967295U)) ? (arr_17 [9U]) : (arr_17 [i_5]))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)19223))))) & (((/* implicit */int) arr_18 [i_5]))));
        var_23 += ((/* implicit */int) (short)-8707);
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) (~((((-(((/* implicit */int) arr_20 [i_7] [i_7 + 1])))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_7]))) : (var_5))) - (20619LL)))))));
            arr_24 [i_7 + 1] [i_7] [(signed char)7] = ((/* implicit */unsigned short) arr_21 [i_6] [i_6] [i_7]);
        }
        for (short i_8 = 1; i_8 < 14; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                var_25 ^= ((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_9]);
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_33 [i_6] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) min((var_8), (arr_25 [i_10] [i_10] [i_9]))))), (max((max((((/* implicit */unsigned long long int) var_11)), (18446744073709551599ULL))), (((/* implicit */unsigned long long int) 20U))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [3ULL] [3ULL])), (46178331)))), (max((((/* implicit */unsigned int) 630758442)), (0U)))))) ? (var_4) : (((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */int) max((var_7), (((/* implicit */short) (unsigned char)155))))) : (((/* implicit */int) (unsigned short)50786))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 3) 
                    {
                        arr_36 [i_6] [i_8] [i_8] [i_10] [i_9] = ((/* implicit */unsigned int) max((arr_21 [i_6] [i_8] [i_10]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (unsigned short)34568)) : (((/* implicit */int) (signed char)46)))))));
                        var_27 = ((/* implicit */short) min((arr_25 [i_10] [i_10] [i_10]), (4742203967748958684LL)));
                        arr_37 [i_6] [i_8] [i_6] [i_10] [i_11] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((arr_25 [i_11 + 1] [i_11 + 1] [5ULL]) == (((/* implicit */long long int) arr_17 [i_10]))))), (max(((unsigned short)58163), (((/* implicit */unsigned short) arr_18 [i_6]))))))), (arr_27 [i_11] [i_11 - 1] [i_11 - 1])));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        arr_40 [i_6] [i_6] [i_9] = ((unsigned long long int) ((((/* implicit */_Bool) 127U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3157626439962205176LL)))))) : (-1964081950134008168LL)));
                        arr_41 [i_8] [i_8] [i_8] [i_8] [i_6] |= ((/* implicit */int) ((long long int) arr_17 [i_6]));
                        var_28 = ((/* implicit */signed char) min((var_4), (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (min((arr_30 [i_6] [i_6] [i_9] [i_12]), ((unsigned short)14749))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        arr_44 [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) ((short) arr_34 [i_9] [i_13] [i_10] [i_9] [i_9] [i_9] [i_9])))), (min((((/* implicit */unsigned int) (unsigned short)53208)), (max((((/* implicit */unsigned int) var_7)), (var_1)))))));
                        arr_45 [i_6] [i_9] [(short)11] [5LL] [i_6] [i_6] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) ^ (((unsigned int) ((signed char) (_Bool)1))));
                        arr_46 [i_13] [i_10] [i_9] [i_9] [i_9] [i_8] [i_6] = ((unsigned short) var_16);
                        var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (short)32753))))), (var_11)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) max(((+(arr_31 [i_6] [i_6] [i_6] [i_6] [i_13] [i_6]))), (arr_31 [i_6] [i_13] [i_10] [i_9] [i_8] [i_6]))))));
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        arr_53 [i_6] [i_6] [i_6] [i_6] [14U] &= ((((/* implicit */_Bool) max(((short)-16063), (((/* implicit */short) (unsigned char)82))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) : (((max((((/* implicit */unsigned long long int) (unsigned char)174)), (7069888648854596824ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)14544), (((/* implicit */short) (signed char)70)))))))));
                        arr_54 [3LL] [i_9] [i_9] [i_6] = ((/* implicit */unsigned int) var_3);
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-60)), (min((1513064233747643369ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_34 [i_6] [i_8] [i_6] [i_8] [i_8] [i_8 + 1] [(_Bool)1])), (-8532957193060135648LL)))))))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) var_0);
                        var_33 += ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_29 [i_6] [i_14] [1LL])))))), (min((((/* implicit */long long int) (signed char)-1)), (5444748158997931323LL)))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((unsigned short)15208), (((/* implicit */unsigned short) (unsigned char)99))))), (var_9))))));
                    }
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_56 [i_6] [i_8] [(signed char)0] [i_14] [i_14] [4] [i_9]))));
                    var_36 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_22 [i_8] [i_14])), (19U)));
                    arr_58 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32751))) : (4436722099951887176ULL))), (((/* implicit */unsigned long long int) arr_17 [i_6]))));
                }
                arr_59 [i_9] = ((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_6] [i_9])) != (((/* implicit */int) max((arr_30 [i_6] [i_8] [i_8] [i_9]), (var_3)))))) ? (arr_23 [i_9]) : (arr_32 [i_6] [i_6])));
            }
            for (short i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 3; i_18 < 14; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            arr_68 [i_17] [i_8] [i_8] [i_17] = ((/* implicit */unsigned int) arr_42 [i_19] [(_Bool)1] [i_18] [(_Bool)1] [(_Bool)1] [(short)8] [i_6]);
                            var_37 &= ((/* implicit */int) min((max((14010021973757664439ULL), (((/* implicit */unsigned long long int) 4194303)))), (((/* implicit */unsigned long long int) arr_49 [i_8] [i_8] [i_17]))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (short)32762))));
            }
            for (unsigned short i_20 = 1; i_20 < 14; i_20 += 3) 
            {
                var_39 += ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_50 [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_38 [i_20] [i_6] [i_8] [i_8] [i_6] [i_6]))))), (-1932458576)));
                var_40 = ((/* implicit */long long int) 1932458566);
            }
            var_41 = ((/* implicit */unsigned short) ((min((arr_21 [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)0)))) % (((/* implicit */unsigned long long int) var_2))));
            arr_71 [i_8 + 1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_6] [i_6] [i_6] [6ULL] [4U]))))), (var_10))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_1))), ((+(((/* implicit */int) var_3)))))))));
            arr_72 [i_6] [i_6] [i_8] = ((/* implicit */short) min((((int) (+(((/* implicit */int) arr_20 [i_6] [i_6]))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1982))))))))));
        }
        arr_73 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6]))))) < ((~(((/* implicit */int) var_3)))))));
    }
}
