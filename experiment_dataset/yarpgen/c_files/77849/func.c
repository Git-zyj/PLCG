/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77849
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 + 2] [i_1 + 2])) >> (((((/* implicit */int) (signed char)65)) - (59)))))) ? (((((((/* implicit */int) ((short) (signed char)-19))) + (2147483647))) >> (((((((/* implicit */_Bool) var_8)) ? (3973494758U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5467))))) - (3973494755U))))) : (((/* implicit */int) ((signed char) var_8)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))) <= (((((/* implicit */_Bool) ((short) var_1))) ? (321472538U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_3 [i_3] [i_3] [i_3])))))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_1 + 3] [i_1 + 3])))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_0] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)102)))) : (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 + 1])))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_4);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (short)4812))));
                        }
                        arr_16 [(short)5] [(unsigned short)1] [i_4] [i_4] = var_1;
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_5)))));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [9LL] [i_6 + 1] [i_1] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) 919763303U)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-77)) : (arr_1 [i_7])))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_20 ^= arr_10 [i_0] [i_1 + 2] [i_2];
                            var_21 *= ((/* implicit */unsigned char) ((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
                            arr_24 [i_8] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)-19810);
                        }
                        var_22 -= ((/* implicit */signed char) ((arr_18 [i_1 + 1] [i_6 + 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_6 [(short)5] [i_1] [(short)5] [i_6 + 1])) - (14))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))) != (((/* implicit */int) (signed char)63)))))));
                        var_24 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 264241152U)) ? (var_5) : (((/* implicit */int) var_8)))))));
                        arr_25 [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_6]) / (((/* implicit */long long int) arr_2 [i_1 + 3] [i_2]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [0U] [9] [9] [9])) : (((/* implicit */int) arr_10 [i_1 - 1] [i_2] [(signed char)6])))) : (((/* implicit */int) var_8))));
                    }
                }
                arr_26 [(unsigned char)7] [(signed char)9] = ((/* implicit */signed char) (unsigned char)127);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 4; i_10 < 21; i_10 += 3) 
        {
            for (long long int i_11 = 3; i_11 < 21; i_11 += 2) 
            {
                {
                    arr_35 [i_10] [i_11] [(signed char)16] [9LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((long long int) 16303240391073331889ULL))));
                    var_25 ^= ((/* implicit */unsigned char) min((arr_27 [(short)12]), (((/* implicit */long long int) ((short) ((((/* implicit */int) var_0)) / (2147483647)))))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) arr_30 [i_9] [i_9]);
        /* LoopNest 3 */
        for (unsigned int i_12 = 3; i_12 < 21; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)17392)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214))))))) % ((+((-(((/* implicit */int) (short)-8831))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)214)) << (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)153)) : (-26))) : (((/* implicit */int) ((signed char) (unsigned short)42700)))))), (((((/* implicit */_Bool) arr_34 [i_12 - 2] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_8)) + (45)))))) : (var_10))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        var_29 |= ((/* implicit */short) (unsigned short)0);
        var_30 &= ((((/* implicit */_Bool) var_10)) ? (((arr_42 [i_15] [i_15] [1ULL] [i_15] [i_15]) << (((arr_42 [i_15] [i_15] [i_15] [i_15] [i_15]) - (2009760308U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
    {
        arr_47 [(unsigned short)1] &= ((/* implicit */signed char) ((short) var_10));
        arr_48 [i_16] [i_16] &= ((/* implicit */unsigned short) 321472537U);
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            var_31 += ((unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) (unsigned short)13657))));
            arr_53 [i_17] = ((/* implicit */signed char) var_3);
            var_32 += ((/* implicit */long long int) ((((unsigned int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-952978902), (805306368)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)13)))))))));
            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_51 [i_16] [i_16]))))) ? (min((arr_36 [i_17] [i_17]), (((/* implicit */long long int) var_12)))) : (((var_4) % (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))))))) && (((/* implicit */_Bool) (~((~(4196651072U))))))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) var_4))));
        }
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((arr_46 [i_16]) << (((((/* implicit */int) var_8)) + (48))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (var_7))))))))))));
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-27)), ((short)-30591)))) && (((/* implicit */_Bool) 2379691395480442680LL)))))));
        }
    }
    for (int i_19 = 4; i_19 < 22; i_19 += 3) 
    {
        arr_58 [i_19 + 1] &= ((/* implicit */int) var_7);
        /* LoopSeq 1 */
        for (unsigned char i_20 = 2; i_20 < 19; i_20 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 1; i_21 < 22; i_21 += 3) 
            {
                arr_64 [14LL] [i_20 + 2] [i_21 + 1] = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) -416735002)) ? (((/* implicit */int) (short)-32767)) : (207144364))))));
                var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-111)), ((~(var_4)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)80))))))) : (((/* implicit */int) ((short) (~(var_11)))))));
            }
            for (short i_22 = 4; i_22 < 20; i_22 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    var_38 = ((((/* implicit */_Bool) 6291456U)) ? (((((/* implicit */int) var_9)) << (((/* implicit */int) ((((/* implicit */_Bool) 1532931332)) && (((/* implicit */_Bool) 416735002))))))) : (((/* implicit */int) (signed char)-1)));
                    /* LoopSeq 1 */
                    for (signed char i_24 = 3; i_24 < 20; i_24 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) ((min((((arr_71 [10LL] [17LL] [(unsigned short)12] [i_23] [i_24 - 3]) >> (((((/* implicit */int) var_8)) + (97))))), (((/* implicit */unsigned long long int) ((arr_59 [i_19 - 2] [i_24]) / (arr_59 [i_20] [i_20])))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31466)) << (((((-1180564095) + (1180564114))) - (7))))))));
                        var_40 *= ((/* implicit */signed char) arr_62 [i_23] [i_20] [18]);
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_4), (7365434220337652460LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)118)), (934060070012158744ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_62 [i_22] [i_22] [19U]))))) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_56 [i_23]))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)15777)))) / (var_5))))));
                    }
                    arr_72 [i_19] [i_19] [i_20] [3U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_19 + 1] [i_19 - 3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> ((((~(((/* implicit */int) arr_69 [i_20] [i_20])))) + (5360))))))));
                }
                var_42 = ((((((/* implicit */int) arr_63 [i_19] [(short)0] [i_19])) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [(unsigned char)16] [12LL] [i_20] [12LL] [i_22] [i_22 - 4]))))))) - (29970))));
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [(unsigned char)12] [(unsigned char)10])) ? (((/* implicit */int) (short)-3441)) : (arr_59 [i_22] [i_20])))) : (((((/* implicit */_Bool) arr_61 [i_19] [i_19] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [9ULL]))) : (var_4))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23055)) ? (((/* implicit */int) (signed char)3)) : ((+(((/* implicit */int) (signed char)1))))))))))));
                /* LoopSeq 3 */
                for (int i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    var_44 = ((/* implicit */int) ((unsigned short) ((unsigned short) arr_66 [i_20 + 4] [(unsigned char)10] [i_20 + 4])));
                    arr_75 [i_25] [i_20 + 4] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -430165255)) ? (((/* implicit */int) arr_69 [(unsigned char)15] [i_25])) : (((/* implicit */int) var_6))))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_69 [i_19] [i_25])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (39))))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25570)) ? (((/* implicit */int) (unsigned short)12892)) : (((/* implicit */int) (unsigned char)142)))))))));
                    var_45 &= ((/* implicit */short) (~(min((arr_74 [i_19 + 1] [i_19 - 1] [i_19 - 2] [i_20 + 2] [i_22 - 1]), (arr_74 [i_19 - 2] [i_19 - 1] [i_19 - 1] [i_20 - 2] [i_22 - 3])))));
                }
                for (short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_27 = 2; i_27 < 21; i_27 += 3) /* same iter space */
                    {
                        var_46 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_20 - 2] [i_22 + 2] [i_19 - 4]))) != (4030726144U)));
                        var_47 -= ((/* implicit */short) (~(((/* implicit */int) arr_62 [i_20] [i_22 + 2] [i_27 + 1]))));
                        var_48 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (signed char)-19)))));
                        var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                    }
                    for (unsigned short i_28 = 2; i_28 < 21; i_28 += 3) /* same iter space */
                    {
                        arr_82 [(short)15] [i_20] [(short)12] [i_26] [i_28] &= ((((((/* implicit */_Bool) ((signed char) (short)3449))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-27163))))) : (((arr_74 [i_19] [i_20] [(short)21] [13LL] [8ULL]) / (7275253425778274162LL))))) % (((/* implicit */long long int) (-((-(-799800439)))))));
                        var_50 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_71 [i_19] [(signed char)14] [i_22] [(unsigned short)12] [i_28]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))))));
                        var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                    }
                    var_52 = ((/* implicit */int) (((~(((2481196971915490676LL) ^ (((/* implicit */long long int) 835311U)))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_61 [i_26] [i_19 - 1] [i_19])) & (arr_77 [i_19 - 1] [i_20 - 2] [i_22 + 1] [i_26]))))));
                    arr_83 [i_19 - 4] [i_19] [(unsigned short)14] [5] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) >> (((((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (short)23055)))) + (23083)))));
                }
                /* vectorizable */
                for (long long int i_29 = 0; i_29 < 23; i_29 += 2) 
                {
                    var_53 = ((/* implicit */long long int) ((unsigned short) arr_65 [i_20 + 1] [i_19 - 4]));
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_69 [i_20] [i_20])) : (((/* implicit */int) arr_68 [i_20 + 1] [(signed char)15] [i_19 - 3])))))));
                    arr_86 [(unsigned char)19] [i_20 - 2] [i_22] [i_29] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_77 [i_19] [i_19 - 4] [i_19 + 1] [i_19 - 1]))));
                    arr_87 [i_19] [i_19] [i_19] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_12))))) ? ((~(2689807800U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_69 [i_20] [i_22])))))));
                }
            }
            arr_88 [i_19 - 1] [i_19 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_19] [22ULL] [i_20] [i_19] [i_20])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
            /* LoopNest 2 */
            for (long long int i_30 = 3; i_30 < 21; i_30 += 2) 
            {
                for (signed char i_31 = 0; i_31 < 23; i_31 += 3) 
                {
                    {
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)-4)))))));
                        arr_93 [(unsigned short)2] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_30] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (arr_89 [i_19 + 1] [i_20 + 1] [i_30 - 2]) : (var_5))), (((/* implicit */int) ((((/* implicit */_Bool) arr_89 [i_19 - 3] [i_20 + 2] [i_30 + 1])) && (((/* implicit */_Bool) arr_89 [i_19 - 1] [i_20 + 2] [i_30 + 2])))))));
                        var_56 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)26)))))), (var_8)));
                    }
                } 
            } 
            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) + (var_11))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_89 [i_20] [i_19] [i_19]))))))), (((((/* implicit */int) (unsigned short)31473)) >> (((min((var_10), (((/* implicit */unsigned long long int) 215518727U)))) - (215518708ULL))))))))));
            var_58 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_65 [i_19 - 4] [i_20 + 2]))))) >> (((((((/* implicit */_Bool) min((var_2), (var_9)))) ? (max((var_4), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)23057)) : (((/* implicit */int) var_2))))))) + (10LL)))));
        }
    }
}
