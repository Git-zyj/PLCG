/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87853
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-101)), (var_13)))) ? ((-(((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (arr_0 [i_0])))) ? (((long long int) 16539854029963943228ULL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))));
        arr_2 [i_0] [0ULL] = ((/* implicit */_Bool) var_5);
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (~(4294967290U)));
                        var_18 -= ((/* implicit */long long int) ((int) var_8));
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_21 -= ((/* implicit */unsigned short) (signed char)118);
                arr_15 [i_4] [i_4] = ((/* implicit */_Bool) var_13);
            }
        } 
    } 
}
