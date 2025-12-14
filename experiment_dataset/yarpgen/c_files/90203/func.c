/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90203
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        arr_8 [(signed char)9] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_1 + 1])) > (((/* implicit */int) arr_4 [2] [i_1] [17] [i_1 - 1]))))), (((int) arr_4 [i_1] [i_1] [i_1] [i_1 - 1]))));
                        arr_9 [i_3] [i_1 + 1] [i_1 + 1] [i_1] = var_11;
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_13 ^= ((/* implicit */int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) < (2689121792U))) ? (((((/* implicit */_Bool) var_5)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41544))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))), ((~(18446744073709551615ULL)))));
                        arr_12 [i_0] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28672))) > (2ULL))) ? (((/* implicit */int) (unsigned short)44587)) : ((+(((/* implicit */int) var_5)))))))));
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((-1984562016), (((/* implicit */int) (short)4))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(var_12))))));
}
