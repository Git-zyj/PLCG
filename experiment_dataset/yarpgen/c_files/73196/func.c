/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73196
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_15 *= ((/* implicit */signed char) (~((~(-1200002746713148440LL)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_16 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) 1281625840)) : (4803046585448248497LL))) - (((/* implicit */long long int) var_8))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                var_17 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (((~(-1200002746713148440LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) > (1200002746713148440LL))))))))));
                var_18 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_10)))));
            }
            var_19 = ((/* implicit */long long int) var_8);
        }
        for (int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_4))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_22 = ((/* implicit */long long int) ((signed char) (~(-2137375400))));
                            arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [7U] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_23 = ((/* implicit */short) (-(-949732766325060507LL)));
                    }
                } 
            } 
            arr_18 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [(unsigned char)3] [(unsigned char)3] [i_3]);
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_3 - 2] [i_0] [i_0]);
        }
        var_24 = ((/* implicit */int) ((3071709103U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_24 [i_0] [i_7] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_9)), ((+(arr_2 [i_0 + 1])))));
            arr_25 [i_7] = ((/* implicit */unsigned char) var_3);
        }
        var_25 = ((/* implicit */unsigned char) (_Bool)0);
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_34 [i_9] = ((/* implicit */long long int) arr_0 [i_8] [i_8]);
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8] [i_9] [i_10]))))) & (((/* implicit */int) max((arr_32 [i_10] [i_10] [i_10]), (arr_32 [i_8] [i_8] [i_8]))))));
                }
            } 
        } 
        var_27 -= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) (unsigned short)16128))))), (((((/* implicit */_Bool) (short)-22684)) ? (17064054793486570634ULL) : (var_5))))) & (var_5)));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        arr_37 [i_11] [i_11] = ((/* implicit */unsigned int) arr_5 [i_11] [i_11] [i_11]);
        /* LoopSeq 2 */
        for (unsigned char i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_30 [i_11] [i_11] [i_11])))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_40 [i_11] [i_12 + 2] [i_12])) : (((/* implicit */int) arr_32 [i_11] [i_11] [i_11]))))));
            /* LoopSeq 2 */
            for (short i_13 = 3; i_13 < 9; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    var_29 = ((long long int) (-(arr_3 [i_11] [i_11] [i_11])));
                    arr_48 [i_12] [i_12] [(signed char)7] [i_12 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_12 - 1] [i_13 - 3] [i_14 - 1]))));
                    var_30 = ((/* implicit */unsigned int) ((int) arr_47 [i_14 + 2] [i_14 + 2] [i_13 + 2] [i_14 + 2]));
                }
                var_31 += ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_13]))) ^ (arr_3 [i_11] [i_12] [i_12])))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_16 [(unsigned char)10] [i_12] [(unsigned char)10] [4ULL] [i_13] [i_13]) == (1200002746713148439LL)))) < (((/* implicit */int) arr_14 [i_12] [i_12 - 2] [i_12] [i_12 - 2]))));
            }
            for (signed char i_15 = 2; i_15 < 10; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        {
                            arr_58 [i_11] [i_11] [i_11] [i_11] [(short)0] [i_11] = (~(11698631436048701919ULL));
                            var_33 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? ((-(3541162986146093026LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)109)) ? (arr_2 [i_12]) : (829792115U))))));
                            arr_59 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (short)2617);
                        }
                    } 
                } 
                arr_60 [i_11] [i_12] [i_12] [i_15] = ((/* implicit */signed char) var_9);
                var_34 *= ((/* implicit */_Bool) 2354006448U);
            }
            /* LoopSeq 1 */
            for (unsigned char i_18 = 1; i_18 < 8; i_18 += 1) 
            {
                var_35 *= ((/* implicit */_Bool) ((var_3) << (((arr_28 [i_12 - 1]) + (39438224)))));
                var_36 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_32 [i_11] [i_12 + 2] [i_18])))) ? (((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11] [i_12] [i_18 + 2])))))) : (((/* implicit */int) arr_14 [i_18 + 2] [(_Bool)1] [i_18 - 1] [i_18 + 1]))));
                var_37 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)19761))) == (2572359163U));
                arr_64 [i_11] [i_18] = ((/* implicit */long long int) 4092);
            }
            var_38 = ((/* implicit */unsigned char) (~(arr_2 [i_12 + 1])));
        }
        for (unsigned char i_19 = 2; i_19 < 9; i_19 += 1) /* same iter space */
        {
            arr_67 [i_11] [i_11] = ((((/* implicit */unsigned long long int) ((unsigned int) arr_46 [i_11] [i_11] [i_11] [(_Bool)1] [(unsigned char)9] [i_11]))) / (arr_29 [i_19 + 1] [i_19 + 2]));
            arr_68 [i_11] = ((/* implicit */short) (unsigned short)65519);
            var_39 = ((/* implicit */int) (!(((_Bool) var_3))));
        }
        arr_69 [i_11] = ((/* implicit */unsigned int) ((arr_21 [i_11] [i_11]) ^ (arr_21 [i_11] [(unsigned short)6])));
        arr_70 [i_11] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_14))))) ^ (((unsigned long long int) var_5))));
        var_40 |= ((/* implicit */unsigned long long int) var_11);
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
    {
        for (short i_21 = 2; i_21 < 20; i_21 += 2) 
        {
            {
                var_41 = ((/* implicit */long long int) min((var_41), (min((arr_75 [i_21] [i_21 - 1] [i_20]), (((/* implicit */long long int) ((short) ((long long int) (signed char)123))))))));
                var_42 *= ((((/* implicit */long long int) 2260768155U)) < (var_7));
            }
        } 
    } 
}
