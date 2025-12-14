/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90990
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)36825))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [(_Bool)1] [3U])) && (((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)36804), ((unsigned short)56543))))));
                }
            } 
        } 
        arr_9 [i_0] &= ((/* implicit */long long int) var_9);
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_17 |= ((/* implicit */unsigned long long int) var_9);
        var_18 -= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((short) (_Bool)1))))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) -485708679);
        arr_16 [i_4] [(unsigned short)4] = ((/* implicit */unsigned short) ((short) ((unsigned short) 1637471048U)));
        arr_17 [(signed char)12] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)49152))));
        arr_18 [i_4] = 18446744073709551613ULL;
    }
    var_20 ^= ((/* implicit */long long int) (short)(-32767 - 1));
}
