/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86879
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_8);
                arr_6 [i_0] = ((/* implicit */unsigned int) var_12);
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) != (var_1)))), ((-(((/* implicit */int) var_13))))))) ? ((+((-2147483647 - 1)))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_13))))) ? (max((((/* implicit */int) var_12)), (-1037110358))) : (max((1037110357), (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (-((+(33554431U)))));
                            arr_12 [i_2] &= ((/* implicit */int) max((((((/* implicit */_Bool) max((1037110357), (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 4071487155U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (33554439U))) : ((+(var_7))))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)7)), ((short)-28620))))));
                            var_17 = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (17590038560768LL) : (((/* implicit */long long int) 1037110357)))), (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_6))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -17590038560765LL)) : (((((/* implicit */_Bool) 2147483647)) ? (var_0) : (((/* implicit */unsigned long long int) 1586149395U))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (-(2147483647)));
    var_20 = (~((-(-8905803021315292124LL))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1586149395U))))));
}
