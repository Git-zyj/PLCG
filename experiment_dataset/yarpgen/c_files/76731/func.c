/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76731
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */long long int) (signed char)63);
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (5471582745837474320ULL))) << (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) - (5213884928049503636LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1397864701)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((arr_0 [i_1] [6ULL]) <= (((/* implicit */long long int) 1397864701)))))))), (1612017601917436725LL)));
        var_16 = -1397864694;
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (1612017601917436725LL) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((arr_0 [i_1] [i_1]) - (5213884928049503658LL)))))))) : (((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) (signed char)112)) ? (-4439124629308718288LL) : (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) -1397864702))))));
    }
    for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) (short)-8))))))) ? (-4439124629308718288LL) : (min((((((/* implicit */_Bool) 242886508)) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36121))))), (((/* implicit */long long int) 1670890672U)))))))));
        var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))))))));
        arr_10 [i_2] = ((/* implicit */int) ((unsigned int) (~(arr_9 [i_2 + 2] [i_2 - 1]))));
    }
    var_19 = ((/* implicit */int) min((var_19), (min((((((_Bool) (unsigned short)33893)) ? (((/* implicit */int) ((signed char) 3922724861107545993LL))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 4439124629308718311LL))))))), (1739972869)))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (-1929478533)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))))) ? (min((((/* implicit */long long int) (signed char)125)), (1612017601917436725LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                arr_15 [i_3] [i_4] = min((((/* implicit */short) ((unsigned char) -2937625759441177467LL))), (arr_11 [i_4]));
                arr_16 [i_4] [i_3] [i_4] = ((/* implicit */signed char) -1792689004);
                var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)512)), ((unsigned short)38134)))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (503633690))))))) >= (-3922724861107545994LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (!((_Bool)1)));
}
