/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75840
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 -= ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (short)11578))))), (arr_1 [i_0])))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) (signed char)56)));
        var_17 = ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_0 [i_1 + 2]), (var_0))))))), (arr_2 [i_1] [i_1])));
        arr_5 [i_1 + 3] = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 281804959)) ? (((/* implicit */int) (signed char)0)) : (-281804941)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)20)))))));
                        arr_13 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)54743), (((/* implicit */unsigned short) arr_8 [i_1 - 1]))))))))));
                        arr_14 [i_4] &= ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_11 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_4] [i_4])))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 0ULL))));
                    }
                } 
            } 
            var_21 -= ((/* implicit */signed char) arr_12 [i_2] [i_1]);
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            arr_23 [i_1] [i_2] [i_5] [i_6] [5ULL] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -281804944)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_2] [i_1 + 2] [i_1 + 1] [i_7] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (1597521226) : (((/* implicit */int) (signed char)-41))))) ? ((-(arr_22 [i_1] [i_1] [i_5] [i_6] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_5] [i_1]) == (((/* implicit */int) (signed char)-124)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_2] [i_6]))))), ((short)32757)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_10) ? (2117617567951007771ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)2196), (((/* implicit */unsigned short) (short)2)))))) == (((arr_22 [i_1] [i_2] [i_2] [i_2] [i_5] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (((long long int) 1479809440U))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    arr_28 [i_8 + 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned int) 281804959);
                    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_1] [i_2] [i_5] [(_Bool)1]));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_15 [i_5]))));
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 532469309)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)75))));
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_27 *= ((/* implicit */_Bool) var_11);
                    var_28 = ((/* implicit */long long int) min((((/* implicit */int) (short)13488)), (((((/* implicit */int) (short)10864)) | (((/* implicit */int) (unsigned short)57916))))));
                    var_29 ^= ((/* implicit */long long int) (((+(arr_17 [i_1] [i_1] [i_1]))) ^ ((-(((((/* implicit */int) arr_8 [i_1])) % (((/* implicit */int) var_13))))))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_2)))));
                    var_31 = ((/* implicit */_Bool) arr_32 [i_1] [16] [i_2]);
                    arr_35 [i_10] [i_10] [i_5] [i_10] = ((/* implicit */unsigned int) arr_0 [i_1]);
                }
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    arr_39 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_29 [i_2]))) % (((/* implicit */int) (unsigned short)5))));
                    /* LoopSeq 4 */
                    for (short i_12 = 1; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(3989218645U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_18 [i_1 + 1] [i_12 + 2])))));
                        var_33 = ((((/* implicit */_Bool) var_14)) ? (((9617702522949572748ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2] [i_5] [i_11] [i_12 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_2]))));
                        var_34 = ((/* implicit */signed char) (+(arr_18 [i_11] [i_11])));
                    }
                    for (short i_13 = 1; i_13 < 16; i_13 += 3) /* same iter space */
                    {
                        arr_44 [i_1] = ((/* implicit */_Bool) max((-4969249159758760281LL), (((/* implicit */long long int) (short)2216))));
                        arr_45 [i_1] [i_1] [i_1] [i_11] [i_13] &= var_10;
                    }
                    for (short i_14 = 1; i_14 < 16; i_14 += 3) /* same iter space */
                    {
                        arr_48 [i_1] [9LL] [i_14] [i_5] [i_14] [i_1] [i_1] = var_11;
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)7615)), (var_5)))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_38 [i_2])))) / (((((/* implicit */_Bool) (unsigned short)17052)) ? (((/* implicit */int) (short)31016)) : (((/* implicit */int) (unsigned short)57900)))))))));
                        var_36 = ((/* implicit */signed char) (+((-(((/* implicit */int) (short)11474))))));
                        var_37 *= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) (signed char)-126)))), (((/* implicit */unsigned long long int) var_8))));
                    }
                    for (short i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (short)10647)))));
                        arr_52 [i_1] [i_15] [i_15] [i_11] [i_15 - 1] = ((((/* implicit */int) max((arr_25 [i_1] [18] [i_5] [i_11]), (((/* implicit */unsigned short) arr_38 [i_2]))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-24))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)1)))));
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) 3989218622U)), (4023856698759807953ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_15 - 1])) ? (((/* implicit */int) arr_0 [i_15 + 1])) : (((/* implicit */int) arr_0 [i_15 - 1]))))))))));
                    }
                }
            }
            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
            {
                var_40 *= min((arr_18 [8U] [i_2]), (((/* implicit */unsigned int) min((var_14), (((/* implicit */short) arr_53 [i_1 + 1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    var_41 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                    var_42 -= ((/* implicit */short) (unsigned short)32768);
                    /* LoopSeq 1 */
                    for (long long int i_18 = 4; i_18 < 17; i_18 += 3) 
                    {
                        var_43 -= ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-1)))) % ((+(((/* implicit */int) (signed char)-103))))));
                        arr_62 [12] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_2] [i_2] [i_17] [(unsigned short)12] [i_2])) ? (((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 17179869184LL)) : (((((/* implicit */_Bool) -9098958539479833388LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_1 - 2] [i_2] [i_2] [i_17] [i_18]))) : (18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)54957)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)35)))))))));
                        var_44 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_16] [i_2] [i_18 + 1] [(signed char)18])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? ((~(((/* implicit */int) arr_53 [i_1] [i_16] [i_1])))) : (((/* implicit */int) arr_46 [i_1] [i_1] [i_1] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_11 [i_1 + 3] [9ULL] [(_Bool)0] [i_16] [i_17] [i_18])) ? (arr_11 [(short)18] [i_2] [i_2] [i_16] [i_17] [12ULL]) : (arr_11 [13ULL] [4ULL] [i_2] [i_18 - 1] [i_2] [i_1])))));
                    }
                }
            }
            for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                var_45 &= ((/* implicit */int) 3577739683676477906ULL);
                /* LoopNest 2 */
                for (long long int i_20 = 2; i_20 < 18; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_46 *= ((/* implicit */signed char) ((unsigned short) -20LL));
                            arr_69 [i_1] [i_2] [i_19] [i_20 - 1] [i_21] &= ((/* implicit */signed char) ((unsigned short) arr_50 [(signed char)18] [(signed char)18] [i_2] [i_20] [i_20 - 2]));
                            var_47 &= ((/* implicit */signed char) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) max(((short)11733), (((/* implicit */short) (_Bool)1))))))));
                            arr_70 [i_1 + 2] [i_2] [i_19] [i_20] [i_21] [6] &= ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-90)), (arr_1 [(signed char)15])));
                        }
                    } 
                } 
            }
            arr_71 [i_1 + 1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_29 [i_2])) ? (((/* implicit */int) arr_34 [i_1 + 1] [i_2] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_34 [i_1] [i_2] [i_2] [i_1])))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
        {
            arr_76 [i_1] [i_1 - 1] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3989218650U)) ? (((/* implicit */int) (short)-11468)) : (-1597521221)));
            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_27 [(unsigned char)9] [(unsigned char)9] [i_22] [i_22])) : (((/* implicit */int) (short)32767)))))))))));
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 19; i_23 += 3) 
            {
                for (long long int i_24 = 0; i_24 < 19; i_24 += 1) 
                {
                    {
                        arr_82 [i_1] [i_22] [3ULL] [i_24] [i_23] [i_22] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_23])), (((unsigned long long int) max((((/* implicit */int) (unsigned short)18422)), (1597521226))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_25 = 2; i_25 < 16; i_25 += 3) 
                        {
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)78)) ? (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-101)))) : (((/* implicit */int) (signed char)-13)))))));
                            var_50 = ((/* implicit */unsigned int) arr_81 [i_1] [i_23] [i_1] [i_1] [(signed char)4] [i_1]);
                        }
                        arr_85 [i_23] [(short)6] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) + (arr_67 [i_24] [i_23] [i_22] [i_1 + 3] [i_1 + 3])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32739))) : (arr_67 [i_1 - 1] [i_22] [i_23] [i_23] [i_24]))) : (((arr_67 [i_22] [i_23] [i_22] [i_22] [i_1]) << (((8124186798254614135ULL) - (8124186798254614105ULL)))))));
                    }
                } 
            } 
            var_51 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) (short)11467))));
        }
    }
    for (unsigned int i_26 = 2; i_26 < 21; i_26 += 3) 
    {
        arr_88 [i_26] [i_26] = ((((/* implicit */_Bool) min(((+(arr_87 [7U]))), ((+(arr_87 [i_26])))))) ? (((/* implicit */unsigned long long int) arr_86 [i_26])) : ((-(((((/* implicit */_Bool) (unsigned char)188)) ? (12408778032829853355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        arr_89 [i_26] [i_26] = ((/* implicit */int) min((((((unsigned long long int) (_Bool)1)) / (((/* implicit */unsigned long long int) arr_86 [i_26])))), (((/* implicit */unsigned long long int) max(((~(arr_86 [17ULL]))), (((/* implicit */int) var_3)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_27 = 3; i_27 < 10; i_27 += 3) 
    {
        var_52 = ((/* implicit */unsigned long long int) arr_0 [i_27 - 1]);
        var_53 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_51 [i_27 - 2] [i_27] [i_27] [i_27 + 3] [18] [(_Bool)0] [2LL])) : (((((/* implicit */_Bool) 8516070906848149364ULL)) ? (((/* implicit */int) (short)13)) : (((/* implicit */int) (short)22))))));
        /* LoopNest 2 */
        for (unsigned int i_28 = 1; i_28 < 12; i_28 += 1) 
        {
            for (signed char i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                {
                    arr_97 [i_28] [i_28] [i_28] [i_28] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_90 [i_27])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_27 + 2] [i_28] [i_28] [i_28 + 1])) ? (((/* implicit */int) arr_38 [i_27 - 2])) : (((/* implicit */int) (short)21014))));
                    var_55 = ((/* implicit */unsigned long long int) min((var_55), ((~(((((/* implicit */_Bool) arr_75 [i_28 + 1])) ? (1270793939041553468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    }
    var_56 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)32764)), (7700717710953867858ULL)));
    var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (1307180384)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3989218624U)));
}
