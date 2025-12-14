/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79550
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [14] [i_0] = ((/* implicit */unsigned int) max((((((_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (342132760430736724ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1] [12LL] [i_0])) * (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_0])))))));
                var_12 = ((((/* implicit */_Bool) var_6)) ? (max((((-7LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [17LL])) ? (arr_2 [i_0]) : (arr_2 [i_1]))))) : (-8536151716085049090LL));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
                arr_13 [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)255);
            }
        } 
    } 
}
