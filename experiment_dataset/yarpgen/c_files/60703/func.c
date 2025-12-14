/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60703
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
    var_17 = ((/* implicit */signed char) ((long long int) ((short) -1342596114331742246LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */unsigned char) (((((+(((/* implicit */int) arr_4 [i_0] [i_0])))) <= (((((/* implicit */_Bool) (short)-20043)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1 + 1]))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) min((arr_4 [i_0] [i_1 + 2]), (((/* implicit */signed char) arr_3 [i_0] [i_1 - 2]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (arr_2 [i_0] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                            var_20 = ((/* implicit */short) (unsigned char)28);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)187)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) max((var_13), ((signed char)-1)))), (((unsigned int) 8650210970642742563LL)))) + (((/* implicit */unsigned int) 1247917638))));
}
