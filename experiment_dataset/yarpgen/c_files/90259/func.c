/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90259
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
    var_20 = var_14;
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((max((1680588171U), (((/* implicit */unsigned int) (short)3689)))) != (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-25914)))))))) : (1293496844)));
        var_21 ^= ((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0 - 1]);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_2 - 1] [i_1] [i_1] [i_3] [i_4 + 1] [i_4 - 2] [i_3]), (((/* implicit */unsigned long long int) arr_5 [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_5 [i_1 + 1])))) : ((+(var_1))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (short)-25914))));
                            arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_2] [i_4])) : (((/* implicit */int) var_12)))))) ? (((/* implicit */int) (unsigned char)129)) : (((1293496844) % (((/* implicit */int) (_Bool)1))))));
                            arr_15 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1 + 1] [i_2 + 2]))))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_1 + 2] [i_2 + 2]))) : ((+(((/* implicit */int) arr_10 [i_1 - 1] [i_2 + 4]))))));
                            var_24 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [(_Bool)1])) || (((/* implicit */_Bool) -1085237550)))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_6])) ? (((/* implicit */unsigned long long int) (-(-1293496844)))) : (max((arr_17 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_18 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 1] [i_1]))))));
                        arr_23 [i_0 + 1] [i_1 + 1] [i_5] [i_1 + 2] = ((/* implicit */unsigned long long int) min((-1293496844), (1293496844)));
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_7] [i_0] [i_7] [i_7] [i_7] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_7]))))) ? (((((169836724) >= (((/* implicit */int) arr_16 [i_0] [i_7])))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (-724825287))) : (((arr_21 [i_7]) ? (arr_0 [i_0] [i_7]) : (((/* implicit */int) (signed char)46)))))) : (((((/* implicit */int) arr_24 [i_0])) ^ (((arr_5 [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_7])) : (-1293496844)))))));
            var_27 ^= ((/* implicit */short) (((-(min((-999541351), (((/* implicit */int) arr_24 [i_0])))))) << (((((max((-1085237550), (-1293496844))) + (1085237574))) - (24)))));
            arr_26 [i_7] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 16559027450830895746ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */_Bool) 13827215695147162386ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 201326592))))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_12)) : (arr_27 [i_8] [i_9]))) != (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1])))))));
                var_29 = ((/* implicit */int) arr_30 [i_0 - 1] [6ULL] [i_0] [i_0 - 1]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) ((arr_28 [i_0 + 1]) + (arr_28 [i_0 - 1])));
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 999541350)) == (10570207372027332718ULL)));
            }
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                arr_38 [i_8] [i_8] [i_8] = 250408029;
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_0 - 1] [i_8] [i_0 + 1] [i_11] [i_8] [i_0 - 1])) >= (((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_8])))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16559027450830895746ULL)) ? (999541350) : (((/* implicit */int) (signed char)-2))));
            }
            var_34 |= ((/* implicit */unsigned int) ((arr_28 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (int i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    {
                        arr_45 [i_13] [i_13] [i_12] [i_13 + 1] [i_13 + 1] = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0 + 1])) <= (((/* implicit */int) arr_24 [i_0 - 1]))));
                        var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) var_18))));
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10084229501452940982ULL) != (((/* implicit */unsigned long long int) var_19))))))));
}
