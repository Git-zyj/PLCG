/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60068
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)85)), (arr_5 [i_1 - 1] [i_1 + 1]))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [10U] [i_1 - 1] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [16ULL] [i_1 - 1] [i_1 - 1] [i_2 + 2])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [4] [i_1 - 1] [i_1 + 1] [i_2 + 1]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (_Bool)0))));
                        arr_11 [i_0] [i_1 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)86)) + (-2082917281))) < (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_2] [i_0])))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+((-(8))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_2 - 1] [i_2 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 19; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_0 [14LL]))));
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_16 *= ((((/* implicit */_Bool) -2082917281)) ? (((/* implicit */int) (_Bool)0)) : (-2082917281));
                            arr_19 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] [i_5] &= ((/* implicit */short) min((((/* implicit */int) var_2)), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_2] [i_4]))))) + (((/* implicit */int) max(((_Bool)1), (arr_0 [18]))))))));
                        }
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            var_17 = ((max(((_Bool)1), ((!(((/* implicit */_Bool) var_6)))))) || (var_9));
                            arr_24 [i_6] [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_9 [i_0] [i_2] [i_4 + 1] [i_6 - 1])))) * (((/* implicit */int) arr_0 [i_0]))));
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) 4605629581962316397LL)) ? (1867554312) : (8)))));
                        }
                        for (int i_7 = 1; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((min((((/* implicit */int) (_Bool)0)), (var_3))) + (2147483647))) << (((((min((var_0), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0])))) + (908418649))) - (31)))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1867554312)), (arr_17 [(_Bool)1] [i_1 - 1] [i_1] [i_1] [i_1])))) ? ((+(11193365717388514202ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))))));
                            arr_28 [i_0] [i_1 + 1] [i_0] [i_4] [(signed char)16] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 + 2] [i_2 + 2] [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))))));
                        }
                        for (int i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2 - 1] [i_8 - 1] [i_0])) ? (arr_23 [i_2 + 2] [i_8 + 1] [i_0]) : (arr_23 [i_2 + 2] [i_8 + 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_2 - 1] [i_8 - 1] [i_0]) < (arr_23 [i_2 - 1] [i_8 - 1] [i_0]))))) : (((((/* implicit */_Bool) arr_23 [i_2 + 2] [i_8 - 1] [i_0])) ? (arr_23 [i_2 + 2] [i_8 - 1] [i_0]) : (arr_23 [i_2 + 1] [i_8 - 1] [i_0])))));
                            arr_32 [i_0] [i_0] [4LL] [i_2] [i_4 - 1] [i_8] &= ((/* implicit */int) ((((/* implicit */unsigned int) 8)) + (max((((arr_0 [8ULL]) ? (arr_3 [i_2 + 1]) : (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_4))))));
                            arr_33 [0] [i_1 + 1] [i_0] = ((((/* implicit */int) (unsigned short)44134)) / (((/* implicit */int) (_Bool)1)));
                        }
                    }
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4605629581962316397LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (arr_14 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 2019245028))))))))) % (11193365717388514202ULL)));
        arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_30 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) ((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_20 = ((/* implicit */_Bool) var_10);
    var_21 = ((((/* implicit */_Bool) 7100112073109245917LL)) ? (-8) : (-1867554312));
}
