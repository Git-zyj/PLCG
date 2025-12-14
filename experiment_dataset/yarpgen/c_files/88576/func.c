/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88576
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2950874308686921777LL)) ? (-2950874308686921780LL) : (2950874308686921761LL)));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (var_7))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)5038)) : (((/* implicit */int) (unsigned char)49))))) & (((var_0) >> (((((/* implicit */int) var_2)) - (32))))))))));
    var_15 = ((/* implicit */unsigned char) (-(max(((+(((/* implicit */int) (signed char)127)))), ((-(((/* implicit */int) (short)2621))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 321679572U)), (6606108022616264724LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)561))) ? (((((var_6) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_0 + 1] [i_0] [17U])) - (9295))))) : (((((-3907361814599059003LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)32)))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 1073741823LL))));
                            arr_11 [i_0] [6LL] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-8013))));
                        }
                    } 
                } 
                var_18 &= (short)5038;
            }
        } 
    } 
}
