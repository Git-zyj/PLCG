/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96229
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) arr_2 [i_3]);
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_0 + 2] [i_0] [i_0 + 3] [i_0 - 1] [i_1] = ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_16)), (17851311760693181354ULL))) == (max((1644525398959447222ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [4ULL] [(short)8]))))))) != (((/* implicit */int) arr_12 [i_1])));
                                arr_15 [i_4] [10ULL] [i_1] [i_1] [i_0] [5ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8])) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned char)5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_5 [i_0] [(short)12]) : (arr_8 [i_1] [i_1])))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_3 [i_0]))))) >> (((var_0) - (145494701U))))))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                arr_19 [10] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))));
                                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [10ULL])) : (((/* implicit */int) arr_4 [12ULL]))));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_20 = var_14;
}
