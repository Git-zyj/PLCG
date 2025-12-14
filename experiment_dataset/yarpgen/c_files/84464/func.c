/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84464
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
    var_20 += (unsigned short)55452;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_8))));
        var_22 |= ((unsigned short) ((signed char) ((((/* implicit */int) (unsigned short)10102)) != (((/* implicit */int) (short)-16912)))));
        arr_2 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)10107)) ? (((/* implicit */int) (unsigned short)55457)) : (((/* implicit */int) (unsigned short)10084)))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_0 [(unsigned short)7])))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)55452))))) : ((~(var_6)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_23 = ((/* implicit */short) (~((-(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)10084))))))));
            arr_7 [i_0] [i_1] [(_Bool)1] &= (unsigned short)55451;
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)10114)) >> (((((/* implicit */int) (signed char)-19)) + (42)))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)55452)) - (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) <= (658665576))))))))));
        }
        arr_11 [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) var_2))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55452)))));
    }
}
