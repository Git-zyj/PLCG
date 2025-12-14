/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88729
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
    var_14 -= ((/* implicit */unsigned int) (unsigned short)59175);
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (min((-4807120389807512580LL), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [(unsigned short)5] [i_3] [i_2] [i_3] [i_0 - 2] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57166)))))));
                            arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((min((4807120389807512569LL), (4807120389807512556LL))) != (min((((/* implicit */long long int) 4294967287U)), (-4807120389807512580LL)))));
                            arr_14 [i_3] = arr_4 [i_0 + 3] [i_3 - 2] [i_3];
                            arr_15 [i_0 + 1] [i_1] [i_3] [i_3] = ((/* implicit */int) -5823640168386924019LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned short) 0U);
                            var_17 = ((/* implicit */int) (-(-24LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
