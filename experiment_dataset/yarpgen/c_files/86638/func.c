/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86638
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19802))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-19))))) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) var_6))))))) ? ((+((~(((/* implicit */int) (signed char)58)))))) : ((~((~(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */short) (-((-(((((/* implicit */_Bool) 3283453264U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : (-5392894237926631732LL)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)56)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [(unsigned short)13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : ((~(var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (3283453264U) : (((/* implicit */unsigned int) -1))))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_1] [(unsigned short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (16717735072266566479ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62954))))))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-71)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned short)12] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-40))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-22144)))) : ((-(815996127)))))));
                                var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)22168))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-1)) ? (3774114516U) : (1011514032U)))));
                var_17 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) (unsigned char)182)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            }
        } 
    } 
}
