/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73650
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
    var_15 = var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [10ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 648015427))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) 6713148562573442577LL)) / (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_3))), (1904219912))))));
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-15016)) : (648015427)))));
            }
        } 
    } 
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 420265315U)) ? (-7345266489152785060LL) : (((/* implicit */long long int) 648015444))))) ? (((((/* implicit */int) ((short) var_2))) << (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_10) : (var_6))) + (895551419))))) : ((~((~(var_6)))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (int i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) || ((_Bool)1)));
                    arr_15 [i_2] [i_2] = ((long long int) ((signed char) (unsigned char)255));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) min((-1485027330), ((-2147483647 - 1))))))));
                    arr_16 [i_2] [i_2] [i_2] = var_9;
                }
            } 
        } 
    } 
}
