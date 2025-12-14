/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87828
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) -2854536124957715025LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [(signed char)6] [(signed char)6] [i_0] [i_3] [(signed char)6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)32754)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11049))) : (2431040837U)));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) -471369377)) >= (var_17)))) : ((~(((/* implicit */int) var_14))))))));
                                var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [8ULL] [(unsigned char)4] [i_2] [8ULL] [i_2] [8ULL])) == (((((/* implicit */_Bool) -44971923)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) var_0)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)18)) : (-44971933)))) & (((9822432379892454574ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11064))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [(short)6] [i_1 - 1])) ? (arr_4 [8ULL] [i_1 - 1]) : (((/* implicit */unsigned long long int) -64)))) % (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1 + 1] [i_1 - 1] [(short)10]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 44971923)), (14823379371527688909ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((var_8) >> (((/* implicit */int) (_Bool)1))))) : (max((var_16), (((/* implicit */unsigned int) var_2)))))))));
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 4001789787278303317LL))))), (var_1)));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((/* implicit */int) var_2)))))));
}
