/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60154
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
    var_12 = ((/* implicit */unsigned long long int) (-(max((max((var_11), (0U))), (((/* implicit */unsigned int) ((11609346776392330649ULL) >= (((/* implicit */unsigned long long int) var_2)))))))));
    var_13 = (unsigned char)255;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65519)))) ? ((~(((/* implicit */int) arr_0 [i_1] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (1754205471801738541ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0]))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
                var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1] [i_0]))) ? (max((arr_1 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (signed char)67))))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_8))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) (_Bool)0)), (var_7))))) ^ (arr_4 [i_0])));
            }
        } 
    } 
}
