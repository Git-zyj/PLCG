/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88553
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
    var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_2))))));
    var_21 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) 3162929961U);
                            var_23 = ((/* implicit */unsigned int) (signed char)-69);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) (unsigned char)240)))));
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_25 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3356138945U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (3356138953U)))) ? (((938828358U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63896))))) : (((3644071116U) + (4294967295U))));
                                var_26 = ((((/* implicit */_Bool) min(((unsigned short)63896), (((/* implicit */unsigned short) (unsigned char)248))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)11))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) -506681168543858526LL);
}
