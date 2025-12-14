/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91218
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
    var_16 += ((/* implicit */long long int) var_14);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_3))));
    var_18 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0 - 1])))) * (min((0U), (3849106793U))))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                var_20 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (signed char)-29)), (var_5)))));
                var_21 = ((/* implicit */long long int) max((var_21), (((long long int) max((((/* implicit */unsigned int) (signed char)-66)), (0U))))));
                var_22 += ((/* implicit */unsigned char) var_7);
            }
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_23 = ((/* implicit */short) (_Bool)1);
                arr_11 [i_0] [i_0 - 1] [(unsigned char)2] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (arr_1 [i_0 + 2])))), (((unsigned long long int) arr_1 [i_0 + 2]))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 2])))) | (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) var_9))))));
            arr_16 [9ULL] [i_4] = (~(min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) / (arr_2 [i_0]))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_0 + 3] [i_4]))))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(445860508U))))));
            arr_19 [i_0 + 2] [(_Bool)1] [6LL] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)89))))), (var_6));
        }
        var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [6LL])))))))));
        arr_20 [i_0 + 3] = ((/* implicit */signed char) ((short) max((939741940000186702ULL), (((/* implicit */unsigned long long int) 6884419743970826929LL)))));
    }
}
