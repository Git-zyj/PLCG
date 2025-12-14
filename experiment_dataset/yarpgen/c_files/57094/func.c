/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57094
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
    var_19 = ((/* implicit */int) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] &= ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) (short)15554))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16919)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_3 [i_0 + 1])))) : (max((((((/* implicit */_Bool) (short)-25780)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26315))) : (16652974206031614983ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))));
                arr_5 [0ULL] [0ULL] [(_Bool)1] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) 607500997)) ? (((/* implicit */int) var_15)) : (607501005)))))));
                var_20 &= ((/* implicit */short) min((-506651359), (((/* implicit */int) (signed char)-104))));
                arr_6 [i_0] [(unsigned char)5] [0] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), ((short)15551)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned short)26315)) : (((/* implicit */int) (unsigned char)6))))))));
    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (13591473627387704085ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)127)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)19850)) : (-607500998)))))));
}
