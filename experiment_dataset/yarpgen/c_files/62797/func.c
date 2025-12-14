/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62797
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
    var_11 = ((/* implicit */long long int) ((unsigned int) var_4));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15177)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2085354776U)));
                    arr_8 [(_Bool)1] [i_1] |= ((/* implicit */_Bool) (-((-(((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (245760U)));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (~((-(arr_5 [i_0] [i_2 - 1]))))));
                    var_12 *= ((/* implicit */_Bool) arr_5 [(unsigned short)16] [i_2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (~(var_0)))), (((var_8) & (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
