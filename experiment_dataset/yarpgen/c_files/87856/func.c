/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87856
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) arr_7 [i_0]);
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((unsigned char) max((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_3 [i_0])) - (33413))))), (((/* implicit */int) arr_3 [i_1]))));
                    arr_10 [(unsigned short)1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15735)) ? (((/* implicit */int) (signed char)24)) : ((~(((/* implicit */int) ((((/* implicit */int) (short)-3094)) < (((/* implicit */int) (short)26764)))))))));
                    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)221))))), (((max((arr_1 [(_Bool)0] [i_1]), (var_12))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_6 [i_1] [8LL])) : (arr_7 [5])))) : (((5138511217321960756LL) << (((((/* implicit */int) (unsigned short)15194)) - (15194)))))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-3118)) ? (4048016855918203676LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))) ? (((/* implicit */int) ((short) 806064748U))) : (((/* implicit */int) min(((_Bool)1), (arr_5 [i_0])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
    var_17 -= ((/* implicit */_Bool) var_6);
    var_18 = var_11;
}
