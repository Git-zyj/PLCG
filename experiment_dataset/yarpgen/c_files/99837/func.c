/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99837
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((131071U), (((/* implicit */unsigned int) (short)32764)))))));
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)40)), (((((/* implicit */int) ((unsigned short) var_3))) ^ (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_8)) - (90)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) arr_4 [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 3]))));
                        var_16 = ((/* implicit */int) (~(227467760U)));
                    }
                    var_17 |= ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16852373390491178475ULL)) ? (((/* implicit */int) (short)9951)) : (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
}
