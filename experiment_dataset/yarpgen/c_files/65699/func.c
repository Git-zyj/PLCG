/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65699
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
    var_13 ^= var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_2 [(_Bool)1]))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (arr_2 [0])));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((/* implicit */int) (!(((/* implicit */_Bool) -886855749))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) < (((((/* implicit */int) (_Bool)0)) >> (((var_12) - (3384638164996197974ULL)))))));
        var_18 = ((/* implicit */signed char) ((arr_6 [i_0 + 2] [(signed char)15] [i_0 - 3]) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_2 [i_0 + 2]))));
    }
    var_19 = ((/* implicit */long long int) var_10);
}
