/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8748
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
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_14))))))) ? (((/* implicit */int) (signed char)43)) : ((-(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)82);
                arr_7 [i_0] [i_1 + 2] = ((/* implicit */signed char) (~((-(((/* implicit */int) (signed char)-103))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-43)) + (2147483647))) << (((((/* implicit */int) arr_9 [i_2])) - (53340)))));
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_2] [i_2]))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57592)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)82))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (signed char)12)) : ((+(((/* implicit */int) (unsigned short)64252))))));
        var_21 = ((/* implicit */signed char) (unsigned char)198);
    }
}
