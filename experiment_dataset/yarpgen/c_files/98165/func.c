/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98165
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((min(((unsigned short)15433), (((/* implicit */unsigned short) (unsigned char)159)))), (max((var_9), (((/* implicit */unsigned short) (short)-15844))))))) >= (max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-987))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (((((/* implicit */long long int) 3419648097U)) & (-9223372036854775785LL)))))) ? (min((((/* implicit */int) arr_0 [i_0])), (((int) var_4)))) : ((-((-(((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 24; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) 554165955437968706ULL);
                arr_8 [i_1 - 1] [(_Bool)1] = ((/* implicit */int) (-(9223372036854775784LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */long long int) 9U);
}
