/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86588
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)9213))) : (((2250290656232593326LL) + (2250290656232593335LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2250290656232593326LL)))))));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2250290656232593327LL), (2250290656232593326LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))) : ((-(((((/* implicit */_Bool) var_13)) ? (-2250290656232593323LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) (+(((long long int) -1LL))))) : (var_11)));
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_17 = ((/* implicit */short) ((arr_5 [i_1]) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_10)))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [14ULL] [i_2]))))) && (((/* implicit */_Bool) (-(var_12)))))))));
            var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) ((unsigned short) ((unsigned long long int) var_6))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_20 = ((/* implicit */int) var_2);
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_21 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 315898038U)))))) == (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (4LL)))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))));
                var_23 = ((/* implicit */short) var_8);
                arr_13 [i_4] [i_1] [i_4] = ((/* implicit */short) arr_8 [6ULL] [i_3] [i_4]);
            }
            for (short i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(-226099058))))));
                var_25 ^= ((/* implicit */signed char) 2147483647);
                var_26 *= ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_5))) > (1LL)))));
            }
            var_27 |= ((/* implicit */unsigned int) arr_17 [i_3] [i_1]);
            arr_18 [i_1] [i_1] = (short)-64;
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_28 = ((/* implicit */long long int) ((unsigned long long int) arr_20 [i_6]));
            /* LoopSeq 3 */
            for (short i_7 = 2; i_7 < 18; i_7 += 1) 
            {
                arr_24 [i_1] [i_1] = var_5;
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_6] [i_1]))) : (arr_5 [i_1])));
            }
            for (unsigned int i_8 = 2; i_8 < 18; i_8 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) var_4)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [(_Bool)1]))) - (var_4)))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (arr_28 [i_8 - 2] [i_8] [(unsigned char)17] [i_8])));
            }
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_32 -= ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_9] [i_9] [i_9] [i_9]));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) (_Bool)0);
                    var_34 *= ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_10 + 1]))));
                }
                for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) (!(arr_25 [i_6] [i_6])));
                    var_36 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 18446744073709551604ULL)) || ((_Bool)1))));
                }
                /* LoopSeq 1 */
                for (int i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (unsigned char)120)))));
                    var_37 += ((((/* implicit */_Bool) arr_28 [i_12 + 2] [i_12 - 1] [(_Bool)1] [i_12 - 1])) && (((/* implicit */_Bool) arr_28 [i_12 - 1] [i_12] [i_12] [i_12 + 3])));
                    arr_40 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_2))));
                }
                arr_41 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) -8286055924675630899LL)))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
            {
                arr_46 [i_6] [(signed char)18] [i_1] = ((/* implicit */short) var_12);
                var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                var_39 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) & ((-(arr_9 [i_1] [(signed char)1] [(signed char)1])))));
            }
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2250290656232593327LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                {
                    var_41 |= ((/* implicit */short) var_8);
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1])) ? (arr_22 [i_1] [i_14] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_43 = ((/* implicit */long long int) ((short) arr_50 [i_1] [i_15]));
                }
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned long long int) arr_43 [i_1] [15LL] [i_1] [i_1]);
                    var_45 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_16 [4] [4] [i_1] [i_16])) && (((/* implicit */_Bool) arr_34 [i_16] [i_6] [i_6] [i_1]))))));
                }
            }
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
            {
                var_46 *= ((/* implicit */short) ((17448710237544280986ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_9)))))));
                var_47 *= ((/* implicit */signed char) ((-2250290656232593349LL) - (arr_42 [i_1] [i_17])));
                var_48 = -3898634332255182728LL;
                var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1]))));
                var_50 = ((/* implicit */_Bool) min((var_50), (((((((/* implicit */int) var_5)) % (((/* implicit */int) (short)-16699)))) != ((~(((/* implicit */int) (signed char)-45))))))));
            }
        }
        /* vectorizable */
        for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 19; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_51 *= ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_20])) <= (((int) var_4))));
                        /* LoopSeq 3 */
                        for (int i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            var_52 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)120)))));
                            arr_67 [i_1] [i_1] [i_1] [i_1] [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-10782)) < (1893695124))))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) /* same iter space */
                        {
                            var_53 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_10)) ? (-2250290656232593327LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_52 [i_18] [i_19] [i_19] [i_20])) + (32495))) - (27)))));
                            arr_70 [i_22] [(short)10] [i_1] [i_19] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        }
                        for (unsigned int i_23 = 0; i_23 < 19; i_23 += 3) /* same iter space */
                        {
                            arr_74 [i_1] [i_18] [i_19] [i_18] [i_20] [i_1] [i_23] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_16 [i_1] [(short)9] [i_1] [i_20])) : (((/* implicit */int) var_6))))));
                            arr_75 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_5)))));
                            var_54 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) <= (arr_11 [i_1] [i_19] [i_1] [i_1])));
                        }
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) (unsigned char)0))));
            arr_76 [i_1] = ((/* implicit */unsigned char) 2U);
            var_56 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)0)))));
        }
        arr_77 [i_1] [i_1] = ((/* implicit */unsigned long long int) 0U);
    }
}
