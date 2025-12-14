/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94266
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
    var_15 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) 4071789532U)) ? (((/* implicit */long long int) 20)) : (var_6))))) < (((/* implicit */long long int) (~((~(-21))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2])) < (((/* implicit */int) arr_7 [i_0] [i_0 + 4] [i_0 + 2]))))), (((min((((/* implicit */long long int) arr_8 [i_0] [i_1 - 2] [8ULL])), (424966608230010527LL))) >> (((/* implicit */int) arr_10 [i_3 - 1] [i_0 + 4] [i_2 + 2]))))));
                        arr_12 [i_2] [i_0] [9LL] [3] [i_3] [(_Bool)1] = ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) : (arr_2 [i_0 + 2] [i_0 + 2]));
                    }
                } 
            } 
        } 
    }
}
