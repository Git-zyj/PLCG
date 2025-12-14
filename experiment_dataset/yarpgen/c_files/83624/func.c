/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83624
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
    var_13 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    var_14 = ((/* implicit */_Bool) (-(3103556391723557945ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (max((15343187681985993671ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))));
                arr_4 [i_1] = ((/* implicit */long long int) (-(2028862048742879299ULL)));
                var_16 |= ((/* implicit */int) var_3);
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) max((3103556391723557944ULL), (3528231148088728075ULL))))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) / (-567579805171386553LL))), (((/* implicit */long long int) arr_2 [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_7 [i_2] [i_3]), (arr_7 [i_2] [i_3])))), (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_3] [i_2]))))));
                var_20 = arr_7 [i_2] [i_3];
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((10853717509331887572ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2])))))) > (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_2] [i_3]))))))), (4026131300464801284ULL)));
            }
        } 
    } 
}
