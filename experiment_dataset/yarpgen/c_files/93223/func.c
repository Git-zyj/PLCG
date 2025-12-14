/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93223
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -18)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)170))))) ? (max((((/* implicit */int) (unsigned char)170)), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((arr_5 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 + 1])), ((unsigned char)240)))) : (((int) arr_4 [i_1 - 2] [i_1 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = min((((int) ((arr_13 [i_0] [i_3] [i_3] [i_0]) ^ (((/* implicit */unsigned long long int) var_6))))), (((/* implicit */int) ((signed char) min((var_6), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2 - 1] [3] [i_4])))))));
                                arr_14 [i_2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) var_11))), ((short)-32752)))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 4294967295U)) : (arr_5 [i_3 - 1] [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)170)) : (((int) arr_3 [i_0] [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) % (((/* implicit */int) (unsigned short)22))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (-9223372036854775788LL)))) ? ((-(((/* implicit */int) (unsigned short)65514)))) : (max((var_14), (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (-2147483633) : (((/* implicit */int) (signed char)-19))))) + (max((((((/* implicit */_Bool) -2432038664061895338LL)) ? (((/* implicit */long long int) -1)) : (var_1))), (((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) -1))))))));
}
