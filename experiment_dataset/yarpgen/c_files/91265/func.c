/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91265
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
    var_11 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) -345356354)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-9197236281125060090LL))) : ((-(var_3))))) : (((/* implicit */long long int) (-(((var_5) ? (1103950485U) : (arr_1 [i_0]))))))));
                var_12 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (min((((/* implicit */unsigned int) (short)-2842)), ((+(arr_6 [i_2])))))));
        arr_8 [i_2] = ((/* implicit */int) min(((-((~(arr_7 [i_2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
    }
}
