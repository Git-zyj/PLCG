/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84528
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
    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9))))) ? ((+(var_10))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-122)) % (((/* implicit */int) var_11)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_17 ^= ((/* implicit */short) (+(var_0)));
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 2])) | (((/* implicit */int) arr_2 [7LL]))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 + 2]))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 24; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) var_14))));
                var_21 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)-108)) + (2147483647))) << (((((/* implicit */int) (unsigned char)21)) - (21)))))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0 + 3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-20874)) + ((-(((/* implicit */int) (short)-24205))))));
                        arr_18 [i_0] [i_3] [i_3 + 1] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1307100665823632878LL))));
                        var_22 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-24186)) && (((/* implicit */_Bool) (unsigned char)188))))) >> (((((/* implicit */int) var_11)) + (124)))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        arr_21 [(unsigned char)8] [i_3] [i_3 + 1] [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 8141858241947002638LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20874))) : (var_10)));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [(unsigned char)21] [21LL] [i_3 - 1] [i_4] [i_6])) - ((+(((/* implicit */int) (unsigned char)205))))));
                        arr_22 [i_0] [(unsigned char)13] [(unsigned char)13] [i_3] [(unsigned char)11] [i_6] [(unsigned char)13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)20875))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16714)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24203))) : (684331743883528374LL)));
                        arr_27 [(short)0] [(unsigned char)6] [i_2] [i_3] [(unsigned char)6] [i_4] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)195))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_30 [i_3] [i_2] [i_3 + 1] [i_4] [(short)20] = ((/* implicit */unsigned char) (short)20868);
                        arr_31 [i_3] [i_3] = var_8;
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0 - 1] [i_3 + 1] [i_3] [i_4] [i_0 + 2])) + (((/* implicit */int) (short)16687))));
                    }
                }
                for (signed char i_9 = 3; i_9 < 24; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_9 + 1] [i_2] [i_2])) ? (((/* implicit */int) (short)-19801)) : (((/* implicit */int) (short)19840)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_38 [i_0] [i_3] [i_3] [i_9 + 1] [i_10] [i_2] [(unsigned char)17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_3 + 1] [i_9 - 1] [i_0 + 3] [i_9]))));
                        arr_39 [i_10] [(unsigned char)15] [i_3] [i_3] [i_2] [i_0 - 3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)20885)) : (((/* implicit */int) (short)-14199)))) != (((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)25))))));
                        arr_40 [i_3] [(signed char)10] [i_3 + 1] [i_9 + 1] [i_3] = ((/* implicit */unsigned char) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) ((-122855374804844878LL) > (var_1)))))));
                    }
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)-14199)) : (((/* implicit */int) (short)-19790))))) - ((+(8604212200017861225LL)))));
                    arr_41 [i_3] [20LL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)38))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 2) 
                    {
                        arr_44 [i_0] [(unsigned char)9] [i_3 + 1] [(unsigned char)9] [i_3] [(unsigned char)9] [i_11 - 2] = ((/* implicit */unsigned char) ((-8604212200017861240LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3])))));
                        arr_45 [i_3] = ((/* implicit */short) ((3952861731509759495LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_3 - 1] [i_3])))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                {
                    arr_48 [(unsigned char)24] [(unsigned char)24] [i_3] [i_12] [14LL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) arr_14 [i_12] [i_0 - 2]))));
                    var_29 -= var_9;
                    var_30 += ((/* implicit */unsigned char) var_10);
                    arr_49 [(unsigned char)17] [i_3] [i_12] = arr_0 [i_0 - 3];
                }
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 23; i_14 += 3) 
                    {
                        arr_55 [i_13] [i_2] [i_13] [i_13] [(unsigned char)6] [i_14] [(short)18] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_0] [7LL] [i_3] [(unsigned char)4] [i_0 + 3])) && (((/* implicit */_Bool) arr_52 [(short)8] [i_13] [i_3 + 1] [15LL] [i_14 - 1]))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_3 - 1] [i_3 + 1] [i_0 - 2])) * (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)14))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) -6311921597795629666LL);
                        arr_59 [i_0 + 3] [i_2] [(unsigned char)12] [i_3] [i_15] [i_3] [(short)14] = ((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6256768439687692688LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 3] [i_0]))));
                        arr_60 [i_0 - 2] [(unsigned char)7] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((8604212200017861223LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_33 &= ((/* implicit */unsigned char) (((-(7659215268926330850LL))) != (-8604212200017861240LL)));
                        var_34 = ((/* implicit */short) ((-8977735534663614943LL) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        arr_64 [i_0] [(signed char)9] [i_3 + 1] [i_3] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-18668)) || (((/* implicit */_Bool) -8977735534663614954LL)))) ? (var_3) : (arr_37 [i_0 + 2] [i_2] [i_0 + 2] [i_13] [i_16] [i_13] [i_16])));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        arr_69 [i_0 - 2] [i_2] [i_3 + 1] [i_13] [i_3] [i_17] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) (short)5595))))));
                        arr_70 [i_0] [i_2] [i_3] [i_3] [(short)20] = ((/* implicit */long long int) arr_36 [i_0 + 3] [i_2] [i_3] [i_13] [i_3]);
                    }
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28243)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) : (((1664071299407372028LL) | (((/* implicit */long long int) ((/* implicit */int) (short)13256)))))));
                        arr_74 [i_13] [i_13] [i_3 - 1] [(unsigned char)20] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) > (((/* implicit */int) (short)-20874))))))));
                    }
                    for (short i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        arr_77 [i_13] [i_2] [(short)7] [i_2] [i_19] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                        arr_78 [(short)18] [(unsigned char)14] [i_3 - 1] [i_13] [i_13] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)17)) ^ (((/* implicit */int) arr_57 [i_0 + 3] [i_3 + 1]))));
                        arr_79 [i_3] [(unsigned char)1] [i_3] = (~(8558459325287576071LL));
                    }
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_82 [i_20] [(short)5] [i_3] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) var_1));
                        arr_83 [i_0] [i_2] [(unsigned char)1] [i_3] [i_20] [i_3] = ((/* implicit */unsigned char) 505699894244585708LL);
                        arr_84 [i_0 + 2] [i_2] [i_3] [i_3] [24LL] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)82))))));
                    }
                }
            }
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0 - 3] [i_0 + 1] [i_2] [i_2]))) : (var_1)));
        }
        arr_85 [5LL] = var_12;
        arr_86 [i_0 - 2] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_0 + 3] [i_0] [(short)24] [i_0 - 2] [(unsigned char)14]))) : (var_10))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))));
        arr_87 [11LL] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [(short)19] [i_0 + 1]), (((/* implicit */short) var_7))))) : (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0 + 3]), (((/* implicit */short) var_11)))))));
        arr_88 [i_0 - 3] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) - (((/* implicit */int) max((((/* implicit */short) (unsigned char)107)), ((short)20583))))))) ? (var_3) : (((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) ^ (max((((/* implicit */long long int) (short)8897)), (5675144270754448024LL))))));
    }
    for (short i_21 = 3; i_21 < 22; i_21 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */signed char) var_13);
        arr_91 [i_21] = ((/* implicit */signed char) max(((+(((/* implicit */int) (short)20873)))), (((((/* implicit */_Bool) arr_53 [i_21] [i_21 + 2])) ? (((/* implicit */int) arr_71 [i_21 + 1] [i_21 - 1] [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_32 [i_21 + 3] [(unsigned char)17] [(unsigned char)17] [i_21 + 3]))))));
    }
    for (short i_22 = 3; i_22 < 22; i_22 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_22 + 3] [i_22 + 1] [i_22 - 3] [i_22] [i_22])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_89 [i_22] [(unsigned char)15])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24166)))))));
        arr_94 [i_22] [i_22] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)125))));
    }
}
