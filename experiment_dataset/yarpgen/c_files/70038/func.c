/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70038
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
    var_15 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [9U] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                            var_16 = ((/* implicit */_Bool) min(((~(0ULL))), (min((0ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
                            var_17 = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                arr_13 [(unsigned short)11] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((756369209), (-756369209)));
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [7ULL] = ((/* implicit */short) ((unsigned short) ((signed char) var_1)));
                                var_18 = ((/* implicit */long long int) ((unsigned short) max((-34703707), (756369209))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
