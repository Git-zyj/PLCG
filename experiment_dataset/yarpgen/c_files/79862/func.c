/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79862
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_8))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)54646))))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1 - 1])) ^ (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1 - 1])))) : ((-(((/* implicit */int) arr_0 [i_1 - 1])))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)22))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 - 3] [i_1])), (3609791915791077529ULL)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1])) : (var_9))) : (((/* implicit */int) (((-(((/* implicit */int) (short)(-32767 - 1))))) == (((/* implicit */int) ((unsigned char) var_2))))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) 9725383654822007668ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (597084281))))) : (((((/* implicit */_Bool) (short)32767)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32512)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) var_4);
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_3 + 1])) : (((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) arr_9 [i_2]))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)6))) ^ (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) << (((/* implicit */int) arr_15 [(unsigned char)5] [i_3]))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (var_6))), (((/* implicit */long long int) max((arr_11 [i_4]), (((/* implicit */short) (unsigned char)252)))))))) : ((~(var_7))))))));
                            arr_20 [i_2] [i_3] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_10 [i_3 - 1]) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) (short)10115))))) ? (((((/* implicit */int) (short)23780)) ^ (((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) (short)-2571))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_8);
}
