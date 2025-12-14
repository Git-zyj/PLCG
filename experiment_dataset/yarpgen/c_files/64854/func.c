/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64854
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
    var_12 = ((/* implicit */unsigned int) (-(max((max((14708766583066792376ULL), (5349713962934983267ULL))), (((/* implicit */unsigned long long int) ((var_4) < (((/* implicit */unsigned long long int) 1299444086U)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (14708766583066792376ULL)));
        var_14 = 17703544679751952511ULL;
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0 - 1]))))))));
        var_17 = ((/* implicit */unsigned long long int) ((var_0) * (var_1)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) (-(2995523210U)));
            var_19 = ((/* implicit */unsigned int) (~(14148588629331994803ULL)));
            var_20 ^= ((((/* implicit */_Bool) arr_3 [10U])) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) > (arr_2 [i_2]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((arr_10 [i_1] [i_2] [i_4] [i_5]) << (((4294967295U) - (4294967252U)))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_14 [i_2 + 2] [i_1]);
                            var_23 = (+(2995523210U));
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                            var_25 = (~(((((/* implicit */_Bool) 2500008876U)) ? (3737977490642759240ULL) : (((/* implicit */unsigned long long int) 1299444085U)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_26 = ((unsigned int) arr_10 [i_1] [i_1] [i_1] [i_1]);
            var_27 = (+(2607938141U));
        }
        var_28 = ((/* implicit */unsigned int) (-((+(var_11)))));
    }
}
