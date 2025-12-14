/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7625
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 4738865245517635344LL))))));
                var_18 = ((/* implicit */long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 1025777655)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) (-((+((~(-9223372036854775801LL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-((+((-(-9223372036854775801LL)))))));
                            arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((-((~(arr_0 [i_3] [i_5 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 += ((/* implicit */short) (~((~((-(var_0)))))));
    var_22 &= ((/* implicit */short) (~((-((+(1154459022)))))));
}
