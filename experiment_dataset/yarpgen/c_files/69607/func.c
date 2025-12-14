/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69607
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
    var_18 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) var_14))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = (~(((-4222350472324372859LL) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_3] [i_3])))))));
                                var_20 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2040006228184017339LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_21 += ((/* implicit */unsigned char) ((616491936973922248LL) / (616491936973922228LL)));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) -616491936973922228LL))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_3))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) & ((-(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
    var_26 = ((long long int) var_17);
}
