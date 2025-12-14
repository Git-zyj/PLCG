/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56075
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
    var_18 &= ((/* implicit */short) (_Bool)1);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */short) arr_5 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1]);
                    arr_6 [i_2] [(unsigned char)8] = ((/* implicit */signed char) ((long long int) (unsigned char)47));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)215)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) var_7)))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_14))));
}
