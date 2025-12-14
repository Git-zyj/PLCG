/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90761
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */short) max((((/* implicit */int) max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 1])))), (((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) >> (((((/* implicit */int) arr_3 [i_2] [i_1])) - (195)))))));
                    var_13 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 4] [i_1]))))), ((+(arr_7 [i_0] [i_1] [i_1 - 1])))));
                    var_14 = ((/* implicit */unsigned char) ((short) ((var_0) ? ((~(arr_5 [i_2] [i_1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) arr_1 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_15 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) 17105433154883091230ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) : (6583445632612423669ULL))) - (64ULL)))))) > (var_9)));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_9 [i_3 + 2])), (arr_7 [i_3] [i_3] [22ULL])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_3])), (arr_3 [i_3 + 1] [14])))) ? (((int) var_5)) : (((/* implicit */int) ((_Bool) arr_5 [i_3 - 1] [i_3] [i_3 + 3])))))) : ((~((~(arr_1 [i_3])))))));
    }
}
