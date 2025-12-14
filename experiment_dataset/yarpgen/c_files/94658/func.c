/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94658
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
    var_10 = ((/* implicit */unsigned int) (+((~((+(((/* implicit */int) (short)28999))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) (+(max(((+(-2210967559898459246LL))), (((/* implicit */long long int) (+(arr_6 [18ULL] [i_1] [12U]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) (~((~(min((-2210967559898459246LL), (var_4)))))));
                                arr_15 [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1])))), (min((arr_6 [13LL] [13LL] [18LL]), (((/* implicit */int) arr_8 [i_4] [(unsigned char)16] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) (~(min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (max((var_6), (var_4)))))));
}
