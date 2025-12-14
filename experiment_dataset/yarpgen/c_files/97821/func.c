/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97821
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (4977383186073203009ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_1)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)64))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_5 [i_4])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_5 [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (14841732993695428928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12268)))))))));
                                arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)16855)))) <= (((((/* implicit */int) var_15)) / (var_9)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31177))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)64)), (6949460634481727003ULL)))) ? (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_1]) < (((/* implicit */unsigned long long int) -1550463946))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1] [i_1 + 1]))))) ? ((+(13469360887636348617ULL))) : (arr_0 [i_1 + 1] [i_1 - 2])))));
            }
        } 
    } 
}
