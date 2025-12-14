/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94598
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-28)))), (((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)156))))) ? (((/* implicit */int) (unsigned short)61830)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63724)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65522)) ? (min((((/* implicit */unsigned long long int) (short)-29083)), (227256493665866484ULL))) : (((((/* implicit */_Bool) (short)-29083)) ? (227256493665866478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3717))))))))));
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)124))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) (-((~(((((/* implicit */_Bool) 10927608570813658504ULL)) ? (((/* implicit */unsigned long long int) -240055796)) : (227256493665866484ULL)))))));
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -195664222952496409LL)) ? (9181316801791493375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) min((1610612736U), (((/* implicit */unsigned int) (unsigned short)2361)))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) 0))));
                }
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)63)))))));
                    arr_13 [i_0] = ((((/* implicit */_Bool) (unsigned char)3)) ? (min((-7430063875674158716LL), (((/* implicit */long long int) -226946651)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) -171220721)) : (2149759544U)))));
                }
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned long long int) (~((~(9)))));
                    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)12247))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7)))))))) : (max((((((/* implicit */_Bool) -2007936067)) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)2)))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_5] = ((/* implicit */long long int) max((10927608570813658514ULL), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
                var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65190)), (-7858675995076711823LL)));
            }
        } 
    } 
}
