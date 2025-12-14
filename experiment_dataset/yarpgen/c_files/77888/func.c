/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77888
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) 4294967295U);
                var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_4] [i_0] [i_3 - 2] [i_2 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_10 [(unsigned short)12] [i_2] [i_4]))))) ? (((/* implicit */long long int) 2425243589U)) : (arr_0 [i_1])));
                                arr_14 [i_4] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) (unsigned char)255)), ((~(((/* implicit */int) (unsigned char)13)))))));
                            }
                        } 
                    } 
                } 
                var_15 = min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_1])), (((unsigned int) (-(arr_4 [7ULL])))));
                arr_15 [i_0] = ((/* implicit */unsigned char) (+(min((arr_0 [i_1]), (arr_0 [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = ((/* implicit */unsigned char) (signed char)-37);
    var_18 = min((7U), (((/* implicit */unsigned int) (unsigned char)245)));
}
