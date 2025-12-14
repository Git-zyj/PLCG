/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93175
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((var_6), (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_13)) / (arr_7 [i_0] [(unsigned char)15])))))) % (((unsigned int) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_8 [8LL] [i_1] [i_1 - 1] [4ULL])) : (((/* implicit */int) arr_3 [i_0] [i_2])))))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)10688)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-22660)) > (((/* implicit */int) (unsigned char)118))))) : (((((((/* implicit */int) (short)-9734)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) - (28323))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2] [i_3] [i_4 + 2])))))));
                                var_24 = ((/* implicit */unsigned char) arr_11 [i_0] [0ULL] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
