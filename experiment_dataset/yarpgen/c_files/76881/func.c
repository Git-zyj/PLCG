/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76881
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
    var_10 = ((/* implicit */long long int) var_7);
    var_11 = ((/* implicit */unsigned short) ((((((11544395613933178448ULL) << (((((/* implicit */int) (short)12100)) - (12047))))) & (((/* implicit */unsigned long long int) -116390146)))) ^ (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64))))))))));
    var_12 |= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)192));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -116390151)) && (((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 2] [i_0]))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(8199999264180248609ULL))))));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) & (arr_0 [i_0])));
                            arr_13 [i_2] [i_1 - 3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 1538536374664815045LL)) ? (((/* implicit */unsigned long long int) -116390146)) : (arr_6 [i_1 + 3] [i_1] [i_1] [i_1 + 3])));
                            var_15 = ((/* implicit */short) ((((/* implicit */int) (short)1)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (134217727ULL))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8199999264180248609ULL)));
                            var_17 = ((/* implicit */signed char) ((arr_4 [(signed char)18] [i_2] [i_0]) ^ (8199999264180248609ULL)));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_20 [13U] [i_2] [i_2] [i_2] [13U] = ((/* implicit */int) ((signed char) arr_4 [i_0] [i_2] [i_0]));
                            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29188))) == ((-(10246744809529303007ULL)))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_2] [i_2] [i_3])))) - (10246744809529302992ULL)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) ((10246744809529303022ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16075)))));
                            var_21 &= ((/* implicit */signed char) (unsigned char)0);
                            var_22 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_1 - 3] [i_0] [i_1] [i_1] [i_1 - 1]))));
                        }
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) ((short) (unsigned char)6));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_1))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(arr_25 [i_0] [i_0] [i_1] [i_0] [2LL] [i_8] [i_0]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_2] [(unsigned short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)6))));
                                var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 2470220449U)) + (10246744809529303008ULL)))))) ? (((/* implicit */int) arr_24 [i_0] [i_0] [14ULL] [i_0] [(short)0])) : (((((/* implicit */int) ((short) arr_21 [i_0] [(unsigned short)19] [i_0] [(unsigned short)19] [19ULL]))) + (((/* implicit */int) arr_24 [i_0] [i_0] [i_9] [i_10 - 1] [i_1 - 2]))))));
                                var_27 = ((/* implicit */short) 31);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        arr_37 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (8199999264180248624ULL)));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_28 ^= ((/* implicit */_Bool) 116390145);
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-119))));
                            arr_40 [i_2] = ((/* implicit */unsigned char) max((10246744809529303019ULL), (((/* implicit */unsigned long long int) (signed char)51))));
                        }
                        var_30 = 628282108U;
                    }
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_31 += ((((/* implicit */_Bool) (~(((/* implicit */int) max(((short)4), (((/* implicit */short) (unsigned char)41)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (max((2185974930U), (((/* implicit */unsigned int) 1914876827)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))));
                        var_32 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_38 [(unsigned short)6] [i_13] [i_13] [i_2] [2ULL])), (max((arr_43 [i_13] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1]), (((10246744809529303019ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_33 -= ((/* implicit */unsigned char) (-(max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)1)))), (((((/* implicit */_Bool) (short)16368)) ? (64774617444415111ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                    }
                }
            }
        } 
    } 
}
