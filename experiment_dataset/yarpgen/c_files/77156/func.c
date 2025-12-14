/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77156
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? ((-(var_11))) : (var_10)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = var_8;
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-67))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)18028)), (arr_11 [i_2] [i_1 + 4] [i_2 - 1] [i_2] [i_2 - 1])))) <= (((/* implicit */int) arr_1 [i_0]))));
                        }
                    } 
                } 
                var_17 &= ((/* implicit */short) (unsigned short)37205);
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_1] [i_0] [i_1])))))));
                var_19 = ((/* implicit */unsigned char) (signed char)15);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6)))) | (((/* implicit */int) ((short) var_9)))))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((max(((short)31804), (var_3))), ((short)0)))))))));
}
