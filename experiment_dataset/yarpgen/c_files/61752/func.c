/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61752
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
    var_11 -= ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)63), (((/* implicit */unsigned short) (signed char)115)))))))) - (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) min((var_2), ((~(((((/* implicit */_Bool) (short)-21264)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32753))) : (-21LL)))))));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 - 1]))))) ? ((+(((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */int) (unsigned short)25611)) | (((((/* implicit */int) (unsigned short)9678)) | (((/* implicit */int) (signed char)15))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max(((unsigned char)246), (((/* implicit */unsigned char) (signed char)0))));
    var_14 = ((/* implicit */short) (-(3468869135601538547LL)));
}
