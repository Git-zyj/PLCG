/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97795
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((((((9223372036854775807LL) + (-9223372036854775783LL))) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((var_10) - (var_10)))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) var_6);
                            var_14 = ((/* implicit */unsigned long long int) (+(((unsigned int) var_11))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((8920556007690876195ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))))))))) > (((((unsigned long long int) (unsigned char)249)) / (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_0]))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1]), (var_8)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 2422560341451290494LL))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)38)))))));
                arr_10 [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [9ULL] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (28U))) == (((/* implicit */unsigned int) ((int) var_1)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))) && (((/* implicit */_Bool) (signed char)-44))));
                    var_18 = (short)9244;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
