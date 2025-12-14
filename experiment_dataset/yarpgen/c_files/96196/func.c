/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96196
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
    var_12 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (+((~(var_9)))));
                var_14 = ((/* implicit */int) var_11);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((arr_5 [i_2] [12]) >> (((/* implicit */int) (unsigned char)42))));
                            arr_9 [i_0] [i_2] [i_2] [i_3] = (~(((/* implicit */int) ((1125899638407168LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3])))))));
                            arr_10 [(unsigned char)22] [i_1] [0LL] [0LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? ((((~(6391200945575748765LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_0)))))))));
                            var_16 = ((/* implicit */long long int) 1103555050484479328ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)125))));
    var_18 = ((/* implicit */long long int) var_0);
}
