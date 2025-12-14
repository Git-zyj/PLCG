/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98595
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
    var_10 = ((/* implicit */int) max((var_10), (min((((/* implicit */int) var_6)), (var_2)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [3ULL] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_2 + 1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79)))))) * ((~(arr_6 [i_2] [i_1 + 1] [i_0])))))));
                    var_11 = ((/* implicit */unsigned char) var_8);
                    var_12 = ((/* implicit */unsigned char) min((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 2]))), (arr_0 [i_2 - 2])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((((/* implicit */int) (unsigned char)21)) < (((/* implicit */int) (_Bool)0)))))))));
}
