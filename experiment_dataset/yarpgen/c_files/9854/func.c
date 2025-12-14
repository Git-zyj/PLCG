/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9854
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) -3778483301781502680LL)), (arr_1 [i_1] [i_1 - 1])))))) | (max((arr_1 [i_0 - 2] [i_1 - 1]), (arr_1 [i_0 - 1] [i_1 - 1])))));
                    var_19 = ((/* implicit */short) min((max((var_4), (((/* implicit */unsigned long long int) min((150987444U), (((/* implicit */unsigned int) (unsigned short)18569))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((3775563974357267244ULL) * (3775563974357267244ULL)))));
}
