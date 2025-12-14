/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56016
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
    var_10 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-117))))) <= (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_3)))))), (max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)248)), (var_7)))), (max((var_3), (((/* implicit */unsigned int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2644956071U)) && (((/* implicit */_Bool) 6002001636298218226LL))));
                                var_12 = ((/* implicit */short) ((4334460801145329516ULL) >> (0LL)));
                            }
                        } 
                    } 
                } 
                var_13 = (-((~(1279812001))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (14112283272564222099ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3673)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0 - 2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_0 - 3]))))), (max((2644956071U), (((/* implicit */unsigned int) arr_5 [i_0] [(unsigned short)5] [(signed char)19])))))))))));
                var_15 = ((/* implicit */unsigned short) (~(min((arr_12 [i_0 + 2] [i_0 - 3] [i_0 - 3]), (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 3])))));
                var_16 += ((/* implicit */long long int) 1650011246U);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned long long int) var_8))));
}
