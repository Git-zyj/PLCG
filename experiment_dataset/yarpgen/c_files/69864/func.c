/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69864
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (short)31919)) - ((+(((/* implicit */int) (short)-31898))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max(((~((~(var_10))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)31895)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31919))) : (var_10)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_4 + 1]))));
                                arr_12 [i_0 - 2] [i_1] [i_4 + 2] [i_1] = ((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_1] [i_0 - 2] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_0 [i_0] [i_0]))))))) >> (((max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2844543840U))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) (signed char)-16))))))) - (2844543810U))));
                                var_15 = ((/* implicit */_Bool) (~(12183220034439000653ULL)));
                                arr_13 [i_0] [i_0 + 1] [i_1] [i_2 - 2] [i_3] [i_4 + 1] [i_1] = ((/* implicit */short) ((((_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (arr_5 [i_3] [i_2 + 1] [i_0 - 1] [i_4 - 1]))))) : (((long long int) arr_10 [i_0] [i_2 + 1] [i_0 - 1]))));
                                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) max((arr_11 [i_4 + 2] [i_4] [i_4] [i_3] [i_2 - 4]), (arr_11 [i_4 - 2] [i_4] [i_4] [i_4 + 2] [i_2 - 4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */_Bool) (unsigned short)24574);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((((var_7) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) << (((((/* implicit */int) ((short) 4000429567612771108ULL))) - (23303))))))));
}
