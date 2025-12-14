/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89329
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
    var_20 += ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [(unsigned short)16] [(unsigned short)16] [(unsigned char)14] |= min((((long long int) 13487302351101619894ULL)), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-5)), (var_16)))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(18446744073709551605ULL))))));
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) (~(17106933U)))) : ((~(18446744073709551611ULL)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) 7ULL);
                arr_12 [i_1] [9] = ((/* implicit */unsigned char) ((unsigned long long int) arr_9 [i_0] [i_0]));
            }
        } 
    } 
    var_24 = min((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)2201)))), (((/* implicit */int) (signed char)81))))), (((long long int) 26ULL)));
}
