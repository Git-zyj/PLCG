/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75037
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_4 [i_2 - 1])) | (((/* implicit */int) arr_4 [i_2 - 1])))), (((/* implicit */int) var_0))));
                    var_18 = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_0] [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (arr_1 [i_1] [i_1]))));
                    var_19 ^= ((/* implicit */short) (+(((min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), ((-2147483647 - 1)))) ^ (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_2])) + (((/* implicit */int) var_6))))))));
                    var_20 = ((/* implicit */long long int) var_8);
                }
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */short) max((min((((/* implicit */int) var_16)), (33423360))), (((2147483647) | (((/* implicit */int) var_6))))));
                    var_21 = ((/* implicit */unsigned int) ((min((var_11), (((/* implicit */long long int) 2147483647)))) == (((/* implicit */long long int) (+((-(((/* implicit */int) var_14)))))))));
                }
                arr_13 [(unsigned char)2] = ((/* implicit */short) arr_4 [(_Bool)0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_1);
}
