/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60087
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
    var_14 -= max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_11)) - (144)))))))), (((((unsigned long long int) (_Bool)1)) << (((var_0) - (3857178722U))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) arr_3 [i_1 - 2] [i_1] [i_1 - 2])));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_1]);
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_4 [(signed char)4] [(unsigned short)2]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)224))) : (var_2))), (((/* implicit */long long int) arr_1 [i_0] [(unsigned short)6]))))));
                    var_17 = ((/* implicit */int) (~((((_Bool)1) ? (((arr_3 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), ((unsigned short)224)))))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_0 + 2] [i_0] [i_0])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)4)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)2] [i_1]))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                        var_20 *= ((/* implicit */unsigned char) ((signed char) arr_10 [i_0] [i_4]));
                        arr_16 [i_0] [i_0] [i_3] [0U] [i_1] &= ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0] [i_1 - 2]);
                        var_21 += ((/* implicit */signed char) ((int) arr_11 [i_4] [i_0 + 1] [i_0 + 1]));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)182)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_19 [i_5] [i_1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(1905697548U))))));
                            arr_23 [i_6] [i_0] [(unsigned char)6] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_1 - 1])) && (((/* implicit */_Bool) arr_3 [5U] [i_0 + 3] [i_1 + 1]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_2))));
                            var_26 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [8ULL])))) || (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_5] [(short)0]))));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_0 + 3] [i_0]))));
                            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)224)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)224))));
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))));
                            var_30 += ((/* implicit */short) (+(((/* implicit */int) (unsigned short)120))));
                            var_31 = ((/* implicit */unsigned short) ((signed char) 1905697533U));
                        }
                    }
                    for (unsigned char i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_9)))))))));
                        var_33 &= ((/* implicit */_Bool) ((signed char) arr_25 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_1 + 1] [i_1]));
                        arr_30 [i_0] [5ULL] [i_0] = ((/* implicit */signed char) 402653184);
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_18 [(unsigned char)0]))));
                    }
                }
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~((~(arr_3 [i_0] [i_1] [i_10])))))), ((+(max((((/* implicit */long long int) (unsigned short)47189)), (arr_12 [i_0] [i_1] [i_10])))))));
                    arr_34 [i_1] [i_0] [(short)6] [i_1 - 1] &= ((/* implicit */short) arr_28 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_10]);
                    arr_35 [(short)6] [(short)6] [(short)6] [(short)6] &= ((((/* implicit */int) (unsigned char)240)) ^ (((/* implicit */int) (_Bool)1)));
                    arr_36 [8] [8] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((1406383769U), (535124272U)))))) == (((unsigned int) arr_28 [i_0] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_10 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */short) max((((var_6) << ((((+(4165287484355667975ULL))) - (4165287484355667961ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_11] [i_10])) ? (((/* implicit */int) (unsigned short)65406)) : (((((/* implicit */int) arr_18 [i_11])) + (((/* implicit */int) arr_25 [i_0 + 2] [i_1] [i_0 + 2] [i_11] [i_12])))))) & ((+((((_Bool)1) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned short)36861)))))))))));
                                arr_42 [i_0] [i_0] [i_10 - 1] [i_11] [i_12] = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
