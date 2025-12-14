/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59374
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
    var_11 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) min((var_8), (((/* implicit */signed char) var_9))))) != (((/* implicit */int) ((((/* implicit */_Bool) -6440245176267581369LL)) && (((/* implicit */_Bool) 117440512))))))))));
    var_12 = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) (unsigned short)10693)) ^ (-1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) min(((unsigned char)112), (((/* implicit */unsigned char) var_6)))))))) ? (((((/* implicit */_Bool) 4294836224LL)) ? (((/* implicit */int) max(((short)-32767), (((/* implicit */short) (signed char)-77))))) : ((+(((/* implicit */int) (signed char)-94)))))) : (((/* implicit */int) arr_1 [i_0]))));
                var_14 ^= ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_1])), (min(((~(2147483621))), (((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */signed char) max((var_15), (max((min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_0]))), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [7U])) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_0))))))))))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) 2147483621);
            }
        } 
    } 
}
