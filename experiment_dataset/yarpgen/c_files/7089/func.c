/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7089
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
    var_11 = ((/* implicit */short) (_Bool)1);
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((_Bool) (-(((/* implicit */int) (unsigned short)28159))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)0))) ? (((((/* implicit */_Bool) (short)10689)) ? (((/* implicit */int) (unsigned char)237)) : (454250215))) : (((/* implicit */int) min((arr_2 [4ULL]), ((unsigned char)237))))))) : ((+(min((arr_0 [i_1 - 2]), (((/* implicit */unsigned long long int) arr_1 [11LL]))))))));
                arr_5 [i_0 - 3] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) (+(((/* implicit */int) arr_2 [i_1]))))));
                arr_6 [i_1] [i_1 - 4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4162413825U)) <= (((unsigned long long int) arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_2]))) > (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_2] [6ULL] [i_3]))))) & (((((/* implicit */unsigned long long int) 1157949384U)) ^ (0ULL)))))));
                arr_12 [i_2] = ((/* implicit */unsigned int) ((3696319489598176918ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_7 [i_3] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (2679313265241514930ULL))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_2);
}
