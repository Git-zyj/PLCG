/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81518
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
    var_16 |= ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) / (max((17577061487147633220ULL), (17577061487147633220ULL))));
                    var_18 = ((/* implicit */long long int) 17577061487147633223ULL);
                    var_19 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0 + 1] [i_2]);
                    var_20 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((arr_0 [2ULL]) << (((((/* implicit */int) var_0)) + (94)))))))) ? (max((arr_0 [0ULL]), (((/* implicit */unsigned int) ((arr_6 [i_0] [i_1] [i_1]) < (((/* implicit */long long int) var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+((+(((/* implicit */int) var_2)))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)179))) ? (arr_4 [i_0]) : (max((min((var_14), (((/* implicit */int) (unsigned char)76)))), (((((/* implicit */_Bool) 869682586561918388ULL)) ? (((/* implicit */int) (unsigned char)100)) : (var_14)))))));
                                var_23 = ((/* implicit */signed char) (short)32767);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 741419380323925598LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) ((_Bool) var_5))), (3244651799U))));
}
