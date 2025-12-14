/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64293
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
    for (int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [0ULL] [i_0] [i_3] = ((/* implicit */int) var_11);
                                arr_16 [i_0] [i_0] [i_2] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)65533))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 6766582952038363678ULL)))) ? (((((/* implicit */unsigned int) 2007326846)) - (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-44), (((/* implicit */signed char) (_Bool)1))))))));
                    arr_17 [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) : (30ULL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (17447210323244257465ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 7666241250084771685LL))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    var_15 = var_6;
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)))) ? (max((((/* implicit */long long int) (signed char)-1)), (6365293473371354248LL))) : (var_5))) < (((/* implicit */long long int) (~(((/* implicit */int) (signed char)44))))))))));
}
