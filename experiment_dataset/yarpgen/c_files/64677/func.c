/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64677
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)36))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_20 = arr_5 [i_0] [i_1];
            var_21 &= ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (arr_4 [i_1 - 2] [i_1 - 2]))));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_22 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_12)))) - ((-(((/* implicit */int) var_7))))))) != (max((((/* implicit */long long int) arr_7 [(unsigned char)6] [(short)6] [i_0])), (arr_4 [i_0] [i_2])))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-38)), ((~(((/* implicit */int) (unsigned char)219))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) : ((-9223372036854775807LL - 1LL))));
        }
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)50422)) : (((/* implicit */int) var_0)))) <= ((-(((/* implicit */int) (unsigned char)219))))))) == (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            {
                var_25 = ((/* implicit */signed char) min((var_25), (var_3)));
                var_26 += var_6;
                var_27 = max((((((/* implicit */_Bool) var_16)) ? (arr_2 [i_3]) : (((/* implicit */int) var_12)))), (((/* implicit */int) (!((_Bool)1)))));
            }
        } 
    } 
    var_28 -= (unsigned char)36;
}
