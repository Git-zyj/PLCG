/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65097
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
    var_20 = ((/* implicit */short) ((unsigned short) min(((-(var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max(((short)-4829), (min((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 - 1])))));
                            arr_10 [(signed char)1] [i_2] [i_2] [i_3] [i_2] [i_1] = var_2;
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)69))));
                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((var_17) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 1] [2] [i_0] [2])))))))) : (((/* implicit */int) arr_1 [i_0 + 2] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2]);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_3 [i_0 + 2] [i_4 - 2] [i_1 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-8LL))))));
    var_26 = ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) min((var_11), (var_11))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)4840)));
}
