/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93906
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) != (((/* implicit */int) var_3))))))))) << (((((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_14))))) + (var_1))) - (2150088087U))))))));
                                var_17 += ((/* implicit */long long int) ((var_4) ? (((((/* implicit */int) (signed char)84)) / (((/* implicit */int) (unsigned char)218)))) : (((((/* implicit */int) var_3)) ^ (((((/* implicit */int) (unsigned char)223)) << (((var_6) - (10793380259794673057ULL)))))))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) var_3)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (signed char)-1)))))))) ? (max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)162))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) <= (((/* implicit */int) (unsigned short)36833)))))));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */int) ((unsigned short) var_7))), ((-(((/* implicit */int) (unsigned char)113)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)15)) != (((/* implicit */int) (unsigned char)108))))), ((unsigned short)16454))), (((/* implicit */unsigned short) (unsigned char)78))));
    var_20 = ((/* implicit */unsigned char) var_12);
}
