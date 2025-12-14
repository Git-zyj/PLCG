/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64949
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
        var_13 &= ((/* implicit */unsigned int) (short)22169);
    }
    for (unsigned char i_1 = 4; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-((-(-5479465440221469945LL))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5479465440221469945LL)) | (892417396025945283ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29979))) : (((((/* implicit */_Bool) -5479465440221469945LL)) ? (((/* implicit */unsigned int) 2109688807)) : (arr_10 [i_1] [i_2 + 1] [i_3])))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 + 1] [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 4; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_17 &= ((/* implicit */int) ((unsigned int) 1958673020));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)206)))))));
    }
    var_19 = ((/* implicit */unsigned short) ((signed char) var_9));
}
