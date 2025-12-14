/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63640
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
    var_11 = ((/* implicit */int) var_0);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (max((min((1356319902926779769LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (-(var_3)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) var_1)), (var_2)))))));
    var_13 -= ((/* implicit */signed char) ((long long int) (short)4533));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */long long int) ((((((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_0]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 1]))))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1] [i_1])), ((~(((/* implicit */int) (signed char)6)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)4390)) || (((/* implicit */_Bool) -1356319902926779769LL))));
                                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1227395077)) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) var_4))))), (arr_5 [i_0 - 1] [i_2 - 1])))) : (((/* implicit */int) (unsigned char)15))));
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3761758287086068798LL)))) ? (((/* implicit */int) ((536869888) != (((/* implicit */int) (signed char)15))))) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_2] [i_2 + 1] [i_0 + 3])) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))))));
                    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -1227395077)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned short)44958)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_0] [i_0 - 4] [i_0 - 3] [i_0 - 4] [i_0])), ((unsigned short)44958))))));
                }
            } 
        } 
    } 
}
