/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60365
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
    var_10 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_4)), (var_9))))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_9)))) > (((unsigned long long int) ((unsigned short) var_6)))));
    var_12 = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_3))) % (((/* implicit */unsigned long long int) (+(var_2)))))), (max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned char) var_0))))), (var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (~(var_2)));
                            var_14 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) var_1)), (arr_6 [i_0] [i_0] [(_Bool)1] [i_3])))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_2)) < (arr_7 [i_0] [i_0] [i_0] [(_Bool)1])));
                            var_16 += ((/* implicit */unsigned int) arr_3 [i_2]);
                            var_17 += (-((+((-(((/* implicit */int) arr_8 [i_0] [i_1] [5U] [i_1])))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_7))))) <= ((+(var_7))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((long long int) var_9)))))));
}
