/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89051
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_3 [i_0 - 1])), (arr_0 [i_0])))), (max((((/* implicit */unsigned short) arr_3 [i_1])), (max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */short) max((max((((/* implicit */unsigned int) max((arr_10 [i_0] [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1]), (arr_10 [6ULL] [i_0] [6ULL] [i_0] [i_0])))), (max((arr_9 [i_0] [i_0] [2LL]), (((/* implicit */unsigned int) arr_1 [i_0])))))), (((/* implicit */unsigned int) arr_10 [17] [17] [i_2 - 1] [i_2] [i_3]))));
                            arr_13 [(signed char)11] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((unsigned short)3), (((/* implicit */unsigned short) (signed char)-12))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_13))));
    var_17 = ((/* implicit */unsigned char) var_12);
}
