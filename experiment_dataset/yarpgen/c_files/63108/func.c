/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63108
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
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)32973))) <= (((/* implicit */int) var_7))))) & (min((((/* implicit */int) (short)-24778)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (-162214452)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((2147475456), (-2147475457)))) ? (((((/* implicit */_Bool) 2147475456)) ? (((/* implicit */int) (unsigned short)26441)) : (1858717535))) : (((int) 920918660)))), (((((/* implicit */_Bool) var_4)) ? (32767) : (2147483646)))));
                arr_8 [i_0] [i_0] [i_1] = var_3;
                var_12 = ((/* implicit */int) max((((unsigned int) -2147475436)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_5 + 4] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147475463)) ? (397888008) : (((/* implicit */int) var_0))));
                        arr_21 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_2 + 1] = ((/* implicit */_Bool) ((short) var_8));
                        arr_22 [i_2] = ((/* implicit */int) ((unsigned short) (signed char)127));
                        arr_23 [i_2 - 2] [i_2 - 2] [i_2 - 2] = ((/* implicit */unsigned int) ((_Bool) -1044593969));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            arr_28 [i_2] [i_2] [i_2 - 2] = ((/* implicit */_Bool) ((unsigned char) (short)-1));
            arr_29 [i_6] [i_6 + 1] [i_6 + 2] = ((3373691848U) / (((/* implicit */unsigned int) -1094236530)));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_13 &= ((/* implicit */_Bool) (-(((/* implicit */int) (short)2))));
            arr_34 [i_7] = ((/* implicit */unsigned int) -164628471);
        }
        var_14 = ((/* implicit */int) ((short) var_2));
    }
    for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
    {
        arr_37 [i_8 - 3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -650228957)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2340326568U))), (((/* implicit */unsigned int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))));
        var_15 = ((/* implicit */_Bool) min((min((354955727), (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) var_5)), (0)))));
    }
}
