/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81649
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
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_2 [i_1]))));
                var_13 = ((/* implicit */signed char) ((unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (_Bool)0))));
                }
                /* LoopNest 3 */
                for (long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_5 - 1] [i_5] [i_5 + 1] [i_3 - 1] [i_0])))) ? (arr_4 [i_0] [i_3 - 4] [i_0]) : (((/* implicit */long long int) (+(arr_10 [i_0] [i_5 - 1] [i_3 - 4] [i_0]))))));
                                var_16 *= ((/* implicit */unsigned char) (!((_Bool)1)));
                                arr_15 [i_0] [i_3] [i_0] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_3 - 4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_5);
}
