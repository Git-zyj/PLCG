/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78357
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
    var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) var_4);
                var_19 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) var_11)))))), (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-38)), (((((/* implicit */_Bool) var_3)) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (var_13)))));
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [18ULL] [i_4] = ((/* implicit */unsigned char) var_9);
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)31))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(min((-3604250995410185586LL), (((/* implicit */long long int) arr_9 [i_2] [i_3] [i_4 + 1])))))))));
                    arr_13 [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [(_Bool)0])) ? (arr_9 [i_4] [i_3] [i_4 + 1]) : (((/* implicit */int) arr_10 [i_2] [14U] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1] [i_4 - 3])))))));
                }
            } 
        } 
    } 
}
