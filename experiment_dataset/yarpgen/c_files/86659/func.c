/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86659
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
    var_15 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((var_14) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)7634)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (((+(12802386753623206273ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) | (-1843799615))) > (((/* implicit */int) var_11))))))));
                var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), (arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */int) (unsigned short)21674)) < (((/* implicit */int) (unsigned short)34587)));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_3] = 2758741270U;
                var_19 = ((/* implicit */short) max((9173744718396942094LL), (((/* implicit */long long int) (unsigned char)0))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_2] [(unsigned char)2] [i_2] [(short)4] [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)28)) < (((/* implicit */int) (unsigned char)248)))));
                                var_20 = ((/* implicit */long long int) (unsigned char)31);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) var_3);
                arr_21 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)21674);
            }
        } 
    } 
}
