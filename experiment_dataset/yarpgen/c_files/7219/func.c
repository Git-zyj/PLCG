/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7219
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                var_15 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) & (var_9)))));
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */short) ((unsigned char) var_6)))))), ((+((-(((/* implicit */int) arr_4 [i_1] [i_0]))))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (min((var_7), (((/* implicit */unsigned int) var_6))))))) | (((max((var_3), (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)-31528)) && (((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */short) (~(var_13)));
    var_19 = ((/* implicit */unsigned short) 5813988881726409834LL);
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) (+(((((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (58)))))));
        arr_8 [i_2] [i_2] = var_9;
    }
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        arr_11 [(unsigned char)14] = ((/* implicit */unsigned short) arr_9 [i_3] [i_3]);
        var_21 = ((/* implicit */unsigned char) var_6);
    }
    var_22 = ((/* implicit */_Bool) var_6);
}
