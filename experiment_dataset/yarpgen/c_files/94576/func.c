/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94576
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (1217597285U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) var_3)) : (var_6)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)40026)) != (((/* implicit */int) var_11))))) : (((((/* implicit */int) (short)8160)) * (((/* implicit */int) (_Bool)0))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max(((_Bool)0), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (unsigned char)180);
                                var_19 = ((/* implicit */_Bool) (unsigned char)255);
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_4] [i_2 - 1] [i_2 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)232)))) << (((((/* implicit */int) max((var_11), (((/* implicit */short) (unsigned char)24))))) - (23296))))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1]))))) << (((min((((/* implicit */int) arr_10 [(_Bool)1] [i_1 - 1] [i_2 - 2])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)40026)) : (((/* implicit */int) (signed char)45)))))) - (15995)))));
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 2])))))) != (((((((/* implicit */_Bool) (unsigned short)10196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_5 [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40026)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_13), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142)))))))));
}
