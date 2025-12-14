/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94407
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
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((18446744073709551614ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) & (2013629497)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2] [i_4]))) > (((((/* implicit */unsigned long long int) 2013629489)) & (var_4))))))));
                                var_14 = ((short) ((unsigned short) var_4));
                                var_15 = ((/* implicit */unsigned long long int) ((((int) 2030182815)) <= (((/* implicit */int) ((((5430533770889096959ULL) << (((4155118058665412877ULL) - (4155118058665412861ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_0 + 3] [i_0 + 3])) - (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14))) % (((arr_10 [i_0] [i_1 + 2] [i_0 + 2] [i_0] [i_1 - 1] [i_1]) - (arr_5 [11] [i_1]))))))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) ((var_12) ^ (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 3]))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                arr_20 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned char)186)))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            {
                                arr_33 [i_6] [i_6] = ((short) ((unsigned long long int) var_0));
                                var_19 = ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-45))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) arr_16 [i_5])));
            }
        } 
    } 
}
