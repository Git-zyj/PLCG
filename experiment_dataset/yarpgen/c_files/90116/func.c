/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90116
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
    var_14 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)247));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned char)24))) >= (((/* implicit */int) (unsigned char)234)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))));
                        arr_10 [i_3] [i_1] [(unsigned short)7] [i_3] = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((unsigned int) arr_5 [i_2] [i_2] [i_1] [i_0]))) ? ((~(((/* implicit */int) arr_8 [(unsigned short)18] [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_2]))))));
                    var_18 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_1] [i_1] [i_2]))) || (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0]))))))));
                    arr_11 [i_2] [i_2] [i_1] [15ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2] [i_0])) ? (9513890526734597932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
