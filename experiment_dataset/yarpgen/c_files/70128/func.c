/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70128
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
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((+(var_0))) > ((~(134217727ULL))))))) < (var_16)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned char)6] [i_1] [6U] [(unsigned char)14] = ((/* implicit */int) var_0);
                    var_20 = ((/* implicit */long long int) var_18);
                    var_21 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
