/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75639
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_2 [i_1 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_1 - 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_4)));
                        var_21 |= ((/* implicit */signed char) (+(18)));
                        var_22 = ((/* implicit */unsigned long long int) ((((-1) <= (2147483647))) ? (-1) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)0))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -5893859994666054668LL)) ? (((/* implicit */int) (signed char)27)) : (-2147483647)));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned short) var_5);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) var_8);
                            var_26 = (~((~(var_7))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_1 - 2] [i_2 - 1] [i_4] [i_5])))))));
                            var_28 -= ((/* implicit */unsigned char) var_11);
                        }
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_4 [i_2 + 1]))));
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_1 + 1] [i_0 + 3]))))) << (((min((3730660742U), (arr_8 [i_2 - 1] [i_1 + 1] [i_0 + 3]))) - (803406872U)))));
                            var_31 |= ((/* implicit */unsigned int) min((((-6907987176540394976LL) / (((/* implicit */long long int) 3730660719U)))), (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_2 + 1] [i_4] [i_4] [i_6]))));
                            var_32 |= ((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)52911), (((/* implicit */unsigned short) var_11)))))));
                            var_33 = ((/* implicit */unsigned long long int) ((-1) / (-2147483647)));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (1046175505368036015LL)));
                        var_35 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (21254276)));
                        var_36 = ((/* implicit */unsigned int) ((unsigned char) 2147483647));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_37 ^= ((/* implicit */short) (signed char)112);
                            var_38 = ((/* implicit */unsigned short) (((_Bool)1) ? (var_12) : (var_18)));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_39 = (short)0;
                        var_40 = ((/* implicit */int) ((short) var_13));
                    }
                    var_41 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_13)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (216172782113783808LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37161))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((int) arr_7 [i_0 + 3])))));
                            var_43 = ((/* implicit */signed char) var_16);
                        }
                        var_44 = ((/* implicit */short) arr_15 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_10] [i_10] [i_10]);
                    }
                    for (int i_12 = 3; i_12 < 20; i_12 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 + 1] [i_1] [i_1] [i_1] [i_2] [i_12 + 1]))))) & (((/* implicit */int) var_14))));
                        var_46 = ((/* implicit */unsigned long long int) (unsigned short)28374);
                    }
                    for (long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        var_47 = ((/* implicit */signed char) 2032964254);
                        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) var_3))));
                    }
                }
            } 
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((18446744073709551613ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) >> (0ULL))))))) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_14 = 4; i_14 < 9; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            {
                var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) - (((/* implicit */int) ((_Bool) 2147483647)))))) ? (((/* implicit */int) ((arr_24 [i_14 + 1] [i_14 + 1] [i_15]) && (((/* implicit */_Bool) 564306550U))))) : (((/* implicit */int) var_6)))))));
                var_51 = ((((/* implicit */_Bool) 1)) ? (var_9) : (4194303));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_52 += ((/* implicit */unsigned int) ((-33) == (32)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 4) 
            {
                var_53 = ((/* implicit */_Bool) (signed char)-1);
                var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) < (564306586U)));
            }
            for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                var_55 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) | (arr_23 [i_16] [i_17] [i_16] [i_19] [i_19] [i_16] [i_19])));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    var_56 |= ((/* implicit */long long int) arr_21 [i_19]);
                    var_57 &= ((/* implicit */unsigned long long int) ((long long int) var_16));
                }
            }
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 22; i_21 += 1) /* same iter space */
            {
                var_58 = ((/* implicit */unsigned int) (((((((+((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_9) - (442889664)))));
                var_59 = ((/* implicit */unsigned int) arr_21 [i_17]);
            }
            for (signed char i_22 = 0; i_22 < 22; i_22 += 1) /* same iter space */
            {
                var_60 = ((/* implicit */unsigned char) ((arr_13 [i_16] [i_17] [i_22] [i_22]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                var_61 = ((/* implicit */unsigned char) ((((-3733756804487891234LL) + (9223372036854775807LL))) << (0U)));
            }
        }
    }
}
