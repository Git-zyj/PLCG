/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65755
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
    var_20 = var_13;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)8] [(unsigned char)16] [(unsigned char)8] |= ((/* implicit */unsigned short) ((unsigned char) ((long long int) min(((unsigned char)247), (arr_1 [i_1])))));
                arr_6 [i_0] = var_17;
                var_21 = ((/* implicit */_Bool) 0LL);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((min((var_9), (var_2))), (((/* implicit */unsigned char) (signed char)13)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 23; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 4] [i_3 - 2])) ? (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                    arr_16 [i_4] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_3 - 1]))));
                }
            } 
        } 
        arr_17 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2])))) - (((/* implicit */int) (unsigned char)253))));
        var_24 = ((/* implicit */unsigned short) var_9);
    }
}
