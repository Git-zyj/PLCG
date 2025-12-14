/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68170
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!((_Bool)1)))) ^ ((-(((/* implicit */int) var_9)))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [5LL] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (signed char)-8))));
            var_21 = ((arr_6 [i_0]) ? (((((/* implicit */unsigned long long int) 2099014448U)) - (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
            var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_5 [i_1]));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) var_8);
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned int) var_18))))) + (2195952847U)));
            arr_13 [i_0] [14U] |= ((/* implicit */unsigned int) (_Bool)1);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            arr_17 [i_3 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)90)))) : (((/* implicit */int) (signed char)-90))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_21 [4LL] [i_4] [i_3 + 1] [4LL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_3]))));
                arr_22 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_4]))));
            }
            arr_23 [i_0] [i_0] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_3] [i_3 + 1] [(_Bool)1])) & (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_31 [i_0] [i_0] = 18446744073709551596ULL;
                    var_25 = ((/* implicit */_Bool) ((arr_0 [i_3 + 1] [i_3 + 1]) >> (((/* implicit */int) var_9))));
                    var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_3 + 1] [(signed char)15] [(signed char)15]))));
                    arr_32 [(_Bool)1] [i_5] [i_3] [i_0] = (((!(var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_20 [i_0] [i_3] [i_5])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) (~(var_4)));
                    arr_36 [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
                    var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_17))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_0])))) : (((/* implicit */int) (_Bool)1))));
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_5] [i_3 + 1] [i_3]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7465310413097571637ULL)));
                }
                var_29 = ((/* implicit */unsigned char) (signed char)48);
                var_30 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                arr_42 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_40 [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (signed char)21))));
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_31 *= ((/* implicit */signed char) ((arr_10 [i_8] [i_8] [i_8]) ? (((5765441467077747537ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_3] [i_9]) == (arr_38 [i_0] [i_0])))))));
                    var_32 = ((/* implicit */_Bool) 18446744073709551600ULL);
                }
                for (unsigned char i_10 = 3; i_10 < 15; i_10 += 2) 
                {
                    arr_47 [i_0] [i_3] [i_8] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_48 [i_10] [i_10] [i_10 + 1] [i_10 - 1] &= ((/* implicit */signed char) (-(11133915002346879259ULL)));
                    arr_49 [i_0] [i_3 + 1] [i_8] [i_10 - 2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12716848190105077114ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_10] [i_3 + 1] [i_8]))))) ? (arr_35 [i_0] [i_0] [i_3 + 1] [i_3 + 1] [i_8] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12716848190105077114ULL)) && (((/* implicit */_Bool) 2099014448U))))))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3])) ? (14347141324700322736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11 - 1] [i_11 - 1] [1U] [i_3 + 1]))) : (((var_18) >> (((((/* implicit */int) var_2)) + (80)))))));
                    arr_52 [i_0] [i_3 + 1] [i_11] = ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (arr_6 [i_11 - 1])));
                        var_35 = ((unsigned long long int) (signed char)-38);
                    }
                    var_36 = (_Bool)1;
                }
                arr_57 [i_0] [i_0] [i_0] = ((((unsigned long long int) (_Bool)1)) << (((3218751561843769412LL) - (3218751561843769382LL))));
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)117)) << (((/* implicit */int) var_16))));
                var_38 = ((/* implicit */unsigned long long int) arr_45 [i_0] [i_13] [i_13]);
                var_39 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            arr_64 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_14] [i_14]);
            var_40 = ((/* implicit */long long int) min((var_40), ((((_Bool)1) ? (-5659101266875315827LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [(unsigned char)3] [i_0] [i_14])))))));
            var_41 ^= ((/* implicit */unsigned long long int) (~(arr_16 [i_0])));
            var_42 |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_30 [i_14] [i_14] [i_0] [i_0])) * (((/* implicit */int) var_13)))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2195952853U)) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_65 [i_0] [14ULL] [i_0]))))) | (min((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0])), (5765441467077747558ULL)))))));
            arr_68 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
        }
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        var_44 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
        var_45 = ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_16 - 1]) != (arr_3 [i_16 - 1]))))) : (max((arr_3 [i_16 - 1]), (arr_3 [i_16 - 1]))));
        var_46 = ((/* implicit */signed char) arr_56 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16]);
    }
}
