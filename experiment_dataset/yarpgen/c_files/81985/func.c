/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81985
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((3619125517082662633LL) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((max((((/* implicit */long long int) var_0)), (var_9))) << (((((/* implicit */int) ((3416877618313477560LL) != (((/* implicit */long long int) ((/* implicit */int) var_11)))))) - (1)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3416877618313477582LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-30401))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) -7586041571033811739LL);
                arr_5 [i_0] [(signed char)10] &= ((/* implicit */long long int) ((((((16185341308655249104ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */int) arr_3 [4U])) : (((((/* implicit */int) arr_2 [14ULL])) >> (((((/* implicit */int) arr_2 [10U])) - (93))))))) <= (((/* implicit */int) (signed char)3))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_4 [i_2 - 2] [i_2] [i_0]);
                                arr_15 [(signed char)0] [i_3] [i_0] [1U] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3416877618313477566LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((114688) != (((/* implicit */int) (signed char)-43)))))));
                                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)33847)), (17702237652502362496ULL)));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) 8ULL)))), (((1918532810) != (((/* implicit */int) (signed char)-121)))))))));
            }
        } 
    } 
}
