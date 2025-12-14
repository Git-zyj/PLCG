/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62958
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
    var_11 = ((/* implicit */int) (+(576460752303421440LL)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = (unsigned char)0;
                    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)26352)), (((1766615604) & (((/* implicit */int) (signed char)0))))));
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)-19062)))))));
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((-3142359505903039LL), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) min((1766615619), (((/* implicit */int) (_Bool)0)))))))) ? (((((int) (unsigned char)98)) / (max((-1766615608), (((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) (unsigned char)216))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned int) 1766615622);
        var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) 1766615622)), (2395708470U))) << (((max((4229963464755755418LL), (((/* implicit */long long int) (unsigned char)4)))) - (4229963464755755409LL)))));
    }
    var_16 = ((/* implicit */int) 10884168499611956099ULL);
}
