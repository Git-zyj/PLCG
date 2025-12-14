/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74962
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)230);
        var_17 -= ((/* implicit */_Bool) (unsigned short)0);
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)112)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)45)))))));
        var_18 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned char)25))))) ? (arr_7 [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1 + 1] [(_Bool)1]))))))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_7);
                    arr_16 [i_4] [i_3 + 1] [10] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
                    var_20 -= (signed char)-112;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (~((((((_Bool)1) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_11))))));
}
