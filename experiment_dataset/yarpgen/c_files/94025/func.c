/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94025
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
    var_19 = ((/* implicit */_Bool) 9007199254740991ULL);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967289U)))) != (var_14)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 6U);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [2ULL] [i_2] [4ULL] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [3ULL] [i_3] [i_4]))) * (var_5)))))) ? (((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) var_7))))) ? (18446744073709551615ULL) : (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [12ULL] [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) (+(0U))))));
                                arr_14 [i_0] [i_1] [(_Bool)1] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [14U])) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 234881024U)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [13ULL] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_3 [i_0] [i_3] [i_0]), (arr_3 [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_0);
}
