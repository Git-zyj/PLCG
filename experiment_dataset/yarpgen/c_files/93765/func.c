/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93765
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_14)) : ((((!(((/* implicit */_Bool) (signed char)-109)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (signed char)118)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = (signed char)127;
        arr_4 [(signed char)5] [i_0] |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-118))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (signed char)-103))))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_18 |= ((signed char) var_2);
        var_19 = ((signed char) arr_8 [i_1 - 1]);
        arr_10 [i_1] = (signed char)94;
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-123)) & (((/* implicit */int) (signed char)-109)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_12 [(signed char)6])) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_8 [i_2 + 1])))))))));
        var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1]))));
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        arr_17 [i_3] [(signed char)12] = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_3 - 2]))));
        arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
        arr_19 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_3]))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3 + 2])) | (((/* implicit */int) (signed char)123))));
    }
}
