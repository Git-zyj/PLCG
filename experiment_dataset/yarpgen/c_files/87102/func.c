/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87102
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
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) (unsigned char)75)) ? (15831626486742957594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                var_17 = ((/* implicit */unsigned long long int) (-(min((max((((/* implicit */unsigned int) var_4)), (var_14))), (((/* implicit */unsigned int) arr_0 [i_1]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1] [i_0])) ? (var_13) : (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)96), ((unsigned char)159))))) : ((~(14164508648216372527ULL))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_3] [i_3] [i_1] [i_3])))))))));
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 - 1] [i_1 + 1] [i_1 + 1])) / (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_1 + 1] [i_0])))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_20 = ((/* implicit */int) ((_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (4282235425493179088ULL))), (arr_2 [i_1] [i_2 - 1] [i_3]))));
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(var_11)))) * (((((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [i_2 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1 + 1] [i_2 - 1]))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) >= (max((var_12), (((/* implicit */unsigned long long int) var_13))))))))))));
                }
            }
        } 
    } 
}
