/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/694
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((var_12) / (((/* implicit */unsigned long long int) 895390578))));
                            arr_12 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((max((((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) ^ (var_11))), (((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_15))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0 + 2] [(unsigned char)12] [i_0 + 1] [i_1])) + (2147483647))) << (((max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))) - (9548223222934101651ULL)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) -1542687149)) ? (((/* implicit */int) (signed char)-55)) : (-895390578))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)8160)) ? (738862501) : (-895390555))), (((2078320635) / (895390575)))));
                                var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [(_Bool)1] [i_1] [(_Bool)1] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (arr_14 [i_6 + 2]))));
                                arr_20 [i_1] [i_0] [i_1] [i_4 + 2] [i_5] [i_6 + 1] = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_27 [i_1] [i_1] [i_7] [i_8 + 1] [i_8] = ((/* implicit */int) arr_4 [i_0 - 2]);
                            arr_28 [i_8] [i_1] [i_1] [i_0 + 2] = ((/* implicit */short) arr_8 [i_1] [(signed char)7] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
