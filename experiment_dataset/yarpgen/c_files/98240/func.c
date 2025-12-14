/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98240
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((unsigned int) ((unsigned short) (unsigned char)236)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0 + 2])))) & (((unsigned long long int) arr_1 [i_0] [i_0 - 1]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) (unsigned short)6718);
            var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 2])), (((unsigned int) -1781300546)))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (arr_0 [4LL] [i_1]) : (((/* implicit */int) var_9))))))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_15 = var_3;
            arr_9 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)255);
        }
    }
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned long long int) ((_Bool) ((min((var_0), (((/* implicit */long long int) (-2147483647 - 1))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))));
                arr_15 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_3 - 1])) ^ (((/* implicit */int) arr_10 [i_3 - 1])))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_1 [i_3 - 1] [i_4 + 1])) : (((unsigned long long int) arr_7 [i_4 + 1])))) - (3440871143ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (((~(2147483647))) & (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-124)) ? (-1219446350) : (-536870912))) >= (((/* implicit */int) (short)-3061)))))));
}
