/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56243
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (short)4617)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-4617)), (var_9)))), (var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [(signed char)1] [i_2] = ((/* implicit */unsigned long long int) var_9);
                            arr_12 [i_0 + 2] [i_1 + 2] [(signed char)8] [i_2] [i_0 + 2] [3ULL] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1]), (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 2]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_1 + 1]))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((0ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) (-(arr_0 [i_0 + 2] [i_1 - 1]))))));
            }
        } 
    } 
}
