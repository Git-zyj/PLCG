/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70164
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_13))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)65504)))))))), (((((/* implicit */_Bool) (unsigned short)7)) ? (var_2) : ((-(var_4)))))));
                    arr_9 [i_1] = (((!(((/* implicit */_Bool) (unsigned short)56928)))) ? (arr_2 [i_0] [i_0]) : (min((((/* implicit */unsigned int) (unsigned short)39)), (((unsigned int) (unsigned short)40)))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65496))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)65503))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)16682)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (unsigned short)25)) ? (var_14) : (4177817118103629085LL)))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)28))))))))))));
}
