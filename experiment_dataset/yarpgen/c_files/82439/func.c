/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82439
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 &= ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                    var_21 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 16384ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_15)))) != (((/* implicit */int) arr_6 [i_0] [i_0] [12] [i_0]))))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)23796)))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (arr_14 [i_3])));
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))) | (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)174))))), (4294967295U)))));
        arr_17 [i_3] = ((/* implicit */unsigned short) (~(((long long int) ((((/* implicit */_Bool) 8984753282207825620ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */signed char) ((unsigned long long int) (short)(-32767 - 1)));
        var_23 += ((/* implicit */short) ((((1794562284818861398LL) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)10]))))) - (((/* implicit */long long int) 4294967295U))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max(((short)17868), (((/* implicit */short) (!(((/* implicit */_Bool) -8829886250811831514LL))))))))));
    }
    var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((var_1), (var_0)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2251799813423104LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
}
