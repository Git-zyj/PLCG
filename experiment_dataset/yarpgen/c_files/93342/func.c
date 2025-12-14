/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93342
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
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 |= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)241)))) * ((-(((/* implicit */int) (_Bool)0))))));
        var_21 = ((/* implicit */unsigned long long int) max(((short)7), (((/* implicit */short) (!((_Bool)1))))));
        var_22 = ((/* implicit */short) max((min((((/* implicit */int) (signed char)58)), (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) 6112779934730715818ULL)) && (((/* implicit */_Bool) var_10)))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (-1878096994) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-2234))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */int) max((((/* implicit */unsigned int) ((short) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((unsigned int) var_4))));
                            var_25 = (!(((/* implicit */_Bool) max(((+(12272687279761888054ULL))), (((/* implicit */unsigned long long int) arr_7 [i_5]))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) var_13)), (arr_12 [i_1] [9LL] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) ((unsigned int) max((var_16), (((/* implicit */unsigned long long int) arr_1 [i_1])))))))))));
            arr_15 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) -9223372036854775790LL);
        }
    }
}
