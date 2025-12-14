/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7823
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_13))))))), (var_9)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_6 [4ULL] [4ULL] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_11 [i_0]);
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) var_2);
                                arr_14 [i_0] [i_1] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_4 - 2] [i_4])) == (((/* implicit */int) min((arr_9 [i_4 - 2]), (((/* implicit */unsigned short) arr_6 [i_4 - 2] [i_4] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_2))));
}
