/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63111
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
    var_15 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1])) / (arr_4 [i_0] [i_0] [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (1345413645595352444LL)))) ? (((/* implicit */int) ((_Bool) 18446744073709551615ULL))) : (((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [4] [i_1 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) -1635508021509934040LL)) ? (1635508021509934044LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_4 + 2])) : (((/* implicit */int) var_9)))));
                                var_19 = ((/* implicit */unsigned short) ((long long int) arr_5 [i_0] [i_1] [i_2]));
                                var_20 = ((/* implicit */_Bool) (((+(var_10))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_4] [i_4 + 2] [i_4] [(signed char)7] [i_4] [i_4] [i_4])), (arr_10 [i_4] [i_4 - 3] [i_4] [i_4 - 3] [i_2])))))));
                                var_21 = ((signed char) ((unsigned short) max((-1635508021509934050LL), (((/* implicit */long long int) var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
