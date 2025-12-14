/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70785
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */_Bool) (~((~((-(18446744073709551615ULL)))))));
                            var_11 &= ((/* implicit */unsigned int) ((int) ((unsigned int) ((unsigned long long int) 7489035706862914582ULL))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) 1336754676);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 10957708366846637034ULL)) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (1168215608U) : (((/* implicit */unsigned int) arr_13 [i_4] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)32767)))))) : (((/* implicit */unsigned int) arr_13 [i_4] [i_4]))));
        var_14 = ((/* implicit */long long int) ((7489035706862914582ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_12 [i_4]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_4] [(_Bool)1]) < (arr_14 [i_4] [i_4])))))))))));
        var_15 = ((/* implicit */unsigned long long int) (-((-(arr_14 [i_4] [i_4])))));
    }
    var_16 = (!(((/* implicit */_Bool) var_10)));
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */unsigned int) ((((unsigned long long int) var_6)) <= ((+(var_7)))));
}
