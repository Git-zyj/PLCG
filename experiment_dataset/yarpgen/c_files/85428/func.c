/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85428
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(134217728U)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [16ULL])))))));
                var_11 = ((/* implicit */long long int) (~((-(var_4)))));
                var_12 = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (((long long int) max((var_8), (((/* implicit */unsigned char) var_0)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (~(((var_5) | (arr_9 [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 2])))));
                            var_14 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(var_1)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (2147483647) : (((/* implicit */int) (unsigned short)65527)))))) : (max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)48))))));
    var_16 = ((/* implicit */unsigned int) ((unsigned short) max((var_6), (((/* implicit */short) var_0)))));
    var_17 = ((/* implicit */int) (((+(13681005453487540570ULL))) == ((+(var_5)))));
}
