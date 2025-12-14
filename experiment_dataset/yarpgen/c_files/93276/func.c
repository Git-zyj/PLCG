/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93276
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
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned char)143);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)143))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] = min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-19514))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)19514)) : (-2038474455))) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((((18371028474280963543ULL) ^ (((/* implicit */unsigned long long int) arr_6 [i_1])))) == (((/* implicit */unsigned long long int) ((long long int) (unsigned char)155)))))));
        arr_8 [i_1] = max((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-19506)), ((unsigned short)8388)))))), (((/* implicit */unsigned long long int) ((unsigned char) -1LL))));
        arr_9 [i_1] = ((/* implicit */signed char) min((min(((-(var_13))), (((/* implicit */unsigned long long int) (unsigned short)26682)))), (((/* implicit */unsigned long long int) var_2))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((int) 18107471287737636825ULL)) - (((/* implicit */int) (short)20162))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 2147483647)))) == (max((((/* implicit */long long int) (short)-2073)), (arr_10 [i_2])))));
    }
}
