/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94393
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((var_1), ((signed char)-8)))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_3])) : (((/* implicit */int) (signed char)73)))))));
                            arr_10 [i_0] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)25))))) ? (((/* implicit */int) ((signed char) (+(arr_7 [i_0] [i_1] [i_2] [i_3 + 2]))))) : (((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])) & (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                arr_11 [(unsigned char)10] [(short)13] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1 + 1] [i_1])))) + (min((((arr_6 [i_0] [i_1 - 1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [4U] [4]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
}
