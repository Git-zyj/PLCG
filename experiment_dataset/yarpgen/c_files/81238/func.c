/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81238
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((arr_0 [i_1 - 1] [i_1 - 1]) % (arr_0 [i_1 - 2] [i_1 + 1])))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_1 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2851731490650525890LL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60722))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) | (((((/* implicit */_Bool) 1150536604164071526LL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132)))))))));
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_13)))) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((arr_0 [i_1 - 2] [i_1]) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-51)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -7515111749111250028LL)) && (((/* implicit */_Bool) 3482589664U)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (var_12)))) : (((((/* implicit */_Bool) 943405090)) ? (var_2) : (var_2))))), (((/* implicit */unsigned long long int) var_4))));
}
