/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88153
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) || (((/* implicit */_Bool) (signed char)51))));
                                arr_11 [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_7 [i_2] [i_0] [15])))));
                                var_16 = ((/* implicit */short) ((max((var_0), (((/* implicit */int) arr_0 [i_2])))) << (((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-52)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) + (86))) - (8)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0] [i_1]) : (var_11))) : (max((arr_2 [i_0] [i_1]), (4611686018427387840LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned char) (+(var_10))));
    var_19 *= ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-23223)) : (((/* implicit */int) var_13))))))))) : (max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) (unsigned char)224)), (var_11)))))));
}
