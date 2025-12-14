/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56435
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
    var_20 = ((/* implicit */unsigned char) (short)32640);
    var_21 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0] [i_1] [i_3]) : (min((arr_11 [i_0]), (((/* implicit */long long int) arr_3 [i_1])))))));
                        arr_13 [(signed char)3] [(signed char)3] [i_0] [(signed char)3] = ((/* implicit */long long int) max((9680289039079529514ULL), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (17122017676363870410ULL)))))));
                    }
                    var_22 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_3 [i_0 - 2])))));
                }
            } 
        } 
    } 
}
