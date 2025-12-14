/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71170
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)2] [(unsigned char)2] [i_2] [i_0] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18903))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967278U)))))) ? ((-(14))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1])), ((unsigned short)52364)))) && (((/* implicit */_Bool) arr_13 [i_3 + 1] [3U] [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [3U])))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((arr_12 [(unsigned char)12] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40412))))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) var_1)) : (var_9))) != (8LL))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (-21) : (((/* implicit */int) (unsigned short)65533))))) | ((+(arr_4 [i_0] [i_0])))))));
                                var_21 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_17))))) ? (max((-12), (((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [(unsigned char)11])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-37)));
                }
            } 
        } 
    } 
    var_22 = (+(13928487437135634429ULL));
    var_23 -= ((/* implicit */int) var_5);
    var_24 = ((/* implicit */signed char) var_11);
}
