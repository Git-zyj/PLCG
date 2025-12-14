/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99852
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
    var_10 += ((/* implicit */_Bool) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) (+(((long long int) (short)-10005))));
                var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) 517227917)), (704017371U)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_2] [i_2]))), (max((var_9), (arr_2 [i_2] [i_2])))));
        arr_7 [i_2] = var_0;
        var_13 = ((/* implicit */short) ((unsigned short) arr_1 [i_2]));
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))) : ((-(arr_6 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)28930)) | (-962430218)))) : (((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)152)) : (-443585223)));
        var_16 = (~(((/* implicit */int) ((_Bool) arr_5 [i_3]))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((13322810026286089419ULL), (((/* implicit */unsigned long long int) (unsigned short)13884)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)35)), (arr_1 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_7)));
        var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? ((~(-4904808732035703897LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))));
    }
}
