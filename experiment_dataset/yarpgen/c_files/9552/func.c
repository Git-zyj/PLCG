/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9552
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
    var_11 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_1]);
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((arr_4 [i_0] [8ULL] [i_0]), (((/* implicit */int) max((((/* implicit */short) arr_8 [i_0])), (var_7)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                                var_13 ^= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_10 [i_4] [(unsigned short)7] [i_0] [i_3] [i_2] [(_Bool)1] [i_0])), (arr_9 [i_3] [i_1] [(unsigned char)18]))), (arr_0 [(signed char)6])));
                                arr_14 [i_1] [i_0] [12] [i_4] = min((max((var_8), (((/* implicit */unsigned long long int) max(((short)-10720), (((/* implicit */short) (_Bool)0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((var_2), (var_2)))), (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned short) max((((/* implicit */short) arr_11 [(_Bool)1] [(_Bool)1])), (max((((/* implicit */short) var_2)), (var_10)))));
                                var_15 = ((/* implicit */_Bool) var_1);
                                var_16 += ((/* implicit */unsigned int) var_0);
                                arr_19 [i_0] [i_1] [(unsigned short)12] = ((/* implicit */unsigned short) arr_7 [i_5] [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
}
