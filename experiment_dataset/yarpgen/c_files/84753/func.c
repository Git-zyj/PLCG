/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84753
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
    var_14 = ((/* implicit */long long int) var_7);
    var_15 = ((/* implicit */short) ((((((/* implicit */int) var_4)) <= (max((var_6), (((/* implicit */int) var_13)))))) ? (((((229226967U) % (229226957U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((var_13), (var_13)))) ? (((((/* implicit */_Bool) var_4)) ? (1619366592U) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned short) max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_3 [(unsigned short)4] [i_1 + 4]))));
            var_19 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)109)))));
            var_20 = ((/* implicit */short) ((_Bool) var_12));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_2 [i_1 + 4] [i_0 + 3]);
                        var_22 = ((/* implicit */int) ((arr_6 [i_0 + 1] [i_1]) - (((/* implicit */long long int) var_9))));
                    }
                } 
            } 
        }
        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_0])))))) * (((arr_0 [i_0 + 3]) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 + 1])))));
    }
    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_4 + 1]) >> (((((/* implicit */int) var_1)) + (18987)))))) ? (max((arr_8 [i_4 - 1]), (arr_8 [i_4 + 2]))) : (min((arr_8 [i_4]), (arr_8 [i_4 + 1])))));
        var_25 = ((/* implicit */short) arr_8 [9]);
    }
}
