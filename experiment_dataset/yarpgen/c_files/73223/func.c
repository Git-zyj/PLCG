/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73223
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
    var_14 *= ((/* implicit */short) min((max(((-(((/* implicit */int) (short)-21676)))), (((/* implicit */int) var_11)))), (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) (short)-13612));
        arr_3 [i_0] = ((/* implicit */_Bool) ((long long int) (short)-13629));
    }
    var_15 += ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
    var_16 += min((((/* implicit */short) var_1)), (var_0));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((short) max((max((((/* implicit */unsigned short) var_10)), (arr_7 [i_1] [i_2 - 1]))), (((/* implicit */unsigned short) (((_Bool)1) || (arr_4 [i_1])))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((long long int) ((unsigned short) var_1)));
                    arr_11 [i_1] [(short)13] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_8))) <= (((/* implicit */int) ((short) var_4)))));
                    var_18 = (((-(((/* implicit */int) var_9)))) < (((/* implicit */int) (unsigned short)65535)));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) < (arr_9 [i_2 - 1]))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519)))))))))))));
                    var_20 *= ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_1])), ((-(((/* implicit */int) (unsigned short)65535))))));
                }
            }
        } 
    } 
}
