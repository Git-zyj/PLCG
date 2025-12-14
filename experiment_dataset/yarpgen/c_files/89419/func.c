/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89419
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) + (1227092174278331577LL)))) ? (max(((-(10370784224209848784ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 + 2]))))))) : (((/* implicit */unsigned long long int) var_6)));
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8195224690832743780LL)) ? (min(((+(-781782257559714894LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / ((+(var_0))))))));
    var_21 ^= ((/* implicit */int) (short)-32315);
    var_22 = ((min((((/* implicit */int) (!((_Bool)1)))), ((~(0))))) < (min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32334)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) (short)-32334)) != (arr_10 [i_2] [i_5 - 2] [18U])))) < (((/* implicit */long long int) -7))));
                                var_24 = ((/* implicit */int) (signed char)-90);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_7 - 3] [i_3] [i_7 - 3] [i_2] [i_8 - 1] [i_7] = ((/* implicit */short) max((((/* implicit */long long int) ((arr_26 [i_2] [i_2] [i_2] [i_2] [i_8 - 1]) & ((+(((/* implicit */int) var_1))))))), (var_16)));
                                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3 - 4] [i_4 + 2])))))));
                                var_26 = ((long long int) var_13);
                                var_27 ^= var_6;
                                var_28 = ((/* implicit */unsigned short) (~(arr_14 [i_8 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                    arr_29 [i_2] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (5395090340591035035LL))))))));
                    var_29 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [10LL])), (((((/* implicit */_Bool) ((int) 9))) ? ((+(arr_11 [i_2] [8]))) : (((/* implicit */unsigned long long int) var_14))))));
                }
            } 
        } 
    } 
}
