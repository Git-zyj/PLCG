/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99694
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) == (((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))))) == (((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) (unsigned char)231)))))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (var_1)))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((-1LL), (((/* implicit */long long int) arr_3 [i_0]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_4] [(unsigned char)14] &= ((/* implicit */unsigned int) var_11);
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned short)6] [i_1 + 1])) % (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0]))));
                            var_21 ^= ((((/* implicit */_Bool) (short)-25278)) || (((/* implicit */_Bool) ((int) (_Bool)1))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_0] [i_4] [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_0 - 1] [i_3] [i_4] [i_6 + 3])) ? (arr_17 [(unsigned short)0] [i_0 - 1] [i_3] [i_4] [i_6 - 3]) : (arr_17 [14] [i_0 - 1] [i_0] [i_4] [i_6 - 3])));
                            var_22 |= ((/* implicit */_Bool) arr_8 [2LL] [i_4] [6U]);
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_0 - 1]));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned char) var_5)))));
                            arr_28 [i_0] [i_1] [i_1] [i_4] [i_6] [17] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52267)) + (((/* implicit */int) (_Bool)1))))) ? (((int) arr_5 [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_3 [i_1])));
                        }
                        var_25 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13269))) & (-1LL))) | (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)182)))))));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1])))))) : ((-(3741932399U)))));
                        var_28 = ((/* implicit */unsigned short) (_Bool)0);
                        arr_31 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 2] [i_1 - 1]))))), ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 2] [(short)9]))))));
                    }
                }
                var_29 = ((/* implicit */short) (signed char)-125);
                var_30 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) arr_6 [i_0]);
                    var_32 &= max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 984017630)), (arr_17 [i_8] [i_1] [i_1] [i_0] [(unsigned char)17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11800173527791650737ULL))));
                    var_33 = ((/* implicit */unsigned int) (+(1640285972896031816LL)));
                }
            }
        } 
    } 
    var_34 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_17)));
    /* LoopSeq 2 */
    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        arr_38 [8ULL] [8ULL] |= ((unsigned short) ((((-984017630) + (2147483647))) >> (((((/* implicit */int) (unsigned short)47535)) - (47513)))));
        arr_39 [i_9] [i_9] = (((!(((/* implicit */_Bool) arr_29 [(signed char)11] [i_9] [i_9] [i_9])))) ? (arr_29 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    }
    for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 10; i_14 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_12])) : (((/* implicit */int) arr_12 [i_11])))));
                                arr_52 [(_Bool)1] [i_11] = ((/* implicit */unsigned char) min((max((1572864), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_14))));
                                var_36 = ((/* implicit */unsigned int) ((signed char) min((var_0), (((_Bool) var_11)))));
                                arr_53 [i_14] [i_11] [i_12] [i_11] [i_11] [i_11] [i_10] = ((/* implicit */short) ((unsigned short) (~(-911058200309282239LL))));
                                arr_54 [i_10] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */long long int) (~((((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11171)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) max((var_37), (((signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_51 [i_10] [(_Bool)1])) <= (((/* implicit */int) arr_18 [i_10] [i_11] [i_10] [i_16] [i_11] [(_Bool)1] [i_10]))))))))));
                                var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_11 - 1] [i_11 - 1] [i_11 - 1]), (arr_5 [i_11 - 1] [i_11 - 1] [i_11 - 1])))) ? (((/* implicit */long long int) min((((unsigned int) (unsigned short)25917)), (((/* implicit */unsigned int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)8] [i_12] [i_15] [i_16]))))))))) : (var_3)));
                            }
                        } 
                    } 
                    var_39 -= ((/* implicit */unsigned int) (unsigned char)255);
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)20)) * (((((/* implicit */int) var_2)) * ((-(((/* implicit */int) arr_1 [i_12])))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    {
                        var_41 = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)56)))) - (((((/* implicit */int) arr_14 [i_10] [i_17] [i_18] [i_17])) - (((/* implicit */int) (_Bool)1))))));
                        var_42 += ((/* implicit */unsigned char) max(((+((+(202388583))))), (((/* implicit */int) ((short) arr_56 [i_19] [i_17] [i_18] [i_17])))));
                        arr_69 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) (signed char)56))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_67 [i_18] [i_19]), (arr_67 [i_10] [i_17]))))) : (((((_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_56 [i_17] [i_19] [i_19] [i_19])))) : (max((arr_35 [i_17] [i_17]), (((/* implicit */long long int) arr_58 [i_10] [i_10] [i_17] [i_17]))))))));
                        arr_70 [i_18] [(short)0] [i_17] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_17] [i_17] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10]))) : (3475995242U)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-110), (((/* implicit */signed char) (_Bool)1)))))) : (((long long int) (-2147483647 - 1))))));
                        var_43 ^= ((/* implicit */long long int) ((((/* implicit */int) var_6)) / (518704701)));
                    }
                } 
            } 
            var_44 += ((/* implicit */int) ((signed char) ((((long long int) arr_51 [(unsigned short)2] [(unsigned short)2])) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_10] [(_Bool)1] [i_17] [i_17])))))));
        }
        var_45 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned char)126)) >> (((arr_49 [i_10] [(unsigned short)8] [i_10] [i_10]) - (4133534768597666681LL))))));
    }
    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18001769782848582218ULL)) || (((/* implicit */_Bool) var_16)))))) ? (((((/* implicit */_Bool) (unsigned short)46735)) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_4))))) : (((((/* implicit */int) var_10)) % (-1708905919))))) : (((/* implicit */int) var_5)))))));
}
