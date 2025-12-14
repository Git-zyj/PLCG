/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75269
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
    var_18 = -7301708522713310016LL;
    var_19 = var_17;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_20 ^= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (8589934464LL) : (0LL)))))) ? ((-((+(-8796093022208LL))))) : (max((var_12), (((((arr_9 [i_3] [10LL] [i_3]) + (9223372036854775807LL))) << (((var_1) + (5403527786897667070LL))))))));
                            var_21 = ((long long int) ((((/* implicit */_Bool) var_17)) ? ((-(var_5))) : ((~(arr_0 [i_0])))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -5350949765121536076LL)) ? (-5819834455149565858LL) : (arr_0 [i_0]))))) ? (((long long int) (+(arr_8 [i_0] [i_1] [i_1] [i_0])))) : (((long long int) arr_9 [i_1] [i_1] [i_1])));
            }
        } 
    } 
}
