/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76659
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
    var_20 = ((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0] [(unsigned short)10] [i_1 - 3])) | (((/* implicit */int) arr_0 [i_0 - 1]))))), (9223372036854775807LL)));
                    arr_6 [13LL] [13LL] [13LL] = ((/* implicit */unsigned long long int) var_2);
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) var_16);
        arr_11 [i_3] = ((/* implicit */unsigned short) max(((~(var_7))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        arr_15 [(_Bool)1] [i_4 - 2] = ((/* implicit */unsigned long long int) var_11);
        var_23 -= ((/* implicit */unsigned long long int) arr_0 [i_4 - 1]);
    }
}
