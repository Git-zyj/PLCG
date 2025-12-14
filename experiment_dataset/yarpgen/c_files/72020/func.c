/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72020
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
    var_19 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)45)) : (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (40012619) : (((/* implicit */int) (short)-13735))))))))));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */short) min((((unsigned int) (signed char)-46)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)4] [(signed char)4] [(signed char)4] [i_3] [i_4] [i_3 - 1] [i_2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4])))))) && (((/* implicit */_Bool) ((short) (unsigned short)6727))))))));
                                arr_10 [18LL] [i_0] [i_0] [i_0 - 1] = max((((((/* implicit */_Bool) (signed char)-127)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_0] [i_2])) : (var_5))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [(unsigned short)19]))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (40012627)))) != (var_12)))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((signed char) arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_2] [i_0 + 1])))));
                    var_23 = ((/* implicit */unsigned char) min((((max((((/* implicit */long long int) var_2)), (16383LL))) & (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) (short)-19621))))))), (((/* implicit */long long int) var_15))));
                }
            } 
        } 
    } 
}
