/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76571
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
    var_15 = ((/* implicit */unsigned char) ((var_0) >= (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (7859482823485104560ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [5U] = ((/* implicit */long long int) arr_0 [2U]);
                                arr_13 [(signed char)6] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_3 [i_0] [(unsigned char)6] [i_0]));
                                var_17 = ((/* implicit */short) (-(((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [(signed char)10]))));
                                arr_14 [i_0] [(short)5] [(short)5] [(short)3] [(_Bool)1] = ((/* implicit */short) min(((~(((arr_3 [i_0] [i_2] [i_0]) ^ (arr_3 [i_0] [i_0] [(unsigned char)1]))))), (min((arr_1 [i_2] [i_0]), (((/* implicit */unsigned int) arr_4 [i_1 - 3] [i_1 - 2] [i_1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = arr_2 [i_0] [i_0];
                    arr_16 [i_2] [2U] [2U] [i_2] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (short)2047);
}
