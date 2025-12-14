/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7606
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
    var_12 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((var_3), (var_7)))) : (((/* implicit */int) min((var_6), (((/* implicit */short) var_3))))))));
    var_13 = ((/* implicit */unsigned char) var_1);
    var_14 = ((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0])), (arr_0 [i_0]))))));
        var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_5))), (((/* implicit */unsigned int) arr_2 [0U]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (short)-5028))) && (((/* implicit */_Bool) (+(arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)27517)))));
            var_18 = ((/* implicit */unsigned short) arr_2 [i_0]);
            var_19 = ((/* implicit */unsigned int) 627526199);
            arr_8 [i_0] [i_1 - 2] = ((/* implicit */unsigned char) arr_5 [i_1 - 3] [1U]);
            var_20 = ((/* implicit */unsigned int) max((var_8), (arr_5 [i_1 - 1] [i_1 - 3])));
        }
    }
    var_21 = var_0;
}
