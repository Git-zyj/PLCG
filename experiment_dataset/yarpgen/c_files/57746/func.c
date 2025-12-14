/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57746
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
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */int) (unsigned char)58))))) * ((~(-200114498)))))) ? (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)2048)) % (2147483647)))))) : (((/* implicit */unsigned int) ((200114498) / (arr_1 [i_0 + 1])))))))));
        arr_3 [i_0] [i_0] = ((short) ((((/* implicit */unsigned int) (+((-2147483647 - 1))))) * (arr_0 [i_0 - 3])));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        for (int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (signed char)-109)))))));
                        arr_14 [i_1] [(_Bool)1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((2147483647) == (var_13)));
                    }
                    var_20 ^= ((/* implicit */int) 576581036U);
                }
            } 
        } 
    } 
}
