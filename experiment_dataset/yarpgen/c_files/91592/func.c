/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91592
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
    var_16 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((int) (signed char)-79)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [2LL] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_3]);
                                arr_16 [(_Bool)1] [i_3] [i_3 + 2] [i_3] [i_3] = ((/* implicit */long long int) ((min((var_4), (arr_6 [(_Bool)1] [i_1 - 2]))) ? (min((var_0), (((/* implicit */int) (_Bool)1)))) : (min((arr_10 [9] [i_3 - 1] [i_3] [i_3 - 2]), (((/* implicit */int) (unsigned short)35252))))));
                                var_17 = ((/* implicit */_Bool) (~((((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (11)))))));
                                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? ((~(((/* implicit */int) ((unsigned short) var_15))))) : (((int) arr_9 [i_1 + 1] [i_1 - 2] [i_3 - 3] [i_3 - 3]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                arr_25 [i_6] [i_6] = ((/* implicit */signed char) (unsigned short)35269);
                arr_26 [i_5] [i_6] [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_22 [i_6]))))) ? (((/* implicit */int) ((signed char) (~(var_14))))) : ((~(((/* implicit */int) (_Bool)1))))));
                arr_27 [i_6] [i_6] [i_6] = ((/* implicit */int) ((unsigned char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((_Bool) var_10)) && (((/* implicit */_Bool) arr_24 [i_5] [i_7] [i_8]))));
                            arr_34 [i_6] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_8)) ? (min((-468444200), (((/* implicit */int) (signed char)87)))) : (((/* implicit */int) (signed char)-43)))) + (2147483647))) >> (((max((((/* implicit */int) (unsigned char)1)), (var_8))) - (526705420)))));
                            var_20 = ((/* implicit */int) max((var_20), (-700284386)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = max((var_14), (((/* implicit */int) var_9)));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((int) var_6)))))));
}
