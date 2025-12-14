/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68859
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
    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (short)-6217)) : (((/* implicit */int) (signed char)100))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_11 &= ((/* implicit */short) (unsigned short)4);
        var_12 *= ((/* implicit */unsigned short) ((((arr_3 [i_0 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) >> ((+(((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_13 |= ((/* implicit */short) arr_2 [i_0 - 1]);
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_0 + 4])) == (((((/* implicit */_Bool) arr_7 [(unsigned char)8] [i_1 - 1] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0])) : (1093737968)))));
                    var_15 = ((/* implicit */int) arr_11 [i_3] [i_1 + 1] [i_1 + 1] [i_3]);
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 - 1]))));
                }
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned short) (~(((int) arr_9 [i_2] [i_4 - 1]))));
                    var_18 += ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                    var_19 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)-101)))) | (((/* implicit */int) ((signed char) var_7)))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 24; i_5 += 3) 
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) arr_0 [i_0] [i_5])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [14ULL] [i_5 - 1]))) == (arr_11 [i_0 + 1] [i_0] [i_0 + 2] [(unsigned short)12]))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [(_Bool)1] [i_1] [(_Bool)1] [i_1 + 1] [i_1]))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_2 - 1] [i_1] [23ULL]))) : (((((/* implicit */int) arr_10 [i_6] [i_1 + 1] [0U] [i_5])) - (((/* implicit */int) arr_8 [i_6] [14LL] [14LL] [i_0 - 1])))))))));
                        var_23 ^= ((/* implicit */long long int) ((signed char) ((long long int) arr_9 [i_5] [i_6 - 2])));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) (unsigned short)0)))));
                        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) (~(-1LL)))) ? (((((/* implicit */int) (short)16332)) & (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        var_26 -= ((/* implicit */signed char) (!(((_Bool) var_4))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
                        var_28 *= ((/* implicit */int) ((_Bool) arr_10 [i_1 + 1] [(unsigned short)12] [(unsigned char)8] [i_1 + 1]));
                        arr_24 [(signed char)20] [(signed char)20] |= ((/* implicit */unsigned short) (-(((var_7) ? (((/* implicit */int) arr_0 [i_0] [21])) : (((/* implicit */int) var_7))))));
                    }
                    for (signed char i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        var_29 ^= ((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (arr_6 [i_0] [(unsigned short)10])));
                        var_30 ^= ((/* implicit */unsigned int) 4303186882995571658ULL);
                        var_31 -= ((/* implicit */unsigned long long int) ((signed char) arr_14 [i_8 - 2] [i_8 - 1] [i_2] [i_2]));
                    }
                    for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned short) ((signed char) arr_7 [i_0] [i_1] [i_2 + 2] [i_5]));
                        var_33 -= ((/* implicit */signed char) ((arr_28 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]) == (arr_27 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 2])));
                    }
                }
                for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    var_34 += (~(arr_26 [i_10] [i_2 - 1] [(unsigned char)8] [i_2] [i_1 + 1]));
                    var_35 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 14143557190713979978ULL)))) || (((/* implicit */_Bool) -2663806309870304723LL))));
                    var_36 -= ((/* implicit */_Bool) var_3);
                }
                var_37 = ((/* implicit */short) min((var_37), (arr_0 [i_1] [i_2 + 1])));
                arr_31 [(_Bool)1] [i_2 + 1] [i_1 - 1] [(_Bool)1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [(short)6] [i_2]))));
            }
            for (int i_11 = 1; i_11 < 24; i_11 += 3) /* same iter space */
            {
                var_38 *= ((/* implicit */short) ((unsigned short) -1));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 2; i_13 < 24; i_13 += 4) 
                    {
                        var_39 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                        var_40 += ((/* implicit */unsigned int) var_9);
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (_Bool)1))));
                    }
                    var_42 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [(signed char)16] [i_12])))))));
                }
                for (unsigned char i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    var_43 *= ((/* implicit */short) ((((/* implicit */int) (signed char)-16)) + (arr_9 [i_0] [i_0 - 1])));
                    var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) >> (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) var_0)))) : (((var_1) | (((/* implicit */int) (signed char)34))))));
                    var_45 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) << (((unsigned long long int) (_Bool)1))));
                    var_46 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) 234881024U)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_9))))));
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) var_6))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_15 = 3; i_15 < 22; i_15 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */long long int) (~(((unsigned int) (_Bool)0))));
                    var_49 ^= ((/* implicit */unsigned short) (!(arr_3 [i_0 + 2])));
                    var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((arr_45 [i_11] [i_11] [i_11] [i_11 + 1]) < (((/* implicit */int) var_7)))))));
                    var_51 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) == (((unsigned int) (signed char)53))));
                }
                for (unsigned short i_16 = 3; i_16 < 22; i_16 += 3) /* same iter space */
                {
                    var_52 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)35))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 2; i_17 < 24; i_17 += 1) 
                    {
                        var_53 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1345388618U))));
                        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((arr_28 [i_0] [i_1] [i_11] [i_16] [i_17]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_52 [i_0 - 1] [i_1 - 1] [i_11 + 1] [i_16 - 1] [i_17 - 2] [i_17 + 1] [i_17])) : ((~(((/* implicit */int) arr_29 [i_16])))))))));
                        var_55 = ((/* implicit */long long int) max((var_55), (((long long int) 4303186882995571658ULL))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_18 = 3; i_18 < 23; i_18 += 4) 
                    {
                        var_56 ^= (~((~(((/* implicit */int) (_Bool)1)))));
                        var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-58)) ? (-3141278188099342845LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))))))));
                        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_11] [i_16 + 3] [i_0])) ? (((/* implicit */int) var_3)) : (arr_37 [i_18] [(signed char)12] [(signed char)12] [i_0]))))))));
                    }
                    for (unsigned char i_19 = 1; i_19 < 24; i_19 += 4) 
                    {
                        var_59 ^= ((/* implicit */unsigned short) (signed char)-35);
                        var_60 -= ((/* implicit */_Bool) arr_21 [(unsigned short)10] [i_1 + 1] [i_11 + 1] [i_16] [i_19]);
                        var_61 ^= ((/* implicit */long long int) ((unsigned long long int) var_3));
                    }
                    for (unsigned char i_20 = 2; i_20 < 23; i_20 += 3) 
                    {
                        var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)-64)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_56 [16LL] [16LL])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!((_Bool)1)))))))));
                        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_20 - 1] [i_16] [i_11] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_46 [i_0] [i_1] [i_16] [i_16])) : (((/* implicit */int) arr_22 [i_20] [i_16 + 1] [i_11 + 1] [i_1] [i_0])))))));
                        var_64 = ((/* implicit */unsigned char) min((var_64), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_12 [i_20 - 2] [i_16] [i_11] [i_1] [i_0 + 1]))) ? (((arr_11 [i_0] [i_0 + 3] [i_0] [(unsigned short)6]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))))) : (((/* implicit */unsigned int) (~(var_1)))))))));
                    }
                }
                var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) arr_12 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_1 + 1] [i_0 + 4]))));
                var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2978801276U)) ? (989459296U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
            }
            for (int i_21 = 1; i_21 < 24; i_21 += 3) /* same iter space */
            {
                var_67 = ((/* implicit */signed char) min((var_67), (((/* implicit */signed char) arr_29 [i_21]))));
                var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_1 + 1])))))));
                /* LoopSeq 2 */
                for (int i_22 = 3; i_22 < 23; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_23 = 2; i_23 < 23; i_23 += 3) 
                    {
                        var_69 *= ((/* implicit */short) 3141278188099342849LL);
                        var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
                    }
                    for (int i_24 = 1; i_24 < 23; i_24 += 3) 
                    {
                        var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_21] [i_21 - 1] [11] [i_21 - 1])) ? (((/* implicit */int) arr_46 [i_21] [i_21 - 1] [13U] [i_21])) : (((/* implicit */int) arr_46 [i_21] [i_21 - 1] [i_21] [i_21])))))));
                        arr_70 [i_0] [i_1] [i_21 - 1] [i_22] [2] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_21] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_0] [i_1] [i_21 + 1] [(short)15] [i_22 - 1] [i_24 + 2]))) : (442709147U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0] [i_0] [8LL] [i_0] [i_0])))));
                        var_72 &= ((/* implicit */unsigned char) ((short) arr_65 [i_21 - 1] [i_1 + 1] [i_21] [i_24 + 1] [i_24 - 1]));
                        var_73 *= ((/* implicit */_Bool) ((unsigned int) var_0));
                        var_74 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_34 [i_24 + 1]))));
                    }
                    var_75 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_61 [i_0] [i_1 + 1] [i_21] [i_22 - 1])) / (((/* implicit */int) (signed char)-1)))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        var_76 -= ((/* implicit */int) var_7);
                        var_77 -= ((/* implicit */unsigned short) var_8);
                        var_78 ^= ((/* implicit */unsigned short) arr_30 [(_Bool)1] [i_22] [i_21] [(unsigned short)6] [(_Bool)1]);
                    }
                }
                for (int i_26 = 3; i_26 < 24; i_26 += 1) 
                {
                    var_79 &= ((/* implicit */long long int) (_Bool)1);
                    var_80 *= ((/* implicit */unsigned int) var_5);
                }
            }
            var_81 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3259110623U)) ? (((/* implicit */int) (signed char)122)) : (-1592351152)));
            /* LoopSeq 1 */
            for (unsigned short i_27 = 2; i_27 < 21; i_27 += 4) 
            {
                var_82 &= ((/* implicit */long long int) ((signed char) (unsigned char)0));
                var_83 = ((/* implicit */unsigned short) min((var_83), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_1 - 1] [i_1] [i_27] [i_27 - 2] [i_27 - 1] [i_1])) ? (((/* implicit */int) var_9)) : (2147483647)))) | ((+(var_5))))))));
                var_84 *= var_6;
                var_85 ^= ((/* implicit */short) var_7);
            }
        }
    }
    var_86 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(18446744073709551607ULL)))) ? (((/* implicit */int) ((12371025333928709380ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
