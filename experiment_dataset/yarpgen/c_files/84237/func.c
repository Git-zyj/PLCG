/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84237
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
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned short) ((long long int) -4064294236022790704LL));
        var_16 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_12))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_1] [i_2]));
            var_19 ^= ((/* implicit */short) ((4064294236022790698LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9844)))));
        }
        for (int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((long long int) var_0)) + (min((-4064294236022790693LL), (((/* implicit */long long int) arr_2 [14]))))));
            var_21 = ((((/* implicit */_Bool) ((var_4) >> (((((/* implicit */int) var_8)) - (54403)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_4 - 1])))))) : ((+(-6394838955007488647LL)))))) & (arr_5 [23U] [i_3 + 2] [i_4]));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_7 [i_1]))));
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -4064294236022790704LL))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_12 [i_1] [i_3] [i_1] [i_3])))))));
                    arr_15 [i_4] [i_5] [i_5] [8LL] = ((unsigned short) (~(arr_5 [i_3 + 2] [i_4] [i_1 + 1])));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned int) var_8);
                        var_26 = ((/* implicit */unsigned int) 9191736902948432391ULL);
                        var_27 = ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) 9255007170761119224ULL)) ? (-9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))))));
                        var_28 ^= ((/* implicit */unsigned short) ((3575201128U) != (var_13)));
                        arr_19 [i_1] [i_1] [i_4] [i_4] [(signed char)20] = ((/* implicit */signed char) ((unsigned short) ((9191736902948432391ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_22 [i_4] [i_5] = ((/* implicit */int) ((long long int) 2017839652U));
                        arr_23 [i_4] = ((/* implicit */signed char) min((min((arr_16 [9] [i_3 - 1] [i_4] [i_4 + 1] [i_5]), (-3415415338833593497LL))), (min((((/* implicit */long long int) arr_12 [i_1 - 1] [i_4] [i_1] [i_3 + 2])), (arr_16 [i_4 - 1] [i_4] [i_4] [i_4 + 1] [(unsigned short)16])))));
                        arr_24 [i_3 + 2] [i_3 + 1] [i_4] [i_3] [(signed char)10] [3U] = ((/* implicit */short) var_0);
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_27 [i_4 - 1] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (397471223909762638LL)))));
                        arr_28 [i_1 + 3] [i_1 + 2] [i_4 + 1] [i_5] [1LL] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 + 2] [i_3 + 2])) * (((/* implicit */int) (unsigned char)0))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (signed char)-41))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1761717060279405822LL)))) && (((/* implicit */_Bool) arr_6 [i_3 - 1]))));
                        var_31 ^= ((/* implicit */unsigned int) ((int) arr_5 [i_3 - 1] [i_3] [i_3 - 1]));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) 6LL);
                        var_33 = ((/* implicit */int) ((long long int) arr_11 [i_4 + 1] [i_4] [i_1]));
                        arr_31 [i_1 - 1] [i_1] [i_4] [i_1 - 1] [i_5] [i_9] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_1] [i_3]))))) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1])) : (((((/* implicit */int) (short)9737)) + (((/* implicit */int) (signed char)-95))))));
                        arr_32 [i_4] [i_3 + 1] [i_4] [i_5] [i_9] = (i_4 % 2 == zero) ? (((((((/* implicit */int) arr_12 [i_1] [i_4] [i_3 + 2] [i_4 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_1 + 2] [i_4] [i_3 + 1] [i_4 - 1])) + (95))))) : (((((((/* implicit */int) arr_12 [i_1] [i_4] [i_3 + 2] [i_4 - 1])) + (2147483647))) >> (((((((/* implicit */int) arr_12 [i_1 + 2] [i_4] [i_3 + 1] [i_4 - 1])) + (95))) - (45)))));
                    }
                }
            }
        }
        var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_35 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)48828)) + (((((/* implicit */_Bool) (short)19792)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) < (((/* implicit */int) var_3))));
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) min((((long long int) ((((/* implicit */int) var_12)) == (var_4)))), (((/* implicit */long long int) ((unsigned char) arr_29 [i_1 - 1] [i_1 - 1] [i_11] [i_10] [(short)15] [i_11]))))))));
                var_37 = (-(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) arr_21 [i_1] [i_10] [(short)10] [(unsigned short)18] [i_10] [(short)10])) : (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 2] [i_11] [i_11] [i_11] [(signed char)0])))));
            }
            /* vectorizable */
            for (short i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_47 [i_1] [i_1] [i_10] [i_10] [i_12] [(unsigned short)11] [i_10] = ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 1] [i_12] [i_14 - 1] [i_14] [i_14]))));
                            var_38 = ((/* implicit */unsigned int) ((354262555650252585ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(signed char)18] [i_1 + 2] [i_1 + 3] [i_12] [i_14] [i_14 + 3]))) : (arr_37 [i_1 - 1])));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) arr_37 [i_1 - 2]))));
            }
            arr_48 [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(3344055653U))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_42 *= ((/* implicit */long long int) arr_26 [i_1 + 1] [2ULL] [i_15] [i_1 - 2] [i_15] [i_1 + 3]);
            var_43 ^= ((/* implicit */signed char) arr_6 [i_1 - 2]);
            arr_51 [i_1] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_16 [i_1] [i_1 - 1] [i_15] [i_1] [i_15 + 1]))))));
            var_44 *= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_9)));
        }
        for (unsigned int i_16 = 1; i_16 < 23; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (short i_17 = 3; i_17 < 22; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    {
                        var_45 = max((((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_18]))))), (max(((unsigned short)8), (((/* implicit */unsigned short) (signed char)-39)))));
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (-2147483647 - 1)))));
                        var_47 += (-(max((((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_1] [i_16 - 1] [i_17 - 2] [i_18] [i_1])) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) arr_2 [i_1])), (-1))))));
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (((-(var_13))) | (((/* implicit */unsigned int) (-(((/* implicit */int) (short)19786)))))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (9191736902948432372ULL) : (arr_37 [i_16])))));
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_41 [i_16 + 1] [i_16 - 1] [i_17 + 2] [i_16 + 1])), (max((min((var_6), (((/* implicit */unsigned long long int) arr_4 [i_19])))), (((/* implicit */unsigned long long int) (unsigned short)28760)))))))));
                            var_50 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (_Bool)1)))), (((((((/* implicit */_Bool) var_13)) ? (arr_5 [i_1] [i_16 - 1] [i_19]) : (((/* implicit */unsigned long long int) 2147483646)))) & (min((((/* implicit */unsigned long long int) var_4)), (var_6)))))));
                            arr_64 [(short)0] [i_16] [i_16] [i_18] [i_1 - 1] = ((/* implicit */unsigned int) arr_3 [i_1 + 3] [i_18]);
                            arr_65 [i_1 - 1] [i_1 - 1] [i_17 + 1] [i_16] [i_19] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                for (unsigned int i_21 = 2; i_21 < 23; i_21 += 2) 
                {
                    {
                        var_51 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        arr_73 [i_21 - 2] [i_16] [i_16] [24] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) 4294967282U)))))) | (((/* implicit */int) arr_13 [i_1 + 1] [(signed char)10] [i_16] [i_21 + 1] [i_21]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_22 = 2; i_22 < 22; i_22 += 3) /* same iter space */
    {
        arr_77 [i_22 - 1] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)44096)))));
        arr_78 [i_22 + 2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
        var_52 = ((/* implicit */_Bool) (~(-1149741963)));
        arr_79 [i_22 - 1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)21)) ? (-4064294236022790704LL) : (((/* implicit */long long int) var_5))))));
    }
    for (long long int i_23 = 2; i_23 < 22; i_23 += 3) /* same iter space */
    {
        var_53 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_23] [(_Bool)1] [i_23] [i_23 - 1]))))), (((long long int) var_4)))))));
        var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3138211635280001151LL))));
        var_55 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)54329)) : (((/* implicit */int) (unsigned char)188)))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_13)))) ? (((/* implicit */int) ((signed char) arr_68 [i_23] [(unsigned char)23] [i_23]))) : ((+(((/* implicit */int) var_3))))))));
    }
    /* LoopNest 2 */
    for (long long int i_24 = 3; i_24 < 9; i_24 += 3) 
    {
        for (unsigned int i_25 = 3; i_25 < 6; i_25 += 1) 
        {
            {
                var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_25 [i_25] [i_25] [i_24 + 1] [i_24] [(signed char)21] [i_24 + 1])) : (min((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_11 [i_24] [i_25] [i_25])))), (((/* implicit */int) (!(arr_13 [i_24 + 1] [i_24] [i_25] [i_24] [i_24]))))))));
                arr_90 [i_25] [i_25] = ((/* implicit */int) max((((/* implicit */long long int) (~(arr_56 [i_25] [i_25] [i_24 + 1])))), (max(((~(var_1))), (((/* implicit */long long int) (+(var_0))))))));
                var_57 = ((/* implicit */unsigned long long int) min((arr_71 [i_24 + 1] [i_24 + 1] [i_25] [i_25] [i_25]), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_67 [i_24] [i_25] [i_24 - 1] [i_24 - 1]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        arr_93 [5U] = ((/* implicit */unsigned long long int) 0U);
        var_58 ^= ((/* implicit */int) var_10);
    }
    /* vectorizable */
    for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
    {
        var_59 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) | ((-(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 3 */
        for (unsigned short i_28 = 2; i_28 < 10; i_28 += 1) 
        {
            var_60 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_25 [i_27] [i_27] [i_27] [i_27] [i_28] [i_28])))) / (((((((/* implicit */int) arr_80 [i_27])) + (2147483647))) >> (((/* implicit */int) arr_55 [i_27] [i_28 + 1] [i_27]))))));
            var_61 = ((/* implicit */unsigned int) (+(6829779739450886137LL)));
            arr_99 [i_28] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3218551592U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_69 [(short)17] [i_27] [i_27])))))));
            var_62 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_27] [i_27] [i_27]))) & (arr_26 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))) & (((/* implicit */unsigned long long int) arr_98 [3U] [i_28 - 2])));
        }
        for (unsigned short i_29 = 0; i_29 < 12; i_29 += 3) 
        {
            var_63 = ((/* implicit */unsigned int) var_9);
            var_64 = ((/* implicit */int) 2073684027U);
            arr_103 [i_27] [i_27] = ((/* implicit */int) ((unsigned short) 1213030490U));
            arr_104 [i_27] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_83 [i_29])) | (((/* implicit */int) arr_83 [i_29]))));
            arr_105 [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_27] [i_27] [i_27] [i_27] [i_29])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))) - (1725298034U))) : (((unsigned int) arr_81 [i_29]))));
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_65 ^= ((/* implicit */unsigned short) ((arr_59 [i_30] [i_30] [i_30] [i_30]) <= (arr_59 [i_27] [i_27] [i_27] [i_30])));
            /* LoopNest 2 */
            for (unsigned short i_31 = 1; i_31 < 11; i_31 += 1) 
            {
                for (short i_32 = 0; i_32 < 12; i_32 += 4) 
                {
                    {
                        var_66 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        var_67 = ((/* implicit */unsigned int) var_1);
                        var_68 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_27] [i_31] [i_31 + 1] [i_31] [i_31 - 1] [i_31 - 1])) ? (((long long int) 1785748976U)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_33 = 0; i_33 < 12; i_33 += 2) 
        {
            arr_117 [i_27] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_27] [i_27] [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_27]))) : (2221283268U)));
            var_69 = (!(((/* implicit */_Bool) (+(var_4)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_34 = 0; i_34 < 11; i_34 += 4) 
    {
        var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)1958)))))));
        var_71 = ((/* implicit */long long int) max((var_71), (var_2)));
        arr_120 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) var_12);
    }
}
