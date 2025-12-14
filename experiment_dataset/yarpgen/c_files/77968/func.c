/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77968
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = (-(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_4 [i_0])))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])), ((unsigned short)28875)))) ? (min((var_12), (8388096LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_1] [i_1] [i_2] [i_2])))))) : (var_13)));
                                var_19 += ((/* implicit */int) var_4);
                                arr_16 [i_3] [(signed char)6] [(unsigned short)13] [i_2 - 2] [i_1] [i_4 - 2] = ((/* implicit */signed char) ((short) ((long long int) arr_12 [i_2 - 3] [i_2 - 3] [i_4 + 1] [i_4 + 1])));
                                arr_17 [i_1] [(_Bool)1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28875))) : (var_13))) >> (((var_9) - (377891802))))) * (((/* implicit */long long int) var_9))));
    var_22 *= ((/* implicit */short) ((var_9) << (((((/* implicit */int) var_17)) - (29675)))));
    var_23 = ((/* implicit */int) var_17);
}
