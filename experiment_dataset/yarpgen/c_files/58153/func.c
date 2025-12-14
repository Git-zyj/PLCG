/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58153
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
    var_13 = ((/* implicit */short) (~(((int) ((3409806473073432610ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))))))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(var_10)))), (var_1)));
    var_15 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [(signed char)17] = ((/* implicit */int) ((((/* implicit */long long int) ((var_5) ^ (((/* implicit */unsigned int) min((arr_1 [i_0] [i_0]), (((/* implicit */int) (short)-18692)))))))) + (((((/* implicit */long long int) 283434663)) / (min((var_1), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((1479602753U), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) 1677108863U))) >= (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) >= (((/* implicit */int) (signed char)-7)))))))))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-39))))), (((short) 490637108U)))))));
                        arr_12 [i_3] [i_1] [i_0] = ((int) ((long long int) -283434650));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_18 -= ((/* implicit */short) arr_1 [i_4] [i_4]);
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)127)))))));
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_13 [i_4])) / (((var_9) * (((/* implicit */unsigned long long int) 490637108U))))));
        arr_18 [i_4] = (~(((((arr_11 [8] [i_4] [i_4] [i_4] [i_4] [i_4]) + (2147483647))) >> (((1471656580) - (1471656557))))));
    }
}
