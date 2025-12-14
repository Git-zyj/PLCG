/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79331
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) arr_6 [i_2]))) : (((/* implicit */int) ((unsigned short) var_6)))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) var_0);
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (max((((unsigned long long int) 5524141801667177360ULL)), (((/* implicit */unsigned long long int) arr_6 [i_0]))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_13 [i_3] [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)47857))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_3]))), (max((8760098461617472764ULL), (((/* implicit */unsigned long long int) var_5))))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) ((arr_5 [(signed char)5]) <= (((/* implicit */unsigned long long int) var_2)))))))) : ((-(((/* implicit */int) var_6))))));
    }
}
