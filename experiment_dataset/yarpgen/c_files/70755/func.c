/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70755
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
    var_17 = ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */_Bool) arr_2 [i_1 + 1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 17; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_4] = (_Bool)1;
                                arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_3] [(unsigned short)10] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_15))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5] [i_0]))))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                                var_21 = ((/* implicit */unsigned long long int) (unsigned short)60008);
                            }
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((((!(var_16))) ? (var_5) : (((unsigned long long int) 1620884249)))) : (var_4)));
}
