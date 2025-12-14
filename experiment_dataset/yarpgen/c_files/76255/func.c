/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76255
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
    var_13 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 &= ((/* implicit */unsigned short) arr_7 [9LL]);
                        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -668424563)) ? (((/* implicit */int) (unsigned short)124)) : (-1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_15 ^= ((/* implicit */signed char) ((arr_14 [(unsigned char)2] [(unsigned char)2]) << ((((-(arr_4 [(_Bool)1]))) + (1227367043)))));
                        var_16 |= ((/* implicit */signed char) arr_7 [i_0]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_9 [i_2] [i_0] [i_2 - 1] [i_0] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_0] [i_2 + 1] [i_2 + 1] [i_2]))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_4] [i_0] [i_1] [i_0] [i_0]);
                        var_18 = ((arr_2 [i_4 - 1] [i_0]) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_1])));
                    }
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(min((arr_13 [4LL] [i_1] [i_1] [i_1]), (arr_13 [(_Bool)1] [i_2 - 1] [i_1] [(_Bool)1]))))))));
                    var_20 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_4) - (12116797927178314222ULL))))))))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) -668424563)) % (67108864U))))) - (42626)))));
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 + 1] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_2 - 1])))) ^ (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_2 + 1] [i_2] [i_2 - 1]), (arr_9 [i_2] [i_0] [i_2] [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
