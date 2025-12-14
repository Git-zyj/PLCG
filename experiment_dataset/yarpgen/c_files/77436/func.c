/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77436
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((unsigned short) ((signed char) arr_3 [i_0])));
        arr_4 [(unsigned char)10] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((-1835345175) + (1835345197))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_14 |= ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) ((unsigned short) var_6))))));
    }
    var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */int) (short)32766)), (var_10))), (((/* implicit */int) ((1835345175) <= (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_8))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((unsigned char) ((4294967266U) <= (((/* implicit */unsigned int) ((int) var_11))))));
                arr_11 [(signed char)4] [i_1] [i_2] &= ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2 - 1] [12] [i_2 - 1])) + (((/* implicit */int) max((((unsigned char) 1835345174)), (((/* implicit */unsigned char) ((_Bool) -1835345175))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((unsigned short) ((-1835345175) | (var_8))));
                    var_18 = ((/* implicit */signed char) ((unsigned short) arr_8 [i_2 + 1] [i_3 - 1]));
                    var_19 *= ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                }
                var_20 ^= ((/* implicit */unsigned char) ((int) max((((/* implicit */long long int) (-(var_8)))), (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (970875710761190775LL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) ((signed char) -1835345189))))) : (((/* implicit */int) max(((unsigned char)88), ((unsigned char)88))))));
}
