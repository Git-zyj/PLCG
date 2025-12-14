/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6745
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((max((((arr_3 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) : (arr_6 [(_Bool)1] [(_Bool)1] [i_1]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [i_0] [i_1] [(signed char)6]))))) - (((unsigned int) max(((signed char)16), ((signed char)92))))));
                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (399721851U))), (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))))))));
                var_15 = ((signed char) ((_Bool) (signed char)-14));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_0])))) && (((/* implicit */_Bool) var_2))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) 884835176191031327ULL))))) >= (((var_4) ? (((var_12) - (var_12))) : (((/* implicit */int) ((arr_5 [i_3] [i_1] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((((/* implicit */int) (signed char)-18)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-19)) || ((_Bool)0)))))), (max((((/* implicit */int) (signed char)17)), ((+(((/* implicit */int) (signed char)-19)))))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */short) (_Bool)1);
                                var_19 = ((/* implicit */signed char) arr_10 [i_1] [i_1]);
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-762899993), (((/* implicit */int) (unsigned char)29))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (818486950200767585ULL)))))) ? (((((/* implicit */unsigned int) (+(arr_0 [(short)14])))) * (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))))))) : (var_9)));
                                var_21 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)29)), (var_3)))) >= (((/* implicit */int) var_3))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))));
                                var_22 = ((/* implicit */unsigned char) var_6);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_11);
}
