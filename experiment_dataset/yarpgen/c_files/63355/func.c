/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63355
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (short)-23524))) - (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 12282586844590278447ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_1] [i_3] [i_4]), (((/* implicit */unsigned int) ((signed char) max((12282586844590278447ULL), (var_9)))))));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((6164157229119273168ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) || (((/* implicit */_Bool) ((signed char) ((6164157229119273168ULL) != (6164157229119273168ULL)))))));
                                arr_14 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) min((12282586844590278448ULL), (((/* implicit */unsigned long long int) (signed char)127))))))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_0] [i_2] [i_3] [i_4]));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */_Bool) var_5);
                    arr_17 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned char) ((12282586844590278447ULL) * (((/* implicit */unsigned long long int) var_3))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)229)))))) - (min((var_3), (((/* implicit */unsigned int) (signed char)-127))))))) : (min((var_9), (var_9)))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_5)), (var_10)));
}
