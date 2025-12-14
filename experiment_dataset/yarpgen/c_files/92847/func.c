/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92847
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
    var_19 = ((/* implicit */unsigned short) var_0);
    var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)133))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)59599)) && (((/* implicit */_Bool) 7772599071072964869ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (3782859475U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4586)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (680396453763033393ULL)))) ? (var_1) : ((+(var_1))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) (~(((unsigned long long int) 17766347619946518235ULL))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_4 - 1])) : (arr_10 [i_2])))) ? (min((arr_10 [i_2]), (arr_10 [i_2]))) : (((/* implicit */int) ((unsigned char) var_15)))));
                                arr_12 [i_4 + 1] [i_3] [i_2] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_3])) * (arr_6 [i_4 + 1] [i_4 - 1] [i_4 - 1]))))));
                                var_24 &= ((/* implicit */short) ((((arr_2 [i_3] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_10))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = (!(((/* implicit */_Bool) var_12)));
}
