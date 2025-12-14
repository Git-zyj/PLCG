/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80883
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4092)) ? (1424308809U) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)-118)))))));
    var_21 = ((/* implicit */long long int) (+(max(((+(2870658486U))), (((/* implicit */unsigned int) ((_Bool) (short)-29627)))))));
    var_22 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (short)4091)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4104))) : (1424308810U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)224)) ? (2146959360) : (((/* implicit */int) (short)-4096)))))))));
    var_23 = ((/* implicit */int) ((7706032901130578123LL) << ((((((~(var_9))) + (892061986))) - (4)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2])) ? ((+(((/* implicit */int) arr_11 [i_1] [i_2] [i_3 + 2] [i_4])))) : (((/* implicit */int) (signed char)72))))) / (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [8] [i_3 + 2])) ? (744190307U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10)))))))));
                                arr_15 [3U] [i_1] [(_Bool)1] [i_1] [i_4] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 + 2]);
                                arr_16 [i_0] [(signed char)6] [i_2] [(short)6] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5950139131540507183ULL))));
                            }
                        } 
                    } 
                    arr_17 [5U] [i_1] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) -703006026))))), ((signed char)-66))))));
                    arr_18 [8U] [8U] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((signed char)-66), (((/* implicit */signed char) arr_2 [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
