/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66234
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
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = var_17;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_21 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [(unsigned short)4]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned long long int) ((arr_2 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) arr_15 [i_4 + 3]);
        var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)178))));
        arr_17 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) <= (((/* implicit */int) var_14)))))) * (((8191U) << (((((/* implicit */int) arr_14 [i_4 + 3])) + (109)))))));
    }
    var_26 = var_7;
}
