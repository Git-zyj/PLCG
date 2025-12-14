/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72571
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
    var_11 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_1), ((!(((/* implicit */_Bool) var_10))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -437947432)) ? (((/* implicit */unsigned int) 437947431)) : (2496446893U)))) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [i_0])))) ? (max((1798520402U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [(unsigned char)10]))))), ((~(var_6))))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) arr_8 [i_0] [8])))))))));
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 950397923U)) || (((/* implicit */_Bool) (signed char)-22))))))));
                        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-8492)) == (((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3] [i_3]))))), ((-(((unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 437947419)) ? (-323531311) : (((/* implicit */int) (short)17973)))), ((+(arr_3 [i_3] [i_3 - 1])))))))))));
                        var_17 = ((/* implicit */short) var_2);
                    }
                } 
            } 
        } 
    }
}
