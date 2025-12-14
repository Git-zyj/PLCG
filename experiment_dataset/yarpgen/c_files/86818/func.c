/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86818
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
    var_12 |= ((/* implicit */unsigned long long int) max(((signed char)-19), ((signed char)10)));
    var_13 = ((/* implicit */long long int) ((signed char) max((((var_8) ^ (var_9))), (((/* implicit */unsigned long long int) ((16681105217269814336ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_4))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_7)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_7);
                            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((unsigned long long int) var_3))))));
                            var_15 = var_0;
                            var_16 = ((/* implicit */long long int) min((var_16), (((max((var_11), (((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (158))) - (32))))))) | (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = var_4;
}
