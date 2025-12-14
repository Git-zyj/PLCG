/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98911
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
    var_11 = var_1;
    var_12 = max((((/* implicit */unsigned long long int) max(((short)32767), ((short)-20399)))), (min((8583979232495593535ULL), (8583979232495593535ULL))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((8583979232495593535ULL) << (((((/* implicit */int) (short)-12782)) + (12836))))) << (((max((((/* implicit */unsigned long long int) (short)-27278)), (3418853697768821958ULL))) - (18446744073709524297ULL)))));
                    var_14 |= ((/* implicit */unsigned long long int) ((9862764841213958080ULL) != (max((9862764841213958100ULL), (((/* implicit */unsigned long long int) (short)-2081))))));
                    arr_7 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1049))) & (15126491176722015557ULL)))) && (((/* implicit */_Bool) max((4160354400424420370ULL), (((/* implicit */unsigned long long int) (short)-9275))))))))) % (((max((16137657588884975760ULL), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28693)) & (((/* implicit */int) (short)12974))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((var_3) != (var_10)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) >> (((8583979232495593535ULL) - (8583979232495593528ULL)))))) || (((/* implicit */_Bool) (short)3531))));
        arr_12 [(short)6] = ((/* implicit */short) ((arr_8 [i_3 + 1] [i_3 + 1]) / (arr_8 [i_3 - 1] [i_3 + 1])));
    }
}
