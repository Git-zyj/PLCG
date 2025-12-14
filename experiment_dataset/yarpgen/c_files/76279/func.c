/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76279
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
    var_12 = ((/* implicit */short) 2147483647);
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_0);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_8))))) & (((/* implicit */int) arr_0 [i_0])))) ^ ((((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((arr_1 [i_0] [i_0]) - (259852299)))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (short)-8733);
        var_14 ^= ((/* implicit */_Bool) var_1);
    }
    for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_15 -= min((((((/* implicit */_Bool) arr_8 [i_2 - 2] [(unsigned char)9])) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) ((short) 14494760113082257222ULL))))), (((((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_10 [i_2 - 1])) - (19))))) % (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2])) >= (arr_9 [i_2])))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */short) 7011565339882596966ULL);
            var_17 = ((/* implicit */signed char) (short)32729);
        }
        arr_14 [i_2] [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2 - 2])) + (var_9)))) ? (((int) arr_8 [(unsigned short)1] [i_2 - 1])) : (((((/* implicit */int) arr_8 [i_2] [i_2 - 2])) * (((/* implicit */int) arr_8 [i_2] [i_2 - 1])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_8)))));
                    arr_19 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)11)) ? (4121647164262920708ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746)))));
                }
            } 
        } 
    }
}
