/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61725
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
    var_17 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 0U)) : (9723147005017036738ULL)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */int) var_9);
            var_19 = ((/* implicit */long long int) (unsigned char)26);
            var_20 = (!(((/* implicit */_Bool) 2137349506U)));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                {
                    var_21 &= ((/* implicit */signed char) var_11);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (unsigned char)17)) ? (arr_8 [i_4 - 3]) : (arr_8 [i_4 - 2]))) : (((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) (short)9987)))))));
                    var_23 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-2048)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-5148751644210343078LL))))));
                }
            } 
        } 
    } 
}
