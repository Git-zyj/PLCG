/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98450
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */long long int) ((unsigned short) (unsigned short)42125));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) var_6);
                            var_15 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_0 [i_2])), (((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1] [(unsigned char)13])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [6U] [i_2]))))))) >> (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 1])) - (64826)))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42126))) % (7627704324145926325ULL)))))) ? (var_0) : (((/* implicit */long long int) 3329920372U)));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1 + 1] [(unsigned short)19] [i_1]))), (var_1)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))) : (4175182716U)));
}
