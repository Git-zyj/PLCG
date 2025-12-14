/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95962
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
    var_11 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7670292511131913542LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)14))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_13 = ((/* implicit */short) (unsigned short)14);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                var_14 = ((/* implicit */signed char) (~(7670292511131913573LL)));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned short)52665))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56961)) ? (-7670292511131913574LL) : (7670292511131913559LL)));
                arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned char)17] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 1])))));
                var_17 = ((/* implicit */int) arr_2 [i_2 - 1]);
            }
            var_18 = (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_0] [12U])), ((unsigned short)56961)))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_11 [i_1] [10] [i_3] [10] = arr_9 [i_0 + 2] [i_0 + 2] [i_3];
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)221)))), (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned short)56979))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (arr_9 [i_0] [i_1] [i_3])));
            }
            var_21 = 0U;
            var_22 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)8575)), (((((/* implicit */_Bool) -2091489567)) ? (-7670292511131913574LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)34);
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_5))));
}
