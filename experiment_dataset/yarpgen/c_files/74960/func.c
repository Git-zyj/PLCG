/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74960
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) ((short) 4073409118U))) && (((/* implicit */_Bool) 4294967290U))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) -1)) ? (arr_3 [i_0] [i_2]) : (var_7))), (var_11))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-8401))));
    var_19 -= ((/* implicit */unsigned int) var_2);
}
