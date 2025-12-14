/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71429
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
    var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (short)15443)), (1073479680LL))), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned short) var_16);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_2 [i_0 - 1]);
        var_20 = ((/* implicit */long long int) (+(min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
    }
    var_21 = ((/* implicit */int) var_3);
    var_22 += ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_12 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1])) && (((/* implicit */_Bool) arr_5 [i_3])))))) ^ (((arr_8 [i_2] [i_2] [i_2]) >> (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
                    var_23 -= ((/* implicit */signed char) ((min((((/* implicit */long long int) -1719670843)), (1073479682LL))) != (((/* implicit */long long int) ((/* implicit */int) (short)4148)))));
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_18 [i_4] [i_4] [i_2] = ((/* implicit */short) min((arr_8 [i_5 - 2] [i_4] [i_2]), (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_4 - 1] [i_1]))));
                            arr_19 [i_1] [i_2] [i_1] [i_5 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])) | (var_11))) > (var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
}
