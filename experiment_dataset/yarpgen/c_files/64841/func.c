/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64841
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((unsigned char) (short)28461)))) ? ((~(((unsigned int) (short)-28461)))) : (((/* implicit */unsigned int) 134217216)))))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned char) (+(((((/* implicit */_Bool) 2113061352U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)63))))))))));
                                arr_11 [i_3] [i_1] [0U] [i_0] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)119))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) 16975143716566299019ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (short)-28431))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) ((short) ((10738678583436432247ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12726))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned int) (unsigned char)119)), ((+(var_3))))));
                        var_21 &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)23607)) : (((/* implicit */int) var_7)))));
                    }
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */short) (-(var_17)));
    var_24 |= ((/* implicit */unsigned long long int) ((min(((-(13255826221274350969ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_8))))))));
}
