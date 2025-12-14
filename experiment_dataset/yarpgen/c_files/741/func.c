/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/741
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
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((arr_2 [(unsigned short)22] [i_1]), (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [(unsigned char)2]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_3 [(unsigned short)8] [i_1] [i_1]))))))))));
                var_13 = ((/* implicit */int) ((short) (_Bool)1));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) (_Bool)1);
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((arr_4 [23ULL] [i_2] [i_3 + 1]) ? (((/* implicit */int) ((unsigned char) arr_4 [i_2] [i_2] [i_3 - 2]))) : (((/* implicit */int) min(((_Bool)0), (arr_4 [i_3] [i_2] [i_3 + 3]))))));
                    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_10 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? (min((arr_12 [i_3 + 1] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))), (((/* implicit */unsigned long long int) min((arr_9 [i_3 + 2] [i_3 + 2]), (((/* implicit */signed char) min((arr_4 [i_2] [i_2] [i_2]), (arr_1 [i_3])))))))));
                    arr_16 [i_2] = ((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_2]);
                    arr_17 [i_2] [i_2] = min((((min((arr_12 [i_2] [i_2]), (0ULL))) ^ (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2] [i_4])))) : (min((-3836303118305708522LL), (((/* implicit */long long int) (unsigned short)25002))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (_Bool)0);
    var_17 = ((/* implicit */long long int) ((_Bool) 18446744073709551599ULL));
}
