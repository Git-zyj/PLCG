/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94192
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) var_2)) : (13869552353694514533ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)31)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)224)), (arr_5 [i_0] [i_0] [6ULL]))))) : ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) (((+(min((var_0), (var_0))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)19483)))) ^ (((/* implicit */int) ((_Bool) var_7))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_1 [i_0])))));
                arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_6 [i_0])))) + (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_2 [i_0] [1ULL]))))))) ? (((16330397800931859141ULL) - (var_0))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_8))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) (unsigned short)0))))))))));
                arr_15 [i_0] [(_Bool)1] = ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (var_1))) & (((((/* implicit */_Bool) 570163113)) ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]) : (var_1))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((var_4) || (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))), (var_0)));
}
