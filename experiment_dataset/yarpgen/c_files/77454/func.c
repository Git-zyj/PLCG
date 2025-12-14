/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77454
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0])))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                arr_6 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned int) 13818668747710576460ULL);
                var_18 ^= ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_7);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_4)));
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) (-(4593707356741201289LL)));
        arr_10 [i_2] [13LL] |= ((/* implicit */unsigned int) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) max((-8809671312005933643LL), (arr_8 [i_2] [i_2])))) || (((/* implicit */_Bool) min((arr_9 [i_2]), (var_4)))))))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_11), ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)35995))))))));
}
