/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94164
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = arr_3 [i_0] [i_1] [i_1];
                var_14 = ((/* implicit */_Bool) (-((~((+(arr_2 [i_0 + 1] [i_0 + 1])))))));
                var_15 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1]))) : (2271108337604788416LL))));
                var_16 = var_8;
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
    var_18 |= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((5037848233031240201LL) >= (((/* implicit */long long int) ((int) 5037848233031240201LL))))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_2 + 1] [i_3])), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) >= (-5037848233031240183LL))))))));
                            var_21 = (((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (5037848233031240201LL))))) / ((-((-(5037848233031240201LL))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min(((-(-5037848233031240201LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2] [i_3 - 1])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (signed char)124)))));
}
