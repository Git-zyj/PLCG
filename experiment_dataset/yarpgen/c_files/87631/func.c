/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87631
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
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~((-((((_Bool)1) ? (2712386427U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-7540)), (0U)));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        }
        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) var_0)) : (arr_3 [i_0] [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) var_8)), (10869580122669916638ULL))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15364365771918516007ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((unsigned long long int) var_5)))))));
        var_18 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3))))), (((unsigned int) arr_8 [i_2]))))), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_2])), (arr_3 [i_2] [i_2] [i_2])))) * (((var_2) << (((arr_1 [i_2] [i_2]) + (7979101231678822573LL)))))))));
    }
}
