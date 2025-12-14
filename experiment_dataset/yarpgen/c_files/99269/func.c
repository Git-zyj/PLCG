/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99269
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2))))), (var_9))))));
    var_14 = ((/* implicit */long long int) var_5);
    var_15 &= ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                        arr_10 [i_0] = max((arr_1 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((_Bool) var_5)))));
                        arr_11 [i_0] [9] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) ((arr_5 [i_0] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
            var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        }
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_8) ? (min((((/* implicit */unsigned int) var_5)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-22563)))) / (min((-772590773), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [15] [i_0] [i_0]))))))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (var_7)))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0]))))))));
    }
}
