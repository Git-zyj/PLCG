/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58722
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((signed char) (unsigned char)122))))) ^ (max((((unsigned int) (short)-26468)), (((((/* implicit */_Bool) 1726923304U)) ? (((/* implicit */unsigned int) var_12)) : (var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (((!(var_10))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (unsigned char)1)))))))) * (((/* implicit */int) ((unsigned char) ((var_13) > (((/* implicit */unsigned long long int) 0)))))))))));
                                arr_15 [i_4] [i_3 - 1] [i_2] [i_1] = ((/* implicit */_Bool) min((arr_4 [i_2] [i_3]), (((/* implicit */short) ((_Bool) ((unsigned char) var_1))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_14))))), (((unsigned char) (signed char)12)))))));
                arr_17 [i_1 - 1] = ((/* implicit */short) min(((+(((/* implicit */int) (short)26468)))), (((/* implicit */int) var_14))));
            }
        } 
    } 
}
