/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99771
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
    var_11 = max((((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))), ((signed char)-119));
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-77)))))))) : (((/* implicit */int) var_2))));
    var_13 *= var_2;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = var_5;
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_4 [i_1 + 1] [(signed char)18])))));
            var_15 += ((signed char) (+(((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_10))))));
            var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))));
            var_17 -= var_9;
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = var_9;
            var_18 += ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-77)))))), (((((/* implicit */_Bool) min((var_4), (var_6)))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) (signed char)127))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_2])) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_3]), ((signed char)45)))) : (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-124))))))) && (((/* implicit */_Bool) max((arr_12 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3]), (arr_12 [i_3 + 1] [i_3 + 1] [i_3] [i_3]))))));
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [i_3 + 2] [i_2] [i_3] [i_2]))))));
            }
            for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1])) % (((/* implicit */int) (signed char)-77)))))));
                var_20 = arr_5 [i_2];
                var_21 = var_3;
                arr_19 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))));
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_22 [i_0] [i_0] [i_5] = arr_21 [i_5];
                var_22 += arr_10 [i_0] [i_2] [i_5];
                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [(signed char)21])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_5] [i_0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_2] [i_5]))))))))));
                var_24 = (signed char)30;
                arr_23 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))));
            }
        }
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_25 = ((signed char) ((((/* implicit */int) arr_11 [(signed char)8] [i_6])) == (((/* implicit */int) arr_11 [i_6] [i_6]))));
        var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_18 [i_6] [i_6]))))))));
        var_27 *= max((((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_1 [i_6] [i_6]))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-32))))));
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_24 [(signed char)2]))))))));
        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_7] [i_7]))));
        arr_32 [i_7] [i_7] = (signed char)-38;
    }
}
