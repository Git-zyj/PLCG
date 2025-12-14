/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76721
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_14);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)27))))), (((arr_1 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (1871414345U)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_16)) - (23006))))) + (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1])))))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_3]))) ? (917462771U) : (((/* implicit */unsigned int) var_14)))))));
                            arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_1] [i_1])), (arr_0 [i_0] [i_0])))) ? (max((var_7), (((/* implicit */unsigned int) arr_4 [i_1] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (short)-28892)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_0 [i_0] [i_1]) - (399615869U)))))))));
                            var_22 = ((short) var_5);
                            var_23 = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) ((signed char) max((3377504504U), (((/* implicit */unsigned int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)504)))))) ? (((/* implicit */int) (_Bool)1)) : (((((var_3) < (((/* implicit */int) var_18)))) ? (((/* implicit */int) ((unsigned char) var_15))) : ((~(((/* implicit */int) var_8))))))));
    var_25 = ((/* implicit */short) (unsigned short)504);
}
