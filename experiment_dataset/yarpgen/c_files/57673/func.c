/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57673
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
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 8380416U))))))));
                        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) | (((/* implicit */int) ((((/* implicit */unsigned int) var_8)) >= (4286586880U)))))))));
                    }
                    var_13 |= ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [(signed char)10] [i_1]))))), (((4503595332403200ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [(unsigned short)14] [i_0]))))))));
                    var_14 *= ((signed char) max((((/* implicit */long long int) (unsigned char)13)), (arr_1 [(short)8])));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) (-(4294967295U)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_2))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1))))))))));
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U)))) ^ (var_7))) <= (((/* implicit */unsigned long long int) var_3))));
}
