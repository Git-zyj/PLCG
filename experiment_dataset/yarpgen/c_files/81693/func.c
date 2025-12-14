/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81693
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
    var_13 = ((/* implicit */short) ((signed char) (+(max((var_3), (((/* implicit */unsigned int) var_0)))))));
    var_14 *= ((/* implicit */int) (((+(((/* implicit */int) ((unsigned short) -20))))) == ((-(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    var_15 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((unsigned short) var_12))) - (var_12))));
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_3) <= ((+(var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((long long int) (-(((/* implicit */int) var_6))))), (((/* implicit */long long int) var_9))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (((-(((/* implicit */int) var_2)))) == (((/* implicit */int) ((signed char) arr_2 [i_0])))))) > (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */long long int) ((arr_11 [i_0] [i_2]) ^ (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_14 [i_0] [i_3] [i_3] [(unsigned short)1] [i_4])), (var_0))), (arr_2 [i_0]))))));
                                var_18 = ((/* implicit */int) (((-((~(var_1))))) != (((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)10])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) min((var_10), (((((/* implicit */int) (unsigned short)54771)) >> (((var_1) - (293535821U)))))))), ((+((~(var_11)))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5))));
                                arr_17 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [i_0])))))) <= (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
