/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59140
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [(short)3]))))), (arr_2 [i_0] [(signed char)9])))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1023435201921378401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))));
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)35))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1])) / (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-14540))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 23; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (unsigned char)15);
                            arr_16 [i_5] [(signed char)8] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)14539))) : (((((/* implicit */_Bool) (unsigned char)32)) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    {
                        arr_22 [i_2] [i_6] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14522)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [21ULL] [i_2 - 3]))) : (arr_15 [i_1] [(unsigned char)2] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (17423308871788173231ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_23 [i_2] [i_7] [i_6] [i_2 - 4] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [(unsigned char)18])) / (((/* implicit */int) arr_4 [i_1]))));
                        var_20 = ((/* implicit */_Bool) -2063311643);
                    }
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_26 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */long long int) arr_6 [i_1] [24U] [24ULL])) : (6756103653774896776LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) : (0U))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_8] [i_8] [i_8])) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) arr_19 [i_8] [i_1] [i_1]))))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? (1716080517) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4611686018427387904ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_8]))) : (268435200U)))) : (((-8695565037941185343LL) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [10LL] [i_8])))))));
            arr_27 [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (-612932408) : (((/* implicit */int) arr_11 [(unsigned short)21] [i_8] [(signed char)15] [i_1] [i_8] [i_8])))) < (((((/* implicit */_Bool) 1023435201921378401ULL)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (short)18817))))));
        }
        for (signed char i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            arr_30 [i_1] [i_1] [(signed char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (arr_21 [i_1] [i_1] [i_1] [i_1] [0LL])))) ? (arr_9 [i_1] [i_9] [i_9 - 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64581)))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 24; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_35 [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_28 [i_1]) % (2859238587U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((4294967284U) << (((((/* implicit */int) arr_29 [i_1])) + (24360)))))));
                        var_23 ^= ((/* implicit */unsigned char) 10336526269861051794ULL);
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (18429471824508124625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */_Bool) 1566139661U)) ? (((/* implicit */int) arr_4 [i_11])) : (arr_20 [i_1] [14U] [i_10] [i_11]))) : (((/* implicit */int) arr_29 [(unsigned char)6]))));
                        arr_36 [i_1] [(unsigned short)6] [(signed char)2] [i_11] [i_10] [12] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1]))) / (arr_9 [i_1] [i_1] [i_10] [10])))) ? (((((/* implicit */_Bool) arr_25 [i_9] [i_9 + 1] [i_9])) ? (arr_5 [i_1] [15LL]) : (((/* implicit */int) (unsigned char)78)))) : (((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) arr_11 [i_11] [i_10] [(_Bool)1] [8] [i_10] [i_9])) : (arr_1 [i_10])))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
    {
        var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (_Bool)0))));
        arr_40 [3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13835058055282163702ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12]))) : (arr_9 [i_12] [i_12] [i_12] [24]))))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (-1917240260)));
    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_13) < (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */int) (unsigned short)31796)) : (((1029164286) % (((/* implicit */int) (unsigned char)63))))))) ? (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_6))) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (short)-32747))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) (short)19532))))) ? (((/* implicit */int) var_5)) : (min((((/* implicit */int) (unsigned short)1008)), (-1972907439))))))));
}
