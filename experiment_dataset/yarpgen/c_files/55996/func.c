/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55996
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
    var_18 = ((/* implicit */signed char) min((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_10))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != (arr_1 [i_0])))) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)50689)), (-641490859))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0])), (arr_8 [i_1] [i_3 + 2] [i_1] [i_1]))))));
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) / ((-(((/* implicit */int) (unsigned short)3420)))))) | (((/* implicit */int) (signed char)-74))));
                        var_23 = ((/* implicit */short) arr_8 [i_0] [i_0] [i_3 + 2] [i_3 + 2]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((max((arr_1 [i_0]), (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))), (((((min((var_15), (((/* implicit */long long int) var_3)))) + (9223372036854775807LL))) >> (((min((((/* implicit */unsigned int) (unsigned short)62115)), (arr_2 [i_0]))) - (62114U)))))));
        var_25 |= ((/* implicit */unsigned short) var_16);
    }
}
