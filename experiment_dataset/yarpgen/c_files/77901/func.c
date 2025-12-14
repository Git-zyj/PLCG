/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77901
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */short) -1368556418);
                            var_21 -= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1])))), (((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)48)))) * (((((/* implicit */_Bool) 9223372036854775785LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)63))))) * (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((((((/* implicit */int) var_1)) + (((/* implicit */int) var_12)))) / (((/* implicit */int) var_0)))), (((/* implicit */int) var_13))));
    var_24 = ((/* implicit */unsigned char) var_0);
}
