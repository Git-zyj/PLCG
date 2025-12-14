/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8337
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_17);
                                var_19 &= var_10;
                                var_20 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned short)6] [i_1 - 1] [(short)9])))), (((arr_4 [i_0 + 1] [i_1 - 2] [i_2]) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1] [8LL])) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */short) max((max((((/* implicit */long long int) max((var_14), (((/* implicit */short) (_Bool)1))))), (((long long int) (short)30885)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)0])) ? (var_8) : (((/* implicit */int) arr_0 [i_1 - 1]))))))))));
                    var_22 = (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)96))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((signed char) var_8)))));
    var_24 = ((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) ^ ((((!(((/* implicit */_Bool) var_15)))) ? (((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5])) && (((/* implicit */_Bool) (signed char)-91))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_17 [i_5 + 2]))));
    }
}
