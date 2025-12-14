/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60982
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) var_0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7654339923656800346LL)) ? ((((!(((/* implicit */_Bool) -9223372036854775798LL)))) ? (max((-9223372036854775795LL), (((/* implicit */long long int) arr_6 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)10879)) ? (((/* implicit */int) (unsigned char)155)) : (503316480))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)148)), (-43663081)))))) ? (9223372036854775797LL) : (984852597541589356LL)));
                            }
                            var_16 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((long long int) ((((((/* implicit */_Bool) 841127241)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (short)-28550)))) & (((/* implicit */int) arr_14 [i_3]))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                            {
                                var_18 += ((/* implicit */short) max((((/* implicit */long long int) (short)-32723)), (-5387753632254125415LL)));
                                var_19 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */unsigned int) var_6);
}
