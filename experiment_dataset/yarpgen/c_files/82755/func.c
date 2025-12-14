/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82755
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_0])))))) ? (min((((/* implicit */long long int) arr_3 [2LL] [i_1])), (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11184)) ? (((/* implicit */int) ((short) (short)-345))) : (((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_1 [i_1]))))))));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((short) ((long long int) max((((/* implicit */long long int) var_8)), (arr_0 [i_1 - 1])))));
            }
        } 
    } 
    var_17 -= var_1;
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (var_9)));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_16 [i_4] = ((/* implicit */unsigned char) (+(arr_14 [i_2] [i_4 - 1])));
                        var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) ((short) 2145860883128943769LL)))));
                    }
                } 
            } 
        } 
    }
}
