/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96750
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
    var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_4 [i_2 - 2] [i_1] [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [(signed char)7])) - (min((((/* implicit */int) arr_0 [i_0])), (var_1)))))), (((((/* implicit */unsigned long long int) (-(1867731916U)))) + ((-(10626850435024958212ULL)))))));
                    arr_10 [13] [0U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (788018860U) : (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(10626850435024958208ULL)))))) : (max((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7819893638684593403ULL)))))))));
                    var_11 = ((/* implicit */unsigned long long int) min((min((2427235379U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)1323))))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max(((~(67108863U))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))));
        arr_12 [(unsigned char)9] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)108))));
    }
}
