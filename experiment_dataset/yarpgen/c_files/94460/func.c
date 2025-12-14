/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94460
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((arr_3 [i_1] [(unsigned char)20] [14]), (arr_3 [i_0] [i_1] [i_1])))) != (((long long int) arr_1 [i_1] [i_0]))));
                arr_4 [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((14078982744618906608ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7018128730063197666LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))) : ((((_Bool)1) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_13 = var_9;
    var_14 = ((/* implicit */unsigned int) var_8);
}
