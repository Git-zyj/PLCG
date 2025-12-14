/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81776
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (+((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_11 -= min(((-(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])), (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : ((-(arr_0 [i_0])))))));
                            var_12 = arr_3 [i_2] [i_2];
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) var_1);
                var_14 &= ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_3 [5ULL] [i_1])))) : (arr_10 [i_0] [i_1] [i_4] [i_5] [i_4] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */unsigned int) (-(26715417)))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_11 [i_0] [(signed char)1])))))))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)20471)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45096))) : (281474975662080ULL))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_4 - 1] [i_5])), (var_0)))), (min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_12 [i_0])))))))));
                            arr_15 [i_0] [i_1] [(signed char)8] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [1U] [i_0]);
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) min((min((arr_9 [i_0] [i_0] [(_Bool)1] [i_0]), (var_9))), (((/* implicit */unsigned short) arr_12 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_5)))), (var_2)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) var_3)), (var_8))))))))));
}
