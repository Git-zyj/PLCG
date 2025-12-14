/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56322
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = arr_0 [i_0] [(unsigned char)22];
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) 2603716330U);
                                var_16 = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4U))), (((32767U) + (133363454U)))))) ? ((((-(((/* implicit */int) (unsigned char)34)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 4161603827U)) ? (0U) : (804744830U))) << (((((/* implicit */int) var_2)) - (198))))) < (((unsigned int) (unsigned char)150))));
                arr_18 [i_5] [17U] = (+(((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))));
                var_20 = ((/* implicit */unsigned char) (+(((4161603845U) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6] [i_6] [(unsigned char)24])) + (((/* implicit */int) (unsigned char)51)))))))));
            }
        } 
    } 
}
