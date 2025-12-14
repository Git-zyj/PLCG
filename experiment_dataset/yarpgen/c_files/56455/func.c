/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56455
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((7817955803336597425ULL) * (max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((long long int) arr_0 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    var_12 = var_4;
    var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_10))))) : (min((8284430054778677063ULL), (((/* implicit */unsigned long long int) (unsigned short)34985)))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((_Bool) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [(unsigned short)8]))))) ? (7817955803336597406ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) 0)), (0ULL)))))))))));
                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) max((var_0), ((~(var_7))))));
            }
        } 
    } 
}
