/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78968
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) var_13);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)20] [i_0] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (((long long int) (unsigned char)182)))))))));
                                var_18 += ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0 + 3]));
                                var_19 *= ((min((arr_5 [i_4 - 2] [i_4 + 1]), (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46682)) & (((((/* implicit */int) (unsigned short)18853)) ^ (((/* implicit */int) (unsigned short)46682))))))));
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (11681179623570516825ULL)))) ? (arr_5 [i_2] [i_2]) : (((unsigned long long int) var_4)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (signed char)-73)), (arr_5 [i_0] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned char) var_16);
}
