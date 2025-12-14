/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61420
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
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_7)))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(3552463501608531871LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((signed char) var_1));
    var_21 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_22 += ((/* implicit */unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) ((unsigned int) min((9223372036854775807LL), (arr_4 [i_2] [i_2] [i_2])))))));
                arr_11 [i_2] = ((/* implicit */unsigned short) ((((arr_7 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_2]))))) ? (((/* implicit */int) ((signed char) arr_10 [i_2] [i_3] [i_2]))) : (((/* implicit */int) min((arr_10 [i_2] [i_2] [i_2]), (arr_10 [i_2] [(short)9] [(_Bool)1]))))));
                var_23 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_3])), (var_12))), (((/* implicit */unsigned int) 293264743))));
            }
        } 
    } 
}
