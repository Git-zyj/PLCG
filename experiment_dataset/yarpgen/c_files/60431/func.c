/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60431
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
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((long long int) arr_2 [i_4 + 1])))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_13 [i_2]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)31)))))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_12)) - (4857)))))));
                            var_20 -= ((/* implicit */signed char) (unsigned short)16383);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1]))) < (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(signed char)12] [i_5] [(signed char)12] [i_6] [i_6])) : (arr_16 [i_0 - 1] [i_1] [i_1] [i_6])))))) % ((-(1073741824))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((long long int) max(((unsigned short)16352), ((unsigned short)44030)));
}
