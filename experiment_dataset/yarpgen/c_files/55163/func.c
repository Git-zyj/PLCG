/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55163
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (~((-(8931226295790869538LL)))));
                    arr_9 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (_Bool)0))));
                                var_18 = ((((/* implicit */unsigned long long int) max((2147483638), (((/* implicit */int) (unsigned char)30))))) % (min((max((0ULL), (((/* implicit */unsigned long long int) arr_12 [13ULL] [13ULL])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0])), ((unsigned char)28)))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_8 [i_1 - 1] [i_0 - 1] [i_0 + 2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)211))))) ? (arr_6 [i_1 - 2] [i_6 + 1] [i_1 - 2]) : (max((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_8)))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5] [i_6 + 1])) / (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) * (2915970563515154891ULL))))))))));
                                var_21 = (+(var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_13);
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_10))));
}
