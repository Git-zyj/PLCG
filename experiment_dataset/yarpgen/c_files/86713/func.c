/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86713
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = max((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [9ULL]), (((/* implicit */long long int) arr_2 [i_0])));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) / (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [(_Bool)1])))))))) ? (arr_0 [i_0]) : (6501230969911469959LL))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), ((~(2047LL)))));
                            arr_13 [(short)1] [i_1] [i_1] [i_3 + 1] [i_4] [i_3] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_2 + 1] [i_3]));
                            var_22 = ((/* implicit */long long int) (~(((15147912831788025375ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) (+(131071LL)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (3298831241921526236ULL)))))) || (((/* implicit */_Bool) -2047LL)));
                    }
                    var_24 = min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (arr_5 [i_1] [i_1]))))), (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))), (arr_9 [i_0] [(unsigned short)3] [i_0] [(_Bool)1] [(unsigned short)3] [(unsigned short)3]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_2)) - (55409)))));
}
