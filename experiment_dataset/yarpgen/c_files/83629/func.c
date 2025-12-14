/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83629
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
    var_16 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -1928484486)) : (var_15))) - (((/* implicit */long long int) var_3)))) + (((/* implicit */long long int) -1928484486))));
    var_17 *= ((/* implicit */signed char) (+(var_5)));
    var_18 -= ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]);
        var_20 |= ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]));
        arr_2 [i_0] |= ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) -1928484500)), (((unsigned long long int) var_2))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [i_3] [i_2] [i_3] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1928484486))))) & (-1358818444)));
                        arr_11 [8LL] [i_3] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((signed char) (+(((var_6) - (var_6))))));
                        var_21 &= (!((!(var_10))));
                    }
                } 
            } 
            var_22 -= ((/* implicit */short) (~(((long long int) max((9223372036854775807LL), (((/* implicit */long long int) var_12)))))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) -1928484484)), (min((min((var_5), (((/* implicit */long long int) 1358818446)))), (((/* implicit */long long int) (signed char)-104))))));
            arr_14 [i_4] = ((/* implicit */signed char) arr_12 [i_0] [i_4]);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 |= ((/* implicit */_Bool) arr_16 [(short)6]);
        arr_17 [i_5] = ((/* implicit */int) (+(arr_16 [i_5])));
        var_25 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(_Bool)1]))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1358818444)))))))));
        var_26 |= arr_15 [i_5];
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) ((_Bool) var_13)))), (((signed char) ((((/* implicit */_Bool) arr_16 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (arr_16 [(_Bool)1])))))))));
    }
}
