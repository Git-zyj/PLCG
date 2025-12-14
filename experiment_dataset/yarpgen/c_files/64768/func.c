/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64768
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((long long int) 2147483647);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 &= ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_3])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 1]))) < ((~(4294967295U))))))));
                                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (short)32750)) && (((/* implicit */_Bool) (unsigned short)5208)))))))));
                                arr_15 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4] = ((/* implicit */int) (((+((~(((/* implicit */int) arr_2 [i_0])))))) == (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)18)) ? (805112974322733906LL) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))))));
                                var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64668))) & (7009661866128010218LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */_Bool) -805112974322733907LL);
}
