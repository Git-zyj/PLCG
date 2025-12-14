/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60440
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
    var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])))) && (((/* implicit */_Bool) 2147483647))))))));
                        arr_13 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_3 [i_0] [10]))))))));
                        var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [(_Bool)1]))) : (arr_4 [i_0] [i_1] [(_Bool)1]))) ^ (((/* implicit */long long int) ((-2147483634) + (((/* implicit */int) var_2))))))) & (arr_2 [7LL] [i_0])));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = (~(((unsigned long long int) arr_5 [i_0])));
    }
}
