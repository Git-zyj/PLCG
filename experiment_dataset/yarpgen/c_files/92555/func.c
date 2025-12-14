/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92555
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(max((((arr_2 [i_1] [i_0]) ? (8866461766385664LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) ((signed char) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0]))) : (35183298347008LL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1031143655)) ? (2197689478U) : (2097277818U))))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2197689478U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))) : (((((/* implicit */_Bool) var_3)) ? (var_14) : (var_9))))), (((/* implicit */unsigned int) var_18)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) (short)23075)))) < (((/* implicit */int) ((short) (+(((/* implicit */int) var_10))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_22 -= ((/* implicit */unsigned int) var_6);
                            arr_17 [i_0] [i_3] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (-(1122920001U)));
                        }
                        arr_18 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3]);
                        var_23 += ((/* implicit */short) (_Bool)0);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_19 [i_1])), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((unsigned short) var_17)))));
                        arr_22 [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1]);
                    }
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_25 = ((((/* implicit */_Bool) arr_8 [i_6] [i_1] [i_0])) ? ((~(min((805306368U), (((/* implicit */unsigned int) arr_1 [i_6] [i_1])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_19))))) : (arr_0 [i_6]))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_19);
                            arr_32 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_20 [i_6] [i_1] [i_6] [i_7])))) / (((/* implicit */int) (!(arr_27 [i_0] [i_1] [i_6] [i_1] [i_8]))))));
                            var_26 *= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) arr_5 [i_7])))));
                            var_27 = ((/* implicit */short) 2097277822U);
                        }
                        var_28 = arr_4 [i_1] [i_0];
                        arr_33 [i_7] [i_6] [i_0] [i_0] = ((((/* implicit */_Bool) 9493309362024165896ULL)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27626))));
                    }
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned long long int) ((long long int) var_19));
}
