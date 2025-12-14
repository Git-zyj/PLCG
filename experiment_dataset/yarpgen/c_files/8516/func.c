/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8516
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
    var_19 = ((/* implicit */unsigned short) (+((-(((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (var_11)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_1 [i_0]);
        var_21 &= ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
    }
    for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((long long int) -1758709178)) <= (((/* implicit */long long int) (-(33521664))))));
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (short)-30462)) : (33521651)))));
        arr_8 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) (((((+(-6018949818071811333LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) - (89)))))) : (((/* implicit */unsigned short) (((((+(-6018949818071811333LL))) + (9223372036854775807LL))) >> (((((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) - (89))) - (77))))));
    }
    for (unsigned short i_2 = 4; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_22 -= arr_2 [i_2 - 4];
        arr_13 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_0)))))))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */short) (~((~(var_7)))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_19 [i_3] [i_3 + 2] [i_3])))) ? (arr_19 [(short)10] [(_Bool)1] [i_5]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)21484))) | (((unsigned int) var_9)))))))));
                }
            } 
        } 
    } 
}
