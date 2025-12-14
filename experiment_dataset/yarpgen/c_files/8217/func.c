/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8217
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
    var_19 = ((/* implicit */int) (-(var_14)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) -1826198549))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) -1840201293))) ? (arr_3 [i_0]) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_3 [11]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((((arr_6 [i_2 - 2] [i_2 - 1] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) ((((int) var_8)) >= (max((((/* implicit */int) var_5)), (1849660290))))))));
                            var_23 = ((min((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_7 [i_2 + 1] [i_2 + 1] [i_3 + 2]))) - (max((((/* implicit */long long int) var_13)), (arr_7 [i_2 + 1] [2LL] [2LL]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)211)) & (-1826198549)))) ? (arr_7 [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1339377880)) ? (4637365324849372925LL) : (8884525567389476472LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))))))));
                arr_10 [i_0] = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (var_4)));
    var_26 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_13)) ? ((+(var_15))) : (((/* implicit */int) ((6467653616677042321LL) <= (var_12)))))), (((((/* implicit */_Bool) ((var_15) - (var_17)))) ? ((-(1849660276))) : (var_2)))));
}
