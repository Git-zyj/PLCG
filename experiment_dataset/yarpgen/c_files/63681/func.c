/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63681
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)44447)) / (((/* implicit */int) (unsigned short)21089))))))) ? ((+(((/* implicit */int) (unsigned char)63)))) : ((-(((((/* implicit */int) (unsigned short)21072)) * (((/* implicit */int) (unsigned short)0)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((min(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned short)7)))))) || (((/* implicit */_Bool) 1816197166003935346ULL))));
                                arr_10 [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((1568878647377103841LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (unsigned short)21060);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) -8882769603254461495LL))))) : (max((10164692U), (((/* implicit */unsigned int) ((0) >= (((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~((-(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(619650627)))) || (((/* implicit */_Bool) ((134217727LL) >> (((((/* implicit */int) (unsigned short)21084)) - (21073)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((~(6U))) & (((/* implicit */unsigned int) (((_Bool)1) ? (67108863) : (((/* implicit */int) (short)-31387))))))))))));
                }
            } 
        } 
    } 
}
