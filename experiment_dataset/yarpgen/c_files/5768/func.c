/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5768
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    arr_6 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_2 [8] [i_1] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) || (max((arr_1 [i_1]), ((_Bool)1)))))) > ((~(((/* implicit */int) (!((_Bool)1))))))));
                    var_15 = ((/* implicit */unsigned char) (+(912461233204638159ULL)));
                    arr_7 [i_0] [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) min((912461233204638135ULL), (((/* implicit */unsigned long long int) 1813676256)))));
                    var_16 = ((/* implicit */long long int) var_6);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned char) var_12));
}
