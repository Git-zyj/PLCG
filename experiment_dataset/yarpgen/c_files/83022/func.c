/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83022
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
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] = ((int) ((((/* implicit */int) ((-606430253) > (arr_3 [i_0] [i_0] [i_2])))) ^ (var_11)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((((((/* implicit */_Bool) ((int) -1512173637))) ? (((int) var_13)) : ((~(var_8))))) / (-1512173637));
                                var_15 = max((((int) var_9)), (((/* implicit */int) ((((/* implicit */_Bool) 380822419)) && (((/* implicit */_Bool) 380822419))))));
                                var_16 = max((max((arr_6 [i_1] [i_1] [i_3] [i_4]), (((int) var_6)))), (((-1512173637) & (-1985236967))));
                                var_17 = ((int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (380822419)));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2] [i_2] [i_0]), (0)))) ? (((int) max((var_11), (var_4)))) : ((~(670776409))));
                }
            } 
        } 
    } 
    var_19 = ((((var_9) ^ (((((/* implicit */_Bool) var_10)) ? (1517621818) : (536870912))))) & (((((/* implicit */_Bool) ((1804713054) ^ (var_12)))) ? (max((1512173636), (1512173637))) : (((((/* implicit */_Bool) 1758240668)) ? (var_0) : (var_0))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 2])) ? (((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 + 3])) ? (var_0) : (arr_15 [i_5]))) : (var_12)))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_21 = ((((-860477925) > (536866816))) ? (var_8) : ((~(((((/* implicit */_Bool) 506735332)) ? (arr_18 [i_7]) : (-1))))));
                            var_22 = -536870912;
                            var_23 = ((((/* implicit */_Bool) var_11)) ? (((int) -506735332)) : (-1556359157));
                            var_24 = ((int) ((-2111732174) & (-1605968674)));
                            var_25 = ((/* implicit */int) max((var_25), (max(((~(2147483647))), (((int) 1080199546))))));
                        }
                    } 
                } 
                var_26 |= ((/* implicit */int) (((~(arr_14 [i_5 - 1] [i_6]))) != ((~(((2147483647) & (1717482964)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) max((891760457), (536866816)))))));
    var_28 = ((/* implicit */int) max((var_28), ((+(var_8)))));
}
