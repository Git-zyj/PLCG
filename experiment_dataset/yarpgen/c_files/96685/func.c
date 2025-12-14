/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96685
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
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((8U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) != (((/* implicit */int) ((((/* implicit */int) var_12)) > (-2147483645))))))));
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((unsigned char) var_8));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_7))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] = ((/* implicit */unsigned int) -2147483645);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(var_1))))) ? (((/* implicit */unsigned int) ((((2147483645) / (2147483644))) / (((/* implicit */int) var_6))))) : (((((((/* implicit */unsigned long long int) -2147483645)) < (69818988363776ULL))) ? (((((/* implicit */unsigned int) var_1)) - (4294967290U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    var_16 = max((((((/* implicit */_Bool) (-(2147483644)))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) var_3)))), ((((+(var_0))) / ((+(((/* implicit */int) (unsigned short)1238)))))));
}
