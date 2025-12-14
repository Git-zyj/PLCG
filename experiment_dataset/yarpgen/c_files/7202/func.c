/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7202
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3775469088U), (((/* implicit */unsigned int) var_17))))) ? (628788895) : (arr_4 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_4 [10] [i_1 + 2] [(signed char)5])))) ? (((/* implicit */int) max(((short)-32762), (((/* implicit */short) (signed char)-69))))) : (((/* implicit */int) (short)-8143))))));
                    var_20 |= ((/* implicit */unsigned int) (((((((+(((/* implicit */int) (short)-8143)))) + (2147483647))) << (((((arr_7 [i_0] [i_1 + 2] [i_2]) ? (arr_4 [i_2] [i_1 - 2] [i_0]) : (var_8))) + (1494956501))))) & (min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)3718)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)29196)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (unsigned short)61802)) ? (var_5) : (6323066672678460381LL))))))));
    var_22 = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) (short)-8143)) ? (((/* implicit */int) (unsigned short)16380)) : (((/* implicit */int) (short)-25554)))))), (((((/* implicit */int) (unsigned short)52647)) % (((/* implicit */int) var_12))))));
    var_23 = max((((((/* implicit */_Bool) var_7)) ? (((int) var_17)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_18))))))));
    var_24 = ((/* implicit */unsigned int) (short)25554);
}
