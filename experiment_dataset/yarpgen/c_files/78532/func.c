/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78532
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
    var_13 = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((unsigned int) (short)-19766))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [2U] [i_0] [i_0]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (arr_3 [i_1] [i_1] [i_1])))), (6332328642767686746LL)))));
                var_15 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((unsigned long long int) 2015833552284490991LL))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) (short)6834)) * (((/* implicit */int) (short)18495))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 569345901021112897ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16138))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (3304237690U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16740)))))), (var_10)))))))));
}
