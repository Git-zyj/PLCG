/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94428
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
    var_11 = ((/* implicit */unsigned short) ((int) 5U));
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 4294967295U)))) ? (max((((/* implicit */int) var_3)), (max((((/* implicit */int) var_1)), ((-2147483647 - 1)))))) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) max((max(((+(311328754U))), (4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_2))), (((int) arr_5 [i_0] [4] [(unsigned short)0])))))));
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1U)))) ? (max((((/* implicit */unsigned int) var_1)), (arr_5 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32854)))))) ? (((int) ((int) 3U))) : (((/* implicit */int) var_1))));
                }
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (arr_3 [i_3 + 1] [i_3 - 1] [i_3 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41364))) : (1372219042U)));
                    var_17 = ((/* implicit */int) arr_10 [i_0] [i_3]);
                }
                var_18 = ((/* implicit */short) max((max((((/* implicit */long long int) var_8)), ((-(arr_10 [i_0] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967291U)))))))));
            }
        } 
    } 
}
