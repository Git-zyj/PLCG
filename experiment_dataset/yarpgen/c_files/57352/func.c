/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57352
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~(max((((int) (short)-32765)), (708088603))))))));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((unsigned long long int) max((var_6), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [4ULL] [i_1])), (arr_0 [(unsigned char)16] [i_1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_10 [i_1] [20] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1]))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_4] [(unsigned short)12] [(unsigned short)12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((arr_4 [i_4 + 1] [i_3 + 1] [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_2 - 4] [i_4]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)10] [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [(short)8] [(_Bool)1]))) >= (17179738112ULL)))))))))));
                                arr_11 [i_1] = ((/* implicit */short) var_5);
                                var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_0 [i_2 - 3] [i_0]), (((/* implicit */unsigned short) var_9))))), (((unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [(unsigned short)16] [14ULL] [14ULL] [i_3 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 4]))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_6))) : (arr_4 [i_2 - 1] [i_4 + 1] [(_Bool)1])))));
                            }
                        } 
                    } 
                    arr_12 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))), (((((var_6) << (((var_8) - (6135880485512162251ULL))))) > (((/* implicit */unsigned long long int) ((arr_3 [i_1]) & (((/* implicit */int) var_10)))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((arr_9 [i_0] [i_1]), (((/* implicit */unsigned short) var_9)))), (arr_9 [i_0 - 4] [i_1]))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (arr_13 [i_0 + 1] [i_0 - 4] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [3ULL] [i_1] [i_6] [i_2] [i_1] [i_1] [3ULL] = ((/* implicit */short) max((arr_20 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                            arr_24 [i_6] [i_0] [i_2 - 1] [i_6] [i_1] [i_0 + 1] [i_1] = ((/* implicit */short) arr_16 [i_6]);
                            arr_25 [(unsigned char)11] [i_1] [i_2] [i_1] [(unsigned char)19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_19 [i_2] [i_1] [i_7])))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)1)))))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)238)) : (max((max((var_1), (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_14 [i_8] [11ULL] [10ULL] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0] [i_1])) : (((/* implicit */int) arr_1 [(unsigned short)2] [i_0]))))))));
                            arr_28 [(_Bool)1] [i_2] [4] [(unsigned short)8] [i_2] |= ((/* implicit */unsigned long long int) arr_21 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_6] [(_Bool)1] [i_6]);
                            var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))) : (((unsigned long long int) -708088589)))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((arr_29 [i_0 - 2] [i_0] [i_0 + 1] [i_9] [i_0 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 617859994))));
                            arr_31 [i_9] [i_9] [(unsigned char)4] [i_9] [i_1] [i_9] = ((/* implicit */short) arr_1 [i_2] [i_6]);
                            arr_32 [i_1] [i_1] [0ULL] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(arr_2 [i_0 - 2] [i_2 - 3])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) (~(var_1)));
                            arr_36 [15ULL] [i_1] [15ULL] [i_6] [i_1] [i_1] = ((int) arr_5 [i_1] [i_0 - 3] [i_1]);
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [7] [i_1] [(unsigned short)1])) ? (arr_26 [(unsigned char)0] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                            arr_37 [i_1] [i_2] = ((/* implicit */short) (-(arr_13 [5ULL] [i_1] [i_1] [i_1] [i_0 - 2] [i_1])));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((arr_4 [0ULL] [i_1] [(short)18]) / (((/* implicit */unsigned long long int) var_5)));
                        var_24 = ((/* implicit */unsigned short) ((int) (unsigned char)127));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (short)17303)))));
                        arr_43 [i_0] [i_0] [i_1] [i_12] = ((/* implicit */unsigned char) arr_33 [19ULL] [i_0] [19ULL] [6ULL] [i_0] [i_0] [i_1]);
                        var_26 = (!(((/* implicit */_Bool) ((unsigned char) var_3))));
                    }
                }
                var_27 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) 447726937))), (((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_34 [i_0 - 4] [i_0 - 4] [(short)14] [i_0 - 1] [i_0 + 1] [i_0 - 4])) : (((/* implicit */int) arr_34 [i_0 - 1] [i_0 - 1] [11] [i_0 + 1] [i_0 + 1] [i_0]))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_9);
    var_29 = ((/* implicit */short) var_7);
    var_30 |= ((/* implicit */short) ((_Bool) ((short) max((var_0), ((unsigned char)255)))));
    var_31 = ((/* implicit */int) ((((var_9) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_4)))) == (((/* implicit */int) var_10))));
}
