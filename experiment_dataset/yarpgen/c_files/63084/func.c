/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63084
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = var_6;
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))));
                var_13 = ((/* implicit */unsigned char) var_10);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(unsigned char)10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_8 [i_2] [1LL])))))))));
        arr_10 [i_2] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) % ((~(var_9)))))) ? (((((/* implicit */int) var_0)) << (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))));
        arr_11 [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2])) + (((/* implicit */int) var_4)))))))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_8 [i_2] [i_2]))))));
    }
}
