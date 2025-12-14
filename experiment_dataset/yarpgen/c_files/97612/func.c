/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97612
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
    var_17 = ((/* implicit */unsigned char) -9213638744911085358LL);
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_10)))))) == (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53431)))))))) >> (((((/* implicit */int) var_0)) - (10666)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))));
                arr_8 [i_1] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)635)) / (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_6 [(unsigned short)17] [(unsigned short)17] [(unsigned short)17]))))))))));
                var_20 = ((/* implicit */unsigned int) min((min((-9213638744911085358LL), (((/* implicit */long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3]))))))), (((/* implicit */long long int) arr_4 [i_1]))));
                arr_9 [i_1] [11ULL] = ((/* implicit */_Bool) arr_4 [i_0 - 2]);
            }
        } 
    } 
}
