/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94037
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45519))))) ? (((((/* implicit */int) (unsigned char)4)) / (((/* implicit */int) (unsigned char)251)))) : (((int) (unsigned short)45519))))) ? (((((/* implicit */_Bool) max(((unsigned char)21), (((/* implicit */unsigned char) var_13))))) ? (((((/* implicit */_Bool) (unsigned short)20007)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)20017)))) : (((/* implicit */int) ((signed char) (unsigned short)20017))))) : (((/* implicit */int) ((_Bool) var_6)))));
                var_14 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)45519)))) | ((~(((/* implicit */int) (unsigned short)20017))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_5)))) ? (((13571711936568982663ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)128)), (1821833516U)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20017)))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20017)))))))) : ((~(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_17 = ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned short)45537)) ? (((/* implicit */int) (unsigned short)45537)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_13)))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25340))))) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (2187807613U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19986))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))) - (2187807612U))));
    var_18 *= ((/* implicit */unsigned char) var_1);
}
