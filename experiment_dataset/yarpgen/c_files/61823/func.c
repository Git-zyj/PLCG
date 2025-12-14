/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61823
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((var_9), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)57534)) : (var_10)))))) : (max((var_7), (((long long int) arr_2 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(unsigned short)15] [(unsigned short)15])), (min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)8002)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            {
                var_12 += ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-126)), (max((((/* implicit */int) (short)32767)), (-459124621)))))), (1222323277U)));
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_22 [i_2 + 3] [i_1] [8] [i_4] [i_4] = ((/* implicit */long long int) arr_9 [1U]);
                                var_13 = ((/* implicit */short) (unsigned short)8001);
                                arr_23 [(_Bool)1] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_13 [19])) << (((((((/* implicit */unsigned int) -185743381)) - (arr_20 [i_3] [i_2] [i_3] [i_2] [(unsigned short)2] [i_4] [i_3]))) - (670791112U))))), (-2147483641)));
                            }
                        } 
                    } 
                } 
                arr_24 [i_1] [i_2 + 1] = ((/* implicit */long long int) (unsigned short)57344);
            }
        } 
    } 
}
