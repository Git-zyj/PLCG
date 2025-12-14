/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96216
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
    var_12 = ((/* implicit */short) min((((/* implicit */int) var_6)), ((~(((int) 4294967292U))))));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) var_2)) * (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)27428)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))), (((var_10) >> (((var_3) - (6125770961338516007LL)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) arr_1 [i_0] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (3834480768U)))))) + (arr_0 [i_0] [i_1])));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4096)) >> ((((((-2147483647 - 1)) - (-2147483620))) + (35)))))) ? (min((((/* implicit */long long int) arr_3 [i_0] [i_1 + 1] [i_1 - 1])), (var_3))) : (max((((/* implicit */long long int) var_2)), (arr_0 [i_1 + 1] [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_5 [i_3]);
                            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
