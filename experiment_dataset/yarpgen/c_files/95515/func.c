/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95515
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
    var_11 |= ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned short) var_2);
                var_13 = ((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [i_0]);
                var_14 = ((/* implicit */long long int) (unsigned char)242);
                var_15 += ((/* implicit */_Bool) arr_4 [i_0]);
            }
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) 0LL);
                    var_18 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-5LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_0])) ? (((unsigned int) (unsigned char)21)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_3))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) <= (((/* implicit */int) (unsigned char)234))))))) ^ (((/* implicit */int) (unsigned char)235))));
                        var_19 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (unsigned short)65535)), (((long long int) (unsigned char)21)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 3] [i_5] [i_5] [i_5 + 1])) : (((/* implicit */int) min(((unsigned char)21), (((/* implicit */unsigned char) (signed char)37))))))))));
                        var_20 ^= ((/* implicit */unsigned int) arr_2 [i_4]);
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 5267815198029845325LL)) ? (-6553890229052619536LL) : (((/* implicit */long long int) 264746496U)))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                    arr_22 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_0] [i_1] [i_6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))) : (arr_16 [i_0] [i_1] [i_1] [i_6] [i_1])))) ? (((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_3] [i_0] [i_6])) ? (var_8) : (-1LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_1] [i_6]))))))) : (((/* implicit */long long int) min(((-(var_2))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
                for (signed char i_7 = 3; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)63648))));
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)21))))))), ((~(min((((/* implicit */long long int) (unsigned char)21)), (4843573714334935185LL)))))));
                        var_24 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 16515072U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (min((((/* implicit */long long int) arr_26 [i_7 - 3] [i_7 - 3] [i_7 - 2] [i_8] [i_7 - 3])), (arr_7 [i_7 - 2] [i_7] [i_7 - 1] [i_8])))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_7 + 1] [i_7 - 3] [i_0])) ? (arr_9 [i_0] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (signed char)21))))) == (((264746496U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))))))));
                        arr_29 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)63648)), (1006433158)));
                    }
                    var_26 = ((/* implicit */_Bool) ((unsigned int) min((arr_26 [i_3] [i_3] [i_7 - 2] [i_7 - 2] [i_7]), (arr_26 [i_7] [i_7] [i_7 - 1] [i_7 - 3] [i_7]))));
                }
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
            {
                arr_32 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) + (-1LL)))) ? (arr_21 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) min((221716680U), (((/* implicit */unsigned int) arr_27 [i_0] [i_9] [i_0] [i_9])))))))));
                var_27 = min((((long long int) (unsigned char)58)), (var_8));
                var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)36)) > (((/* implicit */int) (unsigned char)235))))), (8388592U)));
                arr_33 [i_9] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (unsigned char)147));
                var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-112)) : (((((/* implicit */_Bool) 1027771753U)) ? (2147483647) : (((/* implicit */int) (unsigned short)63648)))))) + (((/* implicit */int) (unsigned short)1747))));
            }
            arr_34 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((var_7), (min((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1887)) % (-265251942))))))));
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), ((unsigned char)117)))) ? (((var_8) / (var_9))) : (((/* implicit */long long int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4843573714334935185LL)) ? (((/* implicit */int) (unsigned short)1887)) : (1156949420))))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((_Bool) arr_1 [i_0])))) << (((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((221716680U), (var_2))))) - (4294967239U)))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((3267195542U), (221716680U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63648))) : (((long long int) arr_24 [i_11])))), (((/* implicit */long long int) (unsigned short)65534))));
            var_33 = 1027771753U;
        }
        for (int i_12 = 1; i_12 < 16; i_12 += 2) 
        {
            arr_42 [i_0] [i_12] [i_0] = ((/* implicit */signed char) arr_26 [i_0] [i_12] [i_12] [i_12] [i_12]);
            var_34 -= ((((((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))))) ? (((((/* implicit */_Bool) (unsigned short)144)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)253)))) : (min((265251942), (1156949420))))) < (((/* implicit */int) (unsigned short)12557)));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_19 [i_12 + 3] [i_12] [i_12] [i_12])) : (min((arr_9 [i_0] [i_0] [i_12]), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12 + 2] [i_0] [i_0])))));
        }
        var_36 = ((/* implicit */_Bool) (-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (signed char i_13 = 3; i_13 < 15; i_13 += 4) 
    {
        var_37 = ((/* implicit */long long int) ((809599226U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 3])))));
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 3; i_15 < 12; i_15 += 3) 
            {
                arr_51 [i_13] [i_14] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1887)) > (((/* implicit */int) arr_17 [i_13] [i_13 - 2] [i_14] [i_15 + 2] [i_15]))));
                arr_52 [i_13] [i_15 + 2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_15] [i_14] [i_13])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_13] [i_14] [i_15 + 3] [i_15 + 1])) ? (((/* implicit */int) arr_2 [i_13 - 1])) : (((/* implicit */int) (unsigned short)63670))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    for (unsigned char i_17 = 1; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) arr_11 [i_13] [i_13] [i_13] [i_17 + 1]))));
                            arr_57 [i_13] [i_14] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)29))));
                        }
                    } 
                } 
            }
            arr_58 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_41 [i_13] [i_14] [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_14] [i_14] [i_14])))));
        }
        for (long long int i_18 = 1; i_18 < 13; i_18 += 1) 
        {
            arr_61 [i_13] = (-(-265251942));
            var_40 -= ((/* implicit */signed char) var_2);
            arr_62 [i_13] [i_18] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3267195543U)) ? (4119898948959936736LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55)))))) ? (((long long int) arr_44 [i_13])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4286578704U)) ? (4286578704U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))))))));
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            var_41 += ((/* implicit */int) ((arr_1 [i_13 - 1]) ? (arr_24 [i_13 - 2]) : (arr_24 [i_13 - 3])));
            var_42 += ((/* implicit */long long int) (unsigned short)1887);
        }
        arr_65 [i_13] [i_13] = ((/* implicit */signed char) var_8);
    }
}
