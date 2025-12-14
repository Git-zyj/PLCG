/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80024
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) -732490448930925994LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = (+(((((/* implicit */_Bool) 0LL)) ? (max((-732490448930925994LL), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
                var_20 = ((/* implicit */long long int) var_10);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) 85557144U);
                            var_22 = ((/* implicit */unsigned short) arr_3 [4LL] [i_1]);
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (4294967277U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_3);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (732490448930925981LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (max((-732490448930925994LL), (var_14))))) : (((/* implicit */long long int) (+(var_7))))));
}
