/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96771
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
    var_10 = ((/* implicit */signed char) var_5);
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) max(((!((!(((/* implicit */_Bool) 4319964740718877499ULL)))))), (max(((_Bool)1), ((_Bool)1)))));
                arr_6 [i_0] [6LL] [i_0] = ((/* implicit */unsigned short) (+((+(14126779332990674136ULL)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned short) (~(max(((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (4319964740718877485ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1090715534753792LL)))))))));
                                var_13 = ((/* implicit */signed char) (+(max((14126779332990674136ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                                arr_14 [9LL] [i_4] [i_2] [i_2 + 1] [i_2] [2] [i_0] = max((max((arr_12 [i_3] [i_3] [i_2] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_8 [i_3] [i_4]), (((/* implicit */unsigned long long int) var_6)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_14 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) var_4)), (var_8)))));
}
