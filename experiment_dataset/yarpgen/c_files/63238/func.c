/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63238
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */_Bool) arr_5 [i_1] [(short)17] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_8)))) == (((/* implicit */int) min(((short)12589), (((/* implicit */short) (_Bool)1)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] [i_3 + 1] = ((((/* implicit */int) ((_Bool) arr_14 [i_3 + 1] [i_4 - 1] [(short)24] [i_4 - 1] [i_4] [i_4]))) - (min(((+(((/* implicit */int) arr_0 [i_1] [i_4 - 1])))), (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_4])))));
                                var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [(short)13] [(short)13] [i_2] [(short)13] [i_4 - 1] [i_3 + 1]))))), (((var_0) - (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_2]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */_Bool) var_6);
}
