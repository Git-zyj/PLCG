/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68806
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
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) var_2);
                    var_19 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3867359424U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) arr_3 [i_2] [i_0] [(unsigned char)4])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (17087640186422354897ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (short)32750))) / ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12)))))) : (min((var_10), (((/* implicit */long long int) var_5))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2147483647)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) : (arr_11 [i_3] [i_4] [i_3])))));
                var_22 = ((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11106)))))))));
                arr_14 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_3])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)65527))))), (((arr_12 [i_4] [i_3] [i_3]) + (((/* implicit */long long int) arr_8 [i_4]))))));
            }
        } 
    } 
}
