/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97361
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = (signed char)-57;
        var_16 = ((/* implicit */unsigned short) var_13);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)31)) & (((/* implicit */int) (signed char)-8))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)59)), ((unsigned char)255)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) || (((/* implicit */_Bool) arr_2 [i_1 - 1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (arr_2 [i_2 + 1])));
            var_21 = ((/* implicit */signed char) ((unsigned short) arr_2 [i_1 - 1]));
            var_22 = ((/* implicit */unsigned char) (signed char)66);
        }
        var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1])) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)9))));
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) <= (((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) var_6)))))));
}
