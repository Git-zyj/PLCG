/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73211
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)127)) : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0] [17LL] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [(_Bool)1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)4899))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) || (((/* implicit */_Bool) max((arr_3 [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1]))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_21 -= (unsigned short)4886;
        arr_13 [i_3 + 1] [i_3] = ((/* implicit */unsigned char) ((_Bool) (signed char)(-127 - 1)));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) 428153102U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4])))));
        var_22 = ((/* implicit */signed char) arr_15 [i_4]);
    }
    var_23 = ((/* implicit */int) ((((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4899))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)60635), (((/* implicit */unsigned short) (_Bool)1)))))))) % (((/* implicit */unsigned long long int) 67108862))));
}
