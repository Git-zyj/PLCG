/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90023
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
    var_13 = ((/* implicit */_Bool) ((short) var_5));
    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_15 |= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1]))))) / (arr_2 [0ULL] [0ULL])))));
                        arr_8 [i_0] [3] [i_2] [i_2] [i_2] [i_0] = arr_6 [i_0] [i_1] [i_1] [i_1];
                    }
                } 
            } 
        } 
        var_16 |= 18446744073709551615ULL;
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((18446744073709551598ULL) == (max((((/* implicit */unsigned long long int) 0U)), (1ULL)))))) : (((/* implicit */int) arr_10 [i_4]))));
                    var_18 = ((/* implicit */signed char) ((int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))) : (0U))))));
                }
            } 
        } 
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_4]))));
    }
    var_19 &= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 25U)) || (((/* implicit */_Bool) (unsigned char)120)))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5286))) + (1418348068U)))))))) : (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) var_5)) % (var_4)))))));
}
