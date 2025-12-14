/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89683
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
    var_10 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((unsigned int) var_0))))), (min((((2314424109616169162ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))))));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((signed char) min(((unsigned char)255), (var_7)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_2]))))) ? (16132319964093382454ULL) : (max((((/* implicit */unsigned long long int) var_5)), (2314424109616169162ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_2 - 1])) < (((/* implicit */int) var_1)))) && (((/* implicit */_Bool) arr_4 [i_1])))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_6 [i_2 - 1] [3U])));
                    var_13 ^= ((/* implicit */unsigned short) arr_2 [(_Bool)1] [(unsigned short)0]);
                }
                var_14 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((var_5) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned long long int) 589899465U)) : (((((/* implicit */unsigned long long int) 2010911162U)) - (13501773949601956204ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))));
}
