/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8512
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_6)))), (min(((+(var_9))), (((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */int) (unsigned short)3142)) : (((/* implicit */int) var_4))))))));
                                var_14 = ((/* implicit */long long int) var_10);
                                var_15 = ((/* implicit */signed char) 179285184);
                                var_16 = ((/* implicit */unsigned int) ((((arr_0 [i_4]) > (arr_0 [i_1 - 1]))) ? ((+(((/* implicit */int) arr_10 [i_1] [i_3] [i_1 + 2] [i_1])))) : (var_9)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_0 [i_1 - 2]))) >> (((max((arr_0 [i_1 - 2]), (((/* implicit */long long int) var_11)))) - (7373518898432408931LL)))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */int) (unsigned short)35125)), ((-(((/* implicit */int) var_0)))))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3123)) << (((((-179285184) + (179285215))) - (17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_7)));
}
