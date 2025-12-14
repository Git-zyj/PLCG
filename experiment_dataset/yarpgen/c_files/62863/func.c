/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62863
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
    var_10 = ((/* implicit */unsigned char) var_1);
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((17448635161399859541ULL) != (17448635161399859511ULL))))));
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(18446744073709551605ULL))))));
                                arr_13 [i_0] [i_3] [8ULL] [i_3] [(signed char)4] [i_1] = ((/* implicit */signed char) arr_6 [i_1] [i_2 + 2] [i_2 + 2]);
                                var_15 = ((/* implicit */unsigned short) (~(998108912309692084ULL)));
                                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */int) 998108912309692104ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
