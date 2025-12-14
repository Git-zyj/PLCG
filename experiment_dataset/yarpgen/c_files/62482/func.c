/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62482
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
    var_12 *= (unsigned short)12784;
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_8), (((((/* implicit */_Bool) -900544997)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))))) > (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3472959697571381434ULL)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (unsigned short)6102)))))))));
    var_14 |= ((/* implicit */unsigned long long int) ((unsigned int) ((int) min((var_9), (((/* implicit */short) var_7))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((long long int) (unsigned short)59411))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [0ULL] [i_2] [i_4] [i_4 - 1] = (~(arr_5 [i_2 - 2]));
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)59411))));
                            var_17 = ((/* implicit */int) var_0);
                            arr_15 [i_1] [i_4] = ((/* implicit */signed char) (-(arr_11 [i_4 + 1] [i_4] [i_2 - 2] [i_3] [i_2 + 1])));
                            var_18 |= ((unsigned int) (~(arr_2 [i_1] [(signed char)23])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12787)) ? (((/* implicit */int) (short)-22543)) : (((/* implicit */int) (signed char)-95))))) ? ((~(((/* implicit */int) arr_3 [i_2 - 2] [i_1])))) : ((-(((/* implicit */int) arr_13 [i_5]))))));
                            var_20 = ((/* implicit */unsigned long long int) var_9);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_2] [i_2 - 1]))) <= (arr_19 [i_6] [i_5] [i_2 + 1])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 0LL)) : (13422440056312243790ULL)));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52736)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0])))));
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
        {
            var_24 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)59414))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 4; i_8 < 23; i_8 += 2) 
            {
                var_25 = ((/* implicit */signed char) (((~(437051725U))) >> (((arr_5 [i_8 + 1]) + (990776555)))));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) 
                {
                    arr_31 [(unsigned short)13] [i_7] [i_8 - 1] [i_9] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_8 [i_0] [i_0] [i_8] [i_9 + 2])) > (((/* implicit */int) arr_6 [i_0] [i_7] [i_8 - 2]))))));
                    var_26 = ((((/* implicit */int) var_4)) - (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_10 [i_0] [i_7] [i_8] [i_9] [i_9])))));
                }
                for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_1))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52752)) ? (((/* implicit */int) arr_10 [i_8 - 1] [i_10 - 1] [i_10 + 3] [i_10 + 4] [8])) : (((/* implicit */int) arr_10 [i_8 - 1] [i_10 - 1] [i_10] [i_10 + 4] [i_10])))))));
                    /* LoopSeq 4 */
                    for (long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        var_29 = 3384837691U;
                        arr_36 [i_0] [i_8 + 1] [i_11 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned short)52767)) : (arr_17 [i_8 - 2])));
                        arr_37 [14ULL] [(signed char)5] [i_10] [i_8 - 4] [19U] [i_7] [(signed char)5] = ((/* implicit */signed char) var_4);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_8 - 1])) <= (((/* implicit */int) arr_23 [i_8 + 1]))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_40 [i_0] &= ((/* implicit */signed char) -3038380900380908756LL);
                        var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        arr_44 [i_10 + 4] [i_8] [i_0] = ((((((/* implicit */unsigned int) var_11)) > (arr_11 [i_0] [i_7] [i_0] [i_13] [i_13]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8 - 3] [i_10] [i_10 - 1] [i_13] [i_13]))) : (arr_11 [i_0] [i_0] [i_8] [(signed char)18] [i_10 - 1]));
                        var_32 = (((~(arr_30 [i_13] [i_0]))) % (-9LL));
                    }
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */short) (~(686318859U)));
                        var_34 = ((/* implicit */long long int) ((unsigned int) ((3038380900380908726LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                        arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (signed char)-102));
                    }
                }
                for (signed char i_15 = 1; i_15 < 21; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_55 [i_16] [i_15] [i_8] [i_15] [i_0] = ((/* implicit */int) ((unsigned char) var_5));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_8 - 4] [i_8 - 4] [i_15 + 3] [i_15 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_8 - 2] [i_8 + 1] [i_8] [i_15 - 1]))));
                    }
                    var_36 = (+(((/* implicit */int) arr_9 [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15] [i_15] [(unsigned char)20])));
                    arr_56 [i_15 - 1] [i_8 + 1] [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) == (((unsigned int) arr_42 [i_15]))));
                }
            }
        }
        for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) ((17587996434897605590ULL) + (arr_26 [i_0] [i_0] [i_0] [i_17])));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
        }
        for (unsigned short i_18 = 3; i_18 < 23; i_18 += 4) 
        {
            arr_63 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 2] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)59426))));
            arr_64 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_0] [i_18 + 1] [i_18] [i_18 - 3] [i_18] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_18] [i_18 + 1] [(unsigned char)4] [i_0] [i_0]))) : (((((/* implicit */_Bool) 3038380900380908726LL)) ? (arr_32 [i_18] [(short)21] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6109)))))));
        }
        var_39 = ((/* implicit */unsigned int) (~(((867507414) ^ (((/* implicit */int) (unsigned short)59401))))));
        var_40 = ((/* implicit */signed char) var_1);
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)13795))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
        var_42 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_19] [i_19] [i_19] [i_19] [i_19]))))), (((((/* implicit */_Bool) ((long long int) var_5))) ? (max((((/* implicit */unsigned int) var_1)), (arr_57 [i_19] [(unsigned short)9] [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
    for (short i_20 = 0; i_20 < 23; i_20 += 1) 
    {
        arr_71 [i_20] = max((((((/* implicit */_Bool) 867507399)) ? (((/* implicit */int) arr_4 [i_20])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)59426)) < (((/* implicit */int) arr_59 [i_20] [i_20]))))));
        var_43 = var_1;
        var_44 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3748063952055086641LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)34131)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) < (((((/* implicit */_Bool) arr_0 [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_20] [20]))) : (var_0))))))));
    }
    var_45 = ((/* implicit */short) min((var_11), (((/* implicit */int) (short)-3701))));
}
