/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93026
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
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)4] [(unsigned short)4] &= ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)8] [i_1]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_17 -= ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)228))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 ^= ((/* implicit */int) max(((unsigned char)222), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (unsigned char)154))))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)95)) + (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (1048575LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (67108863ULL))))) <= (((/* implicit */unsigned long long int) var_12))));
    }
    var_19 = ((int) var_14);
}
