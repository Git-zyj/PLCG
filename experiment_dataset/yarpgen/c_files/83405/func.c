/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83405
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
    var_11 = var_10;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_9 [i_1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_2 - 2])) & (((/* implicit */int) (short)17817)))), (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])))))));
                        var_12 = ((/* implicit */int) ((signed char) (((-(((/* implicit */int) arr_5 [(short)20])))) + ((+(((/* implicit */int) (unsigned short)24611)))))));
                        var_13 -= ((/* implicit */signed char) (short)-27747);
                        var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_0 + 1] [(short)6])))) / (((/* implicit */int) arr_8 [(unsigned char)4] [(signed char)22] [(signed char)18] [(unsigned char)4]))));
                    }
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_5 [i_2 + 1]))) * (((((((/* implicit */int) arr_1 [i_0 + 1])) + (2147483647))) >> (((((/* implicit */int) (signed char)75)) - (63)))))));
                }
            } 
        } 
    } 
    var_16 |= var_10;
}
