/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88176
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = (unsigned short)3274;
                                var_20 = ((/* implicit */unsigned long long int) (~(var_8)));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)156))));
                var_22 = ((/* implicit */unsigned long long int) (unsigned short)3274);
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned short)31911))));
                                arr_22 [i_7] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) max(((-(9223371761976868864ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_4), ((unsigned short)31905)))))))));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned short)31919)))), (((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned short)33620))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) max((max(((+(var_6))), (((/* implicit */unsigned long long int) var_8)))), ((+(max((var_17), (((/* implicit */unsigned long long int) (unsigned short)31887))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            {
                var_25 -= ((/* implicit */short) max(((~(((/* implicit */int) min(((unsigned short)62239), ((unsigned short)31911)))))), ((-(((/* implicit */int) (short)-7275))))));
                arr_31 [i_9] [i_9] [i_8] = ((/* implicit */unsigned int) var_18);
            }
        } 
    } 
    var_26 *= ((/* implicit */unsigned int) var_16);
}
