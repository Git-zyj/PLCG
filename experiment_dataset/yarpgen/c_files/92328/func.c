/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92328
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((unsigned short) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) max((arr_0 [(unsigned short)15] [i_0]), (((/* implicit */unsigned short) (signed char)127)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_7 [(signed char)13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_5 [i_1 + 2] [i_0] [i_0]))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)44847)))))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned short)1023)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_6 [i_0])))))) % (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [(unsigned short)5] [(unsigned short)5] [i_0]))))))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) != (((/* implicit */int) var_3)))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_7)))));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
        }
    }
}
