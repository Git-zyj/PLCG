/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8310
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
    var_17 = ((/* implicit */unsigned short) var_11);
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    var_19 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 63LL)) ? (4032U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9ULL)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) (~((+(((/* implicit */int) (short)17))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_0]), (arr_3 [i_0] [i_1] [i_2])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (16131428689256754146ULL))) : (((/* implicit */unsigned long long int) var_5))))) ? ((((+(arr_5 [i_0] [i_4]))) ^ (((/* implicit */long long int) (-(1U)))))) : (var_7)));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
