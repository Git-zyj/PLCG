/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96257
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
    var_11 = ((int) 182340246U);
    var_12 = var_6;
    var_13 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) var_8))))) == (((((/* implicit */_Bool) (~(var_0)))) ? (var_10) : (((/* implicit */int) ((var_2) >= (var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) var_8))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    var_15 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1350551277))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 3])) ? (var_0) : (((/* implicit */unsigned int) -1350551278))))))));
                    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((2252294810U) - (792440001U))), (2042672486U))))));
                    var_17 *= ((/* implicit */unsigned int) min((8970374388857928761LL), (((/* implicit */long long int) 182340252U))));
                    arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */int) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))))), (((((/* implicit */_Bool) -1089740619)) ? (var_7) : (((/* implicit */long long int) arr_1 [i_2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (2214634255U) : (792440004U))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((int) (((!(((/* implicit */_Bool) 792439999U)))) ? ((-(arr_2 [i_2 - 2]))) : (((/* implicit */unsigned int) ((int) var_6))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_8)))))))));
                        var_20 = ((/* implicit */int) max((min((min((arr_5 [i_2] [i_1] [17]), (((/* implicit */long long int) arr_1 [i_3])))), (((/* implicit */long long int) (~(arr_3 [i_1] [i_1])))))), (var_7)));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_21 *= ((/* implicit */int) ((min((((/* implicit */long long int) max((2042672486U), (var_1)))), (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_4] [i_1]) : (((/* implicit */long long int) arr_1 [18])))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_4]) > (arr_2 [i_0 - 2])))))));
                        var_22 = ((/* implicit */unsigned int) (-(((((((/* implicit */unsigned int) -1845426491)) >= (2252294812U))) ? (1760585907444986081LL) : (((/* implicit */long long int) 1671912558))))));
                        arr_14 [i_0] [i_2] [2U] [i_2] [i_4] [i_4] = (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_7)))) ? (((2252294810U) >> (((var_5) - (2688963658U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (var_1))))))));
                    }
                }
                var_23 &= ((/* implicit */long long int) arr_12 [i_0 - 2] [i_0 + 1]);
            }
        } 
    } 
}
