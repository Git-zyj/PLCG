/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86839
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
    var_15 = ((/* implicit */unsigned char) 4368431197288588310LL);
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_18 = max((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_0])) ? (arr_13 [i_2 - 1] [i_2] [13ULL] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)24414)) : (((/* implicit */int) arr_3 [i_0]))))));
                            var_19 = ((((/* implicit */_Bool) (-(var_7)))) ? (((3611297804859866930ULL) & (3672965129523504596ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3]))))));
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1]))))) ? (((((arr_10 [6LL] [i_2 + 1]) + (2147483647))) >> (((((/* implicit */int) (short)2064)) - (2056))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41122)))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) max((((unsigned short) var_7)), (arr_9 [i_0] [i_0] [i_0] [i_1])));
        }
    }
}
