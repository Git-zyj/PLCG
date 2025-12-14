/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83875
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (13019614342881317379ULL) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_3))));
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) : (arr_2 [(short)8])));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 ^= ((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_3]));
                        var_23 += ((/* implicit */unsigned char) 3924153167U);
                        var_24 -= ((/* implicit */unsigned char) arr_8 [4U] [8] [i_1] [(unsigned short)10] [(_Bool)1] [8]);
                    }
                }
            } 
        } 
    }
    var_25 += ((/* implicit */_Bool) var_7);
}
