/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86169
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
    var_13 = ((/* implicit */unsigned int) max((max((((((/* implicit */int) var_7)) << (((var_10) + (7556244550626755660LL))))), ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)16383))) > (-1LL))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)32184)), ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    arr_7 [i_0] [i_1] [2] [i_2] = ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (((unsigned short) (_Bool)1))))) % (((/* implicit */int) arr_2 [i_0] [(unsigned char)1])));
                    arr_8 [(signed char)9] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (-16LL) : (20LL))))) && (((/* implicit */_Bool) min((15LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */short) var_7);
}
