/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64467
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((arr_0 [i_0 - 2]) > (arr_0 [i_0 - 4])));
                    arr_7 [18ULL] = ((/* implicit */short) (~(((((/* implicit */_Bool) 2993366584U)) ? (((/* implicit */long long int) 1301600697U)) : (arr_1 [(signed char)13])))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0 - 4] [i_0])) ? (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0]))))));
                    var_16 = ((/* implicit */long long int) arr_0 [(signed char)18]);
                    var_17 = ((arr_5 [i_2 - 1] [i_1] [i_1 + 2] [(unsigned char)7]) > (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0 + 1] [i_0 - 2])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            var_18 ^= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2]))));
            arr_10 [i_3] = ((((/* implicit */int) ((signed char) 1301600702U))) > ((+(((/* implicit */int) (signed char)92)))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_3 - 1] [i_0]) ? (arr_1 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (arr_0 [i_0 - 1]) : (((int) arr_2 [i_0] [i_0]))));
        }
    }
    var_20 = ((/* implicit */int) var_8);
}
