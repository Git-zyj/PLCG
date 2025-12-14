/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82838
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
    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((var_5) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))) : (((long long int) 0ULL))))));
    var_21 = ((/* implicit */long long int) ((min((((/* implicit */int) var_9)), (24483875))) ^ (((int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 24483875)) ? (24483875) : (((/* implicit */int) arr_0 [6] [i_0]))))) ? (max((-9223372036854775807LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))), (((/* implicit */long long int) ((signed char) (unsigned char)101)))));
        arr_3 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10566253580457856457ULL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) || (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])))))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))) + (min((((/* implicit */long long int) ((unsigned char) arr_1 [1LL]))), (((long long int) 0))))));
        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (((5213652450499734164ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_2);
        var_24 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (6592314413207330870ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [4ULL])) == (((/* implicit */int) arr_5 [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_12)))))), (((((/* implicit */_Bool) arr_5 [4ULL])) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (24483875) : (((/* implicit */int) arr_5 [i_1])))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_4 [i_1])), (11565996378249880499ULL))), (((/* implicit */unsigned long long int) min((-1823499945), (((/* implicit */int) arr_4 [i_1])))))))) ? (((((((/* implicit */_Bool) (unsigned short)50299)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1]))) == (arr_7 [i_2 + 2] [i_2 + 1])));
        /* LoopSeq 4 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            var_26 = ((long long int) arr_4 [i_2 + 1]);
            arr_13 [i_2] [i_3] [7U] &= ((/* implicit */unsigned char) var_1);
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2166375608U))))));
                arr_17 [(signed char)3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_3 + 2])) : (((/* implicit */int) arr_4 [i_2]))));
                arr_18 [i_3 - 2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 1552840188U)) + (arr_12 [(signed char)10] [5ULL]))) >> (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) 1823499944)) : (2391736329U))) - (1823499936U)))));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_21 [i_2] [i_3 - 2] [i_3 + 3] [i_4] [i_4 + 2] [i_3 - 2] |= ((((/* implicit */_Bool) ((long long int) arr_14 [3ULL] [i_3] [i_3]))) ? (((((/* implicit */_Bool) 2128591688U)) ? (((/* implicit */int) var_4)) : (-1964619799))) : (((((/* implicit */int) (unsigned short)25940)) % (((/* implicit */int) (unsigned char)101)))));
                    var_28 += ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) 1LL)));
                }
                for (long long int i_6 = 3; i_6 < 14; i_6 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((arr_7 [i_3 + 2] [3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_30 = arr_22 [i_3] [i_3] [i_6];
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_27 [i_3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (7880490493251695158ULL) : (arr_12 [(signed char)5] [i_3])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (-6682305997814349420LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1LL)) ? (-1823499945) : (-1185798364))))));
                    var_31 ^= ((/* implicit */signed char) 7880490493251695159ULL);
                    var_32 = ((/* implicit */signed char) (unsigned short)61394);
                    var_33 = ((/* implicit */long long int) arr_25 [i_2] [i_3] [i_7] [(unsigned char)11]);
                }
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_34 = ((/* implicit */int) ((arr_28 [(signed char)14] [(signed char)14] [i_8] [i_8]) >= (arr_28 [(unsigned char)13] [2LL] [i_8] [i_8])));
                    arr_31 [i_8] [i_8] [i_4] [i_8] [i_2] = (-(((/* implicit */int) arr_15 [1LL] [i_3 + 3] [i_2 - 2] [i_4 + 3])));
                    arr_32 [i_4] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) == (726860055400240862ULL)));
                }
                var_35 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3037626399U)) ? (((/* implicit */long long int) var_13)) : (1LL))))));
            }
        }
        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
        {
            var_36 |= ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (-1LL) : (((/* implicit */long long int) arr_29 [(signed char)1] [i_9] [(signed char)1] [i_9] [i_2 - 1] [i_2]))));
            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 1086098219))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)117))))) : (((/* implicit */int) (signed char)127))));
        }
        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2359007784U)) * (arr_24 [i_2] [i_2] [11LL] [i_2]))) >= (arr_25 [6] [i_2 - 2] [i_2] [i_10])));
            arr_38 [i_2] |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_19 [i_2 + 2] [i_10] [i_2 + 1] [i_10] [i_10] [i_2])))));
            var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) var_14))))) % (((((/* implicit */_Bool) 10200014852174357195ULL)) ? (arr_34 [i_10]) : (((/* implicit */unsigned long long int) var_5))))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) arr_14 [i_10] [3] [9LL]);
                arr_41 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2 + 2] [i_10] [i_11] [i_11])) ? (arr_39 [i_2 + 3] [i_10] [i_10] [i_11]) : (var_10)));
            }
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
        {
            var_41 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 811952706U)) ? (arr_25 [2ULL] [(signed char)6] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_13)))));
            arr_44 [0U] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) >= (arr_28 [i_2] [i_2 - 2] [i_2] [i_12])));
            var_42 = ((/* implicit */unsigned int) arr_16 [i_12] [i_12] [i_12]);
            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((unsigned long long int) 32512LL)))));
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_42 [i_12]))));
        }
        arr_45 [i_2] [i_2] = ((unsigned int) arr_33 [i_2] [i_2] [i_2]);
    }
    var_45 = ((/* implicit */unsigned long long int) var_9);
    var_46 = ((/* implicit */unsigned int) var_0);
}
