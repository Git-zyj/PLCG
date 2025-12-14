/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64053
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) (signed char)89))))))))));
    var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_15)) || ((_Bool)1))) || ((!(((/* implicit */_Bool) (short)-23977)))))) ? (max((((int) (_Bool)0)), ((((_Bool)1) ? (((/* implicit */int) (short)-28077)) : (807925004))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)20888)) || (((/* implicit */_Bool) var_4)))) && (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [17] [11]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (var_8)))) : (((arr_1 [i_1] [i_0]) & (((/* implicit */int) arr_0 [i_1])))))) : (((((((/* implicit */int) (short)2065)) | (((/* implicit */int) var_3)))) | (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) ((-1068819886) & (((/* implicit */int) arr_2 [i_0]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((+((((_Bool)1) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (signed char)119)))))) - (min((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((unsigned char) var_7))))))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((int) (!(((/* implicit */_Bool) arr_13 [i_0] [15] [i_2] [i_3] [i_4]))))) % (((/* implicit */int) min((arr_14 [(signed char)6] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]), (((/* implicit */short) var_6)))))));
                            arr_18 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0])) % (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_0 [i_3]))))) ? (-2027741319) : (-1152271926)))));
                            var_21 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-22234))))) ? (1068819894) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_4] [0])) != (((/* implicit */int) (short)27225))))))) ^ (((/* implicit */int) (signed char)43))));
                            var_22 = ((/* implicit */int) var_13);
                        }
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)28586)) - (28569)))));
                            arr_22 [i_0] [(signed char)0] = ((/* implicit */signed char) var_15);
                            var_24 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_5] [i_2] [i_5 + 4] [i_3] [i_1 - 1]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 -= var_13;
                            arr_25 [i_0] = ((/* implicit */unsigned char) (((~(((((/* implicit */int) (signed char)100)) & (((/* implicit */int) arr_0 [i_0])))))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_2 - 2])) == (((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 2])))))));
                            var_26 = ((/* implicit */short) ((((((((/* implicit */int) (short)28584)) * (((/* implicit */int) var_10)))) % (((((/* implicit */int) (short)32765)) / (((/* implicit */int) arr_19 [i_0] [i_2] [i_1] [i_0])))))) < (((/* implicit */int) (unsigned char)126))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)2065))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_29 [(signed char)2] [i_3] [(signed char)0] [i_7])) : (((/* implicit */int) arr_13 [(signed char)17] [(signed char)2] [i_2] [i_3] [i_7]))))) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_24 [i_1 - 1] [i_2 - 3]))));
                            arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((1506580954) < (((/* implicit */int) (_Bool)1))));
                            arr_31 [i_0] [i_0] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */signed char) arr_20 [i_0] [i_1 + 1] [i_2 - 3] [i_2 - 3] [i_3] [(short)15]);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2))))) : (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_5 [i_2]))))));
                        }
                        arr_32 [i_0] [i_0] [(_Bool)0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2621)) || (((/* implicit */_Bool) var_9))));
                    }
                    arr_33 [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((short)22622), (var_3)))) >> (((((/* implicit */int) (short)28077)) - (28060))))) < (((/* implicit */int) ((((/* implicit */int) (short)-29249)) <= (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_29 += ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [i_8] [(signed char)16] [i_1] [(signed char)16] [i_1 - 3])));
                        var_30 = ((((/* implicit */int) arr_14 [15] [(signed char)12] [(signed char)12] [(signed char)12] [i_2 - 1] [i_8])) + (((/* implicit */int) arr_6 [3] [i_2] [i_8])));
                        var_31 = (-(((/* implicit */int) arr_23 [i_0] [i_1 - 3] [i_0] [i_2 - 3] [i_8])));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-112)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        arr_40 [i_0] [i_1 - 1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_2 - 2] [(short)3] [i_1] [i_1 - 3] [i_1])) / (((/* implicit */int) arr_11 [i_2 - 2] [i_0] [i_2 - 2] [i_0] [(_Bool)1]))));
                        arr_41 [i_0] [i_1] [5] [i_0] [5] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (((+(((((/* implicit */_Bool) (short)-21319)) ? (((/* implicit */int) (signed char)111)) : (-1011999564))))) > (((/* implicit */int) (!(var_7)))))))));
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */int) (signed char)-36)) & (((/* implicit */int) var_2)))) : (min((((/* implicit */int) (unsigned char)25)), (1506580941)))))) ? (((((/* implicit */int) max((arr_43 [i_0] [i_1 - 3] [i_1] [i_2] [i_10] [i_11]), (arr_7 [i_1] [i_2] [i_2])))) ^ (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_24 [i_11] [i_10])))))) : (((((/* implicit */int) arr_3 [(signed char)17] [i_1 - 2])) | (((/* implicit */int) arr_3 [i_2 - 1] [i_1 - 2]))))));
                            var_34 *= (((~(((/* implicit */int) ((signed char) (signed char)39))))) / (((int) arr_7 [i_1 - 2] [(signed char)14] [i_2 - 1])));
                            var_35 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (signed char)-4))) == (((var_11) + (((/* implicit */int) var_6))))));
                        }
                        for (short i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)30)), (arr_9 [i_12] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) var_1))) : (((int) arr_7 [(signed char)15] [i_10] [i_2]))))) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)68)))))))));
                            arr_53 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) arr_6 [i_2] [4] [i_2])))) ? (((/* implicit */int) ((short) arr_29 [2] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((short) (signed char)99)))))));
                            var_37 = ((/* implicit */int) max((((signed char) var_7)), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))) >= (((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [(short)17] [i_2] [i_10] [i_12])) : (((/* implicit */int) arr_23 [(short)9] [i_1 - 1] [(_Bool)1] [i_1] [i_1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (_Bool)1))));
                            arr_58 [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_57 [i_2 + 1] [i_0] [i_2 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            var_39 |= ((/* implicit */signed char) (_Bool)0);
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    var_40 = min((((((/* implicit */int) (signed char)-60)) / (((/* implicit */int) (short)24089)))), (((((/* implicit */_Bool) ((short) var_4))) ? ((+(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0])))) : (((((arr_39 [i_0] [i_0] [i_1] [i_1] [i_14]) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
                    arr_61 [i_0] [i_0] = ((/* implicit */short) (!(((_Bool) (+(1506580973))))));
                    var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)92))));
                    var_42 *= (short)(-32767 - 1);
                    arr_62 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_59 [i_0]))) ? (min((2147483647), (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_38 [i_14] [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_14] [i_0])) ? (((/* implicit */int) var_2)) : ((-2147483647 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_0] [i_1] [(signed char)3] [i_0] [i_1])) | (((/* implicit */int) arr_54 [i_0])))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_20 [4] [i_14] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) (signed char)-4))))) + (((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */int) (short)-22743)) + (22762))) - (19)))))))));
                }
                /* LoopSeq 2 */
                for (int i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_16 = 3; i_16 < 18; i_16 += 2) 
                    {
                        for (int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */int) var_8);
                                arr_72 [i_16] [i_1] [i_15 - 1] [i_16 + 2] [i_0] = ((/* implicit */int) ((max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (short)24089)) ? (var_11) : (((/* implicit */int) var_7)))))) == (((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483638))) + (36)))))) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (8159))))) : (((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    arr_73 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_15] [(signed char)3] [i_15] [i_15 + 1] [(short)7]))));
                    var_44 = (~(((((/* implicit */int) arr_42 [i_1 - 1] [(short)15] [i_15] [(short)15])) | (((/* implicit */int) arr_42 [i_1 - 1] [i_15] [i_15] [i_15])))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_76 [i_0] [i_0] [(short)6] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) var_7))))) + (((/* implicit */int) arr_34 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */short) (((-(arr_49 [i_20] [(signed char)15] [i_18] [i_18] [i_1 + 1] [i_0]))) >> (((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_49 [i_0] [i_19] [i_0] [(short)18] [i_0] [(_Bool)1]) : (((/* implicit */int) arr_16 [i_20] [i_19] [i_18] [(short)15] [i_0])))) + (1852379145)))));
                                arr_82 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) (unsigned char)77)) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_79 [i_0] [(short)0] [i_18] [i_19] [i_20])) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((int) var_11))) ? (((((/* implicit */int) var_7)) + (var_0))) : (((/* implicit */int) max(((short)28077), ((short)-24253)))))) : (((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (signed char)84))))))));
                                arr_83 [i_0] [i_1] [(signed char)18] = ((/* implicit */signed char) min(((~(max((1073741823), (((/* implicit */int) arr_7 [i_20] [i_18] [i_0])))))), (((/* implicit */int) var_3))));
                                var_46 = ((/* implicit */short) 1717952068);
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */signed char) var_11);
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (((-(arr_47 [14] [i_1 - 2] [i_1 - 2]))) + (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)6981)))) + (((/* implicit */int) ((short) arr_11 [i_0] [(short)2] [i_18] [i_18] [(unsigned char)0]))))))))));
                }
            }
        } 
    } 
}
