/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90908
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
    var_13 = ((/* implicit */unsigned char) (!(((_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) (unsigned char)26)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) 4214178087U);
                    var_15 = ((/* implicit */unsigned short) arr_6 [(unsigned short)5] [(_Bool)0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_10)) ? (-783822747) : (((/* implicit */int) (_Bool)1))))))));
}
