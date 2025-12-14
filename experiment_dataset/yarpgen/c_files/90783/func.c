/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90783
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
    var_16 = ((/* implicit */unsigned long long int) (-(var_6)));
    var_17 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_15)) + (min((((/* implicit */long long int) var_7)), (var_9))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) var_15)))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (552707613)))), (min((var_8), (((/* implicit */unsigned int) min((var_1), (var_3)))))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_2 [i_0 + 2]) ^ (arr_2 [i_0 + 2])))) == (((unsigned long long int) arr_2 [i_0 + 2])))))));
        var_20 = ((/* implicit */long long int) ((arr_2 [i_0]) > (((arr_2 [i_0 - 2]) * (arr_2 [i_0 - 2])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_21 = ((((/* implicit */long long int) 131276931)) % (-2638768789147688807LL));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_4 [i_0] [5] [13LL]))));
        }
    }
    var_23 = ((/* implicit */unsigned int) (+(131276931)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_9 [i_2] [i_3] [i_3])), (arr_10 [i_2] [i_3])))));
                var_25 = ((/* implicit */unsigned int) arr_11 [14LL] [i_2]);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_10 [i_2] [i_2]))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */signed char) min((((unsigned long long int) var_11)), (arr_11 [i_2] [i_2])));
                var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_3] [i_2] [i_2])), (arr_10 [i_2] [i_2])))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)87)) : (var_2))))))));
            }
        } 
    } 
}
