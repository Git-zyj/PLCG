/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77583
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (short)32757))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) (short)-32757))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7893)))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)10331)))) ? (((/* implicit */int) ((signed char) ((signed char) var_6)))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) (unsigned short)448)) ? (((int) var_3)) : (((/* implicit */int) ((short) -67108864))))) : (((/* implicit */int) ((unsigned short) (short)-3402))));
                                arr_13 [(unsigned char)6] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) (unsigned char)43))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((2712779829925085456ULL) | (((/* implicit */unsigned long long int) 3740905025U))))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)15)), ((short)-10343))))));
                                var_17 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)95))))), ((-(((/* implicit */int) (short)10311))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
}
