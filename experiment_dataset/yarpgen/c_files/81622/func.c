/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81622
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((((var_8) >> (((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [i_2] [i_0 - 1] [i_2])) - (30))))) / (var_8));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)251))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1])))))));
                                var_14 += ((/* implicit */unsigned int) min((((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)251)), (10839807942338306926ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_11) : (var_3)))) : (var_1))))));
                            }
                        } 
                    } 
                    arr_12 [6] [(unsigned char)8] [6] [i_1] = ((/* implicit */unsigned int) 9405857187383457976ULL);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_11))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((var_10) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_2)), (arr_17 [i_5] [i_5] [i_5])))) : (822164230))))));
                    var_17 *= ((/* implicit */short) (~(((unsigned long long int) (short)0))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (short)-14);
}
